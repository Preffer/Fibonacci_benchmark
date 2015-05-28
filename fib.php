<?php

if($argc != 2){
	echo('Usage: php fib.php <n>\n');
	exit(1);
}

function fib($n){
	if($n >= 3){
		return fib($n-1) + fib($n-2);
	} else{
		return 1;
	}
}

$stop = $argv[1];
for($i = 1; $i <= $stop; $i++){
	$tpstart = gettimeofday(true);
	$result = fib($i);
	$tpend = gettimeofday(true);
	$timeuse = $tpend - $tpstart;
	echo("Calculated Fib($i) = $result, Time Used: $timeuse s\n");
}
