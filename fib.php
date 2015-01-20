<?php

if($argc != 2){
	echo('Usage: php fib.php <n>\n');
	exit(1);
}

function fib($current){
	if($current >= 3){
		return fib($current-1) + fib($current-2);
	} else{
		return 1;
	}
}

$start = $argv[1];
for($i = 1; $i <= $start; $i++){
	$tpstart = gettimeofday(true);
	$result = fib($i);
	$tpend = gettimeofday(true);
	$timeuse = $tpend - $tpstart;
	echo("Calculated Fib($i) = $result, Time Used: $timeuse s\n");
}

?>