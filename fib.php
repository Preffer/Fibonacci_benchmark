<?php

function calc($current){
	if($current >= 3){
		return calc($current-1) + calc($current-2);
	} else{
		return 1;
	}
}

$start = 40;

for($i = 1; $i <= $start; $i++){
	$tpstart = gettimeofday(true);
	echo("Calc to: " . $i . " Result: " . calc($i));
	$tpend = gettimeofday(true);
	$timeuse = $tpend - $tpstart; 
	echo(" Elapsed: " . $timeuse . "\n");
}

?>