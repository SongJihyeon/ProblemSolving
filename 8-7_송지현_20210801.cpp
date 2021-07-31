//백준
//1920. 수 찾기
//C++

#include <iostream>
#include <algorithm>
using namespace std;
int arrA[100000];
int arrB[100000];
int result[100000];

int main(void) {
	//input
	int N, M;
	cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> arrA[n];
	}
	cin >> M;
	for (int m = 0; m < M; m++) {
		cin >> arrB[m];
	}
    //perform
	sort(arrA, arrA + N);
	for (int m = 0; m < M; m++) {
		int head = 0;
		int tail = N-1;
		int mid;
		while (head <= tail) {
			mid = (head + tail) / 2;
			if (arrB[m] == arrA[mid]) {
				result[m] = 1; break;
			}
			else if (arrB[m] > arrA[mid]) {
				head = mid+1;
			}
			else {
				tail = mid-1;
			}
		}
        //output
		printf("%d\n", result[m]);
	}

}