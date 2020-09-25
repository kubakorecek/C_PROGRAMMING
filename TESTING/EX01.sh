#!bin/bash

for SOURCE_FILE in ../EX01/*.c; do
	echo "\e[1;31m ${SOURCE_FILE} \e[0m";
	cat "$SOURCE_FILE";
	g++ -Wall -pedantic $SOURCE_FILE -o out;
	./out;
	rm out;

done
 
