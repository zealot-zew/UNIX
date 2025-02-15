#!/bin/bash
echo "Enter a number:"
read num
if (( num % 3 == 0 && num % 5 == 0 )); then
    echo "$num is divisible by both 3 and 5"
else
    echo "$num is NOT divisible by both 3 and 5"
fi
