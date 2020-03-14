#!/bin/bash
find .  \( -type d -o  -type f \) | wc -l |sed 's$ $$g'
