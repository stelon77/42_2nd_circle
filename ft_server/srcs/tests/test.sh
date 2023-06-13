#!/bin/bash

echo "CREATE DATABASE example_database;" | mysql -u root
echo "GRANT ALL ON example_database.* TO 'my_user'@'localhost' IDENTIFIED BY 'my_password' WITH GRANT OPTION;" | mysql -u root
echo "FLUSH PRIVILEGES" | mysql -u root

echo "CREATE TABLE example_database.todo_list (item_id INT AUTO_INCREMENT, content VARCHAR(255), PRIMARY KEY(item_id));" | mysql -u root

echo "INSERT INTO example_database.todo_list (content) VALUES ('Hi young Skywalker');" | mysql -u root
echo "INSERT INTO example_database.todo_list (content) VALUES ('My name is Vader...Darth Vader');" | mysql -u root
echo "INSERT INTO example_database.todo_list (content) VALUES ('and.....');" | mysql -u root
echo "INSERT INTO example_database.todo_list (content) VALUES ('I\'m your father');" | mysql -u root
