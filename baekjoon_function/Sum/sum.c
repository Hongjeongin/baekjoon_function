/*
��¥ : 2021-01-06
�̸� : ȫ����
���� : �Լ� - n���� ���� ��
���� : n���� �̷���� �迭 a�� �� ���ҵ��� ���� �����ϴ� �Լ��̴�.
*/

long long sum(int *a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}
	return ans;
}