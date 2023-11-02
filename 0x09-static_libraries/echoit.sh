#!/bin/bash

# Check if main.h exists
if [ ! -f main.h ]; then
  echo "main.h does not exist in the current directory."
  exit 1
fi

# Loop through each line in main.h
while IFS= read -r line; do
  # Extract function name and prototype
  function_name=$(echo "$line" | awk '{print $NF}' | sed 's/;$//')
  prototype=$(echo "$line" | sed "s/$function_name//")

  # Check if the function name is not empty
  if [ -n "$function_name" ]; then
    # Check for C files and add the prototype to them
    for file in *.c; do
      if [ -f "$file" ]; then
        # Create a temporary file with the new content
        tempfile=$(mktemp)
        cp "$file" "$tempfile"
        awk -v prototype="$prototype" '/^int[ \t]'$function_name'/{print prototype} 1' "$tempfile" > "$file"
        rm "$tempfile"
        echo "Added prototype to $file: $prototype"
      fi
    done
  fi
done < main.h
