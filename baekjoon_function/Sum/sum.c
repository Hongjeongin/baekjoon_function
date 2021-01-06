/*
날짜 : 2021-01-06
이름 : 홍정인
제목 : 함수 - n개의 정수 합
설명 : n개로 이루어진 배열 a의 각 원소들의 합을 리턴하는 함수이다.
*/

long long sum(int *a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}
	return ans;
}