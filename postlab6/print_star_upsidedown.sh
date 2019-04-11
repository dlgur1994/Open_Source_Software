#!/bin/bash

read n
if [ "$n" -lt "1" ]; then
        echo ""
fi
if [ "$n" -gt "12" ]; then
        echo "Input Error"
fi

for (( i=n; i>0; i--))
do
        for (( j=0; j<n-i; j++))
        do
        echo -n " "
        done
        for (( j=0; j<2*i-1; j++))
        do
        echo -n "*"
        done
        for (( j=0; j<n-i; j++))
        do
        echo -n " "
        done
        printf "\n"
done
