/*
날짜 : 2021-01-18
이름 : 홍정인
제목 : 어떤 함수에 대한 프로그램
설명 : d(n)을 n과 n의 각 자리수를 더하는 함수라고 정의, n을 d(n)의 생성자라고 한다.
		10000보다 작거나 같은 셀프 넘버를 한 줄에 하나씩 출력하는 프로그램
*/

#include <stdio.h>

int constructor(int n);

int main(void) {

	int array[10001] = { 0 };

	for (int i = 1; i <= 10000; i++) {
		array[constructor(i)]++;
	}

	for (int i = 1; i <= 10000; i++) {
		if (array[i] == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}

int constructor(int n) {

	int number = n;
	int result = n;

	while (number != 0) {
		result += (number % 10);
		number /= 10;
	}

	if (result > 10000)
		return 0;
	return result;
}