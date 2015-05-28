#!/usr/bin/ruby
def fib(n)
	if (n >= 3)
		return fib(n-1) + fib(n-2)
	else
		return 1
	end
end

if ARGV.length != 1
	puts("Usage: ruby fib.rb <n>")
	exit()
end

for i in 1..ARGV.first.to_i()
	tpstart = Time.now()
	result = fib(i)
	tpend = Time.now()
	timeuse = tpend - tpstart
	puts("Calculated Fib(#{i}) = #{result}, Time Used: #{timeuse}s")
end
