#!/bin/bash
echo "Enter a number:"
read num
rev=$(echo $num | rev)
if [ "$num" -eq "$rev" ]; then
    echo "Palindrome"
else
    echo "Not a Palindrome"
fi
