#! /usr/bin/env python
import sys
import time

def fib(current):
	if (current >= 3):
		return fib(current-1) + fib(current-2)
	else:
		return 1

if len(sys.argv) != 2:
	print("Usage: python fib.py <n>")
	exit()


for i in range(1, int(sys.argv[1])):
	tpstart = time.time()
	result = fib(i)
	tpend = time.time()
	timeuse = tpend - tpstart
	print("Calculated Fib(%s) = %s, Time Used: %ss" % (i, result, timeuse))
