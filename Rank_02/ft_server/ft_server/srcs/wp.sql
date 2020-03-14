
create database kifarunixdemo;
create user demouser@localhost identified by '123';
grant all privileges on kifarunixdemo.* to demouser@localhost;
flush privileges;
quit