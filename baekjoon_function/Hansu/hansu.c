/*
��¥ : 2021-01-19
�̸� : ȫ����
���� : �Ѽ� ���� ���ϱ�
���� : � ���� ���� X�� �� �ڸ����� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�. ���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�.
		N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷�
*/

#include <stdio.h>

int hansu(int n);

int main(void) {

	int count = 0;
	int scan;

	printf("���� X�� �Է����ּ��� : ");
	scanf("%d", &scan);

	for (int i = 1; i <= scan; i++) {
		if (hansu(i) == 0)
			count++;
	}

	printf("%d���� �۰ų� ���� �Ѽ��� ������ %d�� �Դϴ�.\n", scan, count);

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