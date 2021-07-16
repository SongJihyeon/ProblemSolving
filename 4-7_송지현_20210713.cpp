//프로그래머스
//하샤드 수
//C++

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
	int temp = x; 
	int sum = 0;

	while (x) {
		sum += x % 10;
		x /= 10;
	}
	if (temp%sum == 0) return true;
	else return false;
}