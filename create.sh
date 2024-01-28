#!/bin/bash
echo "Enter the question number: "
read question_no
echo "Enter the question(press Ctrl+D when done): "
question=$(cat)
file_name="${question_no}.c"
echo -e "/*$question*/" > "$file_name"
echo "File '$file_name' is created with the question."
read -n 1 -s -r -p "Press any key to exit..."
echo "Exiting"
