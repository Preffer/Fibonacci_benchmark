'use strict';

if(process.argv.length != 3){
	console.log('Usage: nodejs fib.js <n>')
	process.exit(1);
}

var start = process.argv[2];
var tpstart, tpend, timeuse, result;

function fib(current){
	if(current >= 3){
		return fib(current-1) + fib(current-2);
	} else{
		return 1;
	}
}

for(var i = 1; i <= start; i++){
	tpstart = Date.now();
	result = fib(i);
	tpend = Date.now();
	timeuse = (tpend - tpstart) / 1000;
	console.log('Calculated Fib(' + i + ') = ' + result + ', Time Used: ' + timeuse + 's');
}
