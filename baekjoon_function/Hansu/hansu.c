/*
날짜 : 2021-01-19
이름 : 홍정인
제목 : 한수 개수 구하기
설명 : 어떤 양의 정수 X의 각 자리수가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
		N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램
*/

#include <stdio.h>

int hansu(int n);

int main(void) {

	int count = 0;
	int scan;

	printf("정수 X를 입력해주세요 : ");
	scanf("%d", &scan);

	for (int i = 1; i <= scan; i++) {
		if (hansu(i) == 0)
			count++;
	}

	printf("%d보다 작거나 같은 한수의 개수는 %d개 입니다.\n", scan, count);

	return 0;
}

int hansu(int n) {

	int i = n;
	int firstNum, secondNum;
	int difference;

	if (1 >= n && n <= 99)
		return 0;

	firstNum = i % 10;
	i /= 10;
	difference = firstNum - (i % 10);

	while (i != 0) {
		secondNum = firstNum;
		firstNum = i % 10;
		if (difference != (secondNum - firstNum))
			break;
		i /= 10;
	}

	if (i != 0)
		return 1;

	return 0;
}