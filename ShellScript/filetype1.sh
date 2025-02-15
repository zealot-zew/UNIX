#!/bin/bash
echo "Enter a file name:"
read file
if [ -f "$file" ]; then
    echo "$file is a regular file"
elif [ -d "$file" ]; then
    echo "$file is a directory"
elif [ -L "$file" ]; then
    echo "$file is a symbolic link"
else
    echo "$file does not exist"
fi
