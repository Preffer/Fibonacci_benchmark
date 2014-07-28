/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * calc.cpp
 * Copyright (C) 2014 hyz <hyz@Aspire>
 * 
 * fabar is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * fabar is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <sys/time.h>

inline double calc(double current){
	//std::cout << "current:" << current << std::endl;
	if(current >= 3){
		return calc(current-1) + calc(current-2);
	} else{
		return 1;
	}
}

int main()
{
	int start;
	struct timeval tpstart,tpend; 
	double timeuse;
	std::cout << "Calc to ?" << std::endl;
	std::cin >> start;
	for(int i = 1; i <= start; i++){
		gettimeofday(&tpstart,NULL);
		std::cout << "Calc to: " << i << " Result: " << calc(i);
		gettimeofday(&tpend,NULL);
		timeuse = 1000000*(tpend.tv_sec-tpstart.tv_sec)+tpend.tv_usec-tpstart.tv_usec; //计算差值
		timeuse /= 1000000; 
		std::cout << " Elapsed: " << timeuse << std::endl;
	}
	return 0;
}


