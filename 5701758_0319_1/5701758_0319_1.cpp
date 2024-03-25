#include <stdio.h>
#include <time.h>

double factorial_iter(int n) { // ����Լ�
	if (n == 1) return 1;
	return n * factorial_iter(n - 1);
}

double factorial_rec(int n) { // ��ȯ�Լ�
	if (n <= 1) {
		return 1;
	}
	
	return n * factorial_rec(n - 1);
}

int main(int argc, char* argv[]) {
	
	clock_t start_iter, end_iter, start_rec, end_rec; // �ð� ���� ���� ����

	start_iter = clock(); // �ð� ���� ����
	double result_iter = factorial_iter(20); // ����Լ��� �̿��� ���
	end_iter = clock(); // �ð� ���� ��
	long time_sum_iter = end_iter - start_iter; // �ð� ���� ��� ��
	printf("Factorial Iterative Result: %f \n", result_iter); // ����Լ��� ���� ��� ���
	printf("Time: %f \n", (float)time_sum_iter/CLOCKS_PER_SEC); // �ð� ���� ��� �� ���
	start_rec = clock(); // �ð� ���� ����
	double result_rec = factorial_rec(20); // ��ȯ�Լ��� �̿��� ���
	end_rec = clock(); // �ð� ���� ��
	long time_sum_rec = end_rec - start_rec; // �ð� ���� ��� ��
	printf("Factorial Recursive Result: %f \n", result_rec); //��ȯ�Լ��� ���� ��� ���
	printf("Time: %f \n", (float)time_sum_rec/CLOCKS_PER_SEC); // �ð� ���� ��� �� ���

}