/*
��¥ : 2021-01-18
�̸� : ȫ����
���� : � �Լ��� ���� ���α׷�
���� : d(n)�� n�� n�� �� �ڸ����� ���ϴ� �Լ���� ����, n�� d(n)�� �����ڶ�� �Ѵ�.
		10000���� �۰ų� ���� ���� �ѹ��� �� �ٿ� �ϳ��� ����ϴ� ���α׷�
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