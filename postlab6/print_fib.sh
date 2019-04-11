#!/bin/bash

read n
prepre=0
pre=1
result=0

for (( i=2; i<=n; i++))
do
        ((result=$prepre+$pre))
        prepre=$pre
        pre=$result
done

echo "fib($n)=$result"
