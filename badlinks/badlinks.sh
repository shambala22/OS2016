#!/bin/bash

for i in $(find -L $1 -mtime +7)
do
    if $(test -h $i && !(test -e $i))
        then echo $i; 
    fi
done

