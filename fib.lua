function fib (n)
	if n >= 3 then
		return fib(n-1) + fib(n-2);
	else
		return 1;
	end
end

if #arg ~= 1 then
	print('Usage: lua fib.lua <n>')
	return 1
end

for i = 1, tonumber(arg[1]) do
	tpstart = os.clock()
	result = fib(i)
	tpend = os.clock()
	timeuse = tpend - tpstart
	print(string.format("Calculated Fib(%d) = %f, Time Used: %f s", i, result, timeuse))
end