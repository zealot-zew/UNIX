#!/bin/bash
echo "Enter a grade (A/B/C/D/F):"
read grade
case $grade in
    A) echo "Excellent";;
    B) echo "Good";;
    C) echo "Average";;
    D) echo "Poor";;
    F) echo "Fail";;
    *) echo "Invalid grade";;
esac
