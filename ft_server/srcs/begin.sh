#!/bin/bash

if [ -n $AUTOINDEX ] && [ "$AUTOINDEX" == "off" ]
then
   sed -i "s/autoindex on/autoindex ${AUTOINDEX}/" /etc/nginx/sites-available/localhost
fi

service nginx reload
service nginx start

service mysql start

/etc/init.d/php7.3-fpm start

#/bin/bash
tail -f /var/log/nginx/access.log /var/log/nginx/error.log
