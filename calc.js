'use strict';

function calc(current){
	if(current >= 3){
		return calc(current-1) + calc(current-2);
	} else{
		return 1;
	}
}

var start = 45;
var tpstart, tpend, timeuse, result;

for(var i = 1; i <= start; i++){
	var myDate = new Date();
	tpstart = myDate.getTime();
	result = calc(i);
	myDate = new Date();
	tpend = myDate.getTime();
	timeuse = (tpend - tpstart)/1000;
	console.log("Calc to: " + i + " Result: " + result + " Elapsed: " + timeuse);
}
