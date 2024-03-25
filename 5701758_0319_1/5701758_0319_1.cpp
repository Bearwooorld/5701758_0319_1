#include <stdio.h>
#include <time.h>

double factorial_iter(int n) { // 재귀함수
	if (n == 1) return 1;
	return n * factorial_iter(n - 1);
}

double factorial_rec(int n) { // 순환함수
	if (n <= 1) {
		return 1;
	}
	
	return n * factorial_rec(n - 1);
}

int main(int argc, char* argv[]) {
	
	clock_t start_iter, end_iter, start_rec, end_rec; // 시간 측정 변수 선언

	start_iter = clock(); // 시간 측정 시작
	double result_iter = factorial_iter(20); // 재귀함수를 이용한 결과
	end_iter = clock(); // 시간 측정 끝
	long time_sum_iter = end_iter - start_iter; // 시간 측정 결과 값
	printf("Factorial Iterative Result: %f \n", result_iter); // 재귀함수에 의한 결과 출력
	printf("Time: %f \n", (float)time_sum_iter/CLOCKS_PER_SEC); // 시간 측정 결과 값 출력
	start_rec = clock(); // 시간 측정 시작
	double result_rec = factorial_rec(20); // 순환함수를 이용한 결과
	end_rec = clock(); // 시간 측정 끝
	long time_sum_rec = end_rec - start_rec; // 시간 측정 결과 값
	printf("Factorial Recursive Result: %f \n", result_rec); //순환함수에 의한 결과 출력
	printf("Time: %f \n", (float)time_sum_rec/CLOCKS_PER_SEC); // 시간 측정 결과 값 출력

}