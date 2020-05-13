#!/usr/bin/python3
import sys
if (len(sys.argv) == 2 and  isinstance(sys.argv[1], int)):
	print(len((sys.argv[1]))
	par = (int)(sys.argv[1])
	if (par  == 0):
		print("I'm Zero.")
	elif (par % 2 == 0):
		print("I'm Even.")
	else:
		print("I'm Odd.")
else:
	print("ERROR")	
