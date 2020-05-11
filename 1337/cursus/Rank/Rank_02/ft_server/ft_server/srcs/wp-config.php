<?php
/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://codex.wordpress.org/Editing_wp-config.php
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define( 'DB_NAME', 'kifarunixdemo' );

/** MySQL database username */
define( 'DB_USER', 'demouser' );

/** MySQL database password */
define( 'DB_PASSWORD', '123' );

/** MySQL hostname */
define( 'DB_HOST', 'localhost/kifarunix-demo' );

/** Database Charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8' );

/** The Database Collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define('AUTH_KEY',         '|WYo279FcL.j_ G$DOn;TXsH/wP=[$[1i^+~`|;!w|!KIa1$R5`D,0<V5prPa;m4');
define('SECURE_AUTH_KEY',  'ojU%olj}N`1<DgV_F?P=Xrc[z|j*TH@Ll+.Xh>=V|FM*K`@C^RWSPv{V./k){s ]');
define('LOGGED_IN_KEY',    't[8x41+V0D>_jO4=#g*u{o|?Hy_$A(u?@-`0G5R6-n$i;Q=u!8+:0tT/5:Q=8<Vg');
define('NONCE_KEY',        'z}yPWE]g=uo1Ex0rPS3S~kQ1A#.yBHi5W h^P)i}>;_[P`Zx,B%d5}.{q>ZPMmLu');
define('AUTH_SALT',        'MA) ~|J?G!X)uI+k@yT(*mUZBWsQiNPS]*^x-<cp+DYA=J:N]7O+t_rU(^)@+kqv');
define('SECURE_AUTH_SALT', 'Zjl&O}$qz|f(sRSe%ZT*@SkCg.`Sm/e0Z/CEW<|vRwOl}qbR!nzA-D>X%eKGcV2E');
define('LOGGED_IN_SALT',   'GBp!7=U*T~#-%Ly?FnS$qgYEzGnX1w3!Bo_ ]$o]EDj{wh,fe1NJK9VkI_n ;hTD');
define('NONCE_SALT',       'fdTm,$h?vjzLS(yMKj!rR]0aZ*f(Q(/t|cS|;o)%{GqCK4IxG-+fyL_Yan~ns4XF');


/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the Codex.
 *
 * @link https://codex.wordpress.org/Debugging_in_WordPress
 */
define( 'WP_DEBUG', false );

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if ( ! defined( 'ABSPATH' ) ) {
        define( 'ABSPATH', dirname( __FILE__ ) . '/' );
}

/** Sets up WordPress vars and included files. */
require_once( ABSPATH . 'wp-settings.php' );