#! /usr/bin/python3
import time;  

def calc(current):
	if (current >= 3):
		return calc(current-1) + calc(current-2)
	else:
		return 1

for i in range(1, 41, 1):
	tpstart = time.time()
	result = calc(i)
	tpend = time.time()
	timeuse = tpend - tpstart
	print("Calc to: " + str(i) + " Result: " + str(result) + " Elapsed: " + str(timeuse))	
