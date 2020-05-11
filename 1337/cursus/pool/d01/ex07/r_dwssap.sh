#!/bin/bash
cat /etc/passwd | grep -v '^#' | awk 'NR%2==0' | cut -f 1 -d ':' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr "\n" "," | sed 's/,/, /g' | sed 's/, $/./g' | tr -d '\n'
