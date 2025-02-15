#!/bin/bash
echo "Enter a character:"
read char
if [[ $char =~ [A-Z] ]]; then
    echo "Uppercase Letter"
elif [[ $char =~ [a-z] ]]; then
    echo "Lowercase Letter"
else
    echo "Not a letter"
fi
