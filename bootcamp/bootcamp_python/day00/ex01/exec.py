#!/usr/bin/python3
import string
import sys
str = str2 = ''
n = len(sys.argv)
for i in range(1,n):
	str += sys.argv[i] + ' '
str = str[::-1]
for c in str:
	str2 += c.swapcase()
print(str2)
	
