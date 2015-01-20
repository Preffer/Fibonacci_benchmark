'use strict';

if(process.argv.length != 3){
	console.log('Usage: nodejs fib.js <n>')
	process.exit(1);
}

function fib(n){
	if(n >= 3){
		return fib(n-1) + fib(n-2);
	} else{
		return 1;
	}
}

var start = process.argv[2];
var tpstart, tpend, timeuse, result;

for(var i = 1; i <= start; i++){
	tpstart = Date.now();
	result = fib(i);
	tpend = Date.now();
	timeuse = (tpend - tpstart) / 1000;
	console.log('Calculated Fib(' + i + ') = ' + result + ', Time Used: ' + timeuse + 's');
}
