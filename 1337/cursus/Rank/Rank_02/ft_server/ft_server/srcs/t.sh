apt-get -y update
apt-get -y upgrade
apt install -y wget

#nginx
apt-get -y install nginx
service nginx start

#php
apt install -y mariadb-server mariadb-client
service mysql start
#mysql < tmp/MariaDBinitialSecurity.sql
apt install -y php-fpm php-mysql php-curl php-gd php-intl php-mbstring php-soap php-xml php-xmlrpc php-zip
cp tmp/default /etc/nginx/sites-enabled/default
service php7.3-fpm start
service  php7.3-fpm restart

#phpmyadmin
apt install -y php-{mbstring,zip,gd,xml,pear,gettext,cgi}
wget https://files.phpmyadmin.net/phpMyAdmin/4.9.0.1/phpMyAdmin-4.9.0.1-english.tar.gz
mkdir /var/www/html/phpmyadmin
tar xzf phpMyAdmin-4.9.0.1-english.tar.gz --strip-components=1 -C /var/www/html/phpmyadmin
cp tmp/config.inc.php /var/www/html/phpmyadmin/config.inc.php
chmod 660 /var/www/html/phpmyadmin/config.inc.php
chown -R www-data:www-data /var/www/html/phpmyadmin
#wp
apt update
apt upgrade
cp tmp/kifarunix-demo /etc/nginx/sites-available/kifarunix-demo
ln -s /etc/nginx/sites-available/kifarunix-demo /etc/nginx/sites-enabled/
wget https://wordpress.org/latest.tar.gz -P /tmp
mkdir /var/www/html/kifarunix-demo
tar xzf /tmp/latest.tar.gz --strip-components=1 -C /var/www/html/kifarunix-demo
cp /var/www/html/kifarunix-demo/wp-config{-sample,}.php
cp tmp/wp-config.php  /var/www/html/kifarunix-demo/wp-config.php
chown -R www-data:www-data /var/www/html/kifarunix-demo
mysql < tmp/wp2.sql 

mysql --user=root --password=123 kifarunixdemo < tmp/kifarunixdemo.sql
#Ssl
mkdir /etc/nginx/ssl
cp  tmp/kifarunix-demo.pem /etc/nginx/ssl/kifarunix-demo.pem && cp tmp/kifarunix-demo.key /etc/nginx/ssl/kifarunix-demo.key
service nginx restart
cat