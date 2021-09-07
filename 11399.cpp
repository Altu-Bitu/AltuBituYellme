//����
//�������࿡�� ATM�� 1��ۿ� ����.���� �� ATM�տ� N���� ������� ���� ���ִ�.
//����� 1������ N������ ��ȣ�� �Ű��� ������, i�� ����� ���� �����ϴµ� �ɸ��� �ð��� Pi���̴�.
//������� ���� ���� ������ ����, ���� �����ϴµ� �ʿ��� �ð��� ���� �޶����� �ȴ�.
//���� ���, �� 5���� �ְ�, P1 = 3, P2 = 1, P3 = 4, P4 = 3, P5 = 2 �� ��츦 �����غ���.
//[1, 2, 3, 4, 5] ������ ���� ���ٸ�, 1�� ����� 3�и��� ���� ���� �� �ִ�. 
//2�� ����� 1�� ����� ���� ���� �� ���� ��ٷ��� �ϱ� ������, 3 + 1 = 4���� �ɸ��� �ȴ�. 3�� ����� 1��, 2�� ����� ���� ���� ������ ��ٷ��� �ϱ� ������, �� 3 + 1 + 4 = 8���� �ʿ��ϰ� �ȴ�. 4�� ����� 3 + 1 + 4 + 3 = 11��, 5�� ����� 3 + 1 + 4 + 3 + 2 = 13���� �ɸ��� �ȴ�.�� ��쿡 �� ����� ���� �����ϴµ� �ʿ��� �ð��� ���� 3 + 4 + 8 + 11 + 13 = 39���� �ȴ�.
//����[2, 5, 1, 4, 3] ������ ���� ����, 2�� ����� 1�и���, 5�� ����� 1 + 2 = 3��,
//1�� ����� 1 + 2 + 3 = 6��, 4�� ����� 1 + 2 + 3 + 3 = 9��, 3�� ����� 1 + 2 + 3 + 3 + 4 = 13���� �ɸ��� �ȴ�.
//�� ����� ���� �����ϴµ� �ʿ��� �ð��� ���� 1 + 3 + 6 + 9 + 13 = 32���̴�.
//�� ������� �� �ʿ��� �ð��� ���� �ּҷ� ���� ���� ����.
//���� �� �ִ� ����� �� N�� �� ����� ���� �����ϴµ� �ɸ��� �ð� Pi�� �־����� ��,
//�� ����� ���� �����ϴµ� �ʿ��� �ð��� ���� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> time;
	time.assign(N, 0);
	for (int i = 0; i < N; i++) {
		int val;
		cin >> val;
		time[i] = val;
	}

	sort(time.begin(), time.end());

	int mul = N, sum = 0;
	for (int i = 0; i < N; i++) {
		sum += time[i] * mul--;
	}

	cout << sum << "\n";
}