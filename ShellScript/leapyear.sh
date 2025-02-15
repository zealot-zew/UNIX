#!/bin/bash
echo "Enter a year:"
read year
if (( year % 4 == 0 && year % 100 != 0 )) || (( year % 400 == 0 )); then
    echo "$year is a Leap Year"
else
    echo "$year is NOT a Leap Year"
fi
