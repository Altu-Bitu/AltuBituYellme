// 문제
// 선영이는 주말에 할 일이 없어서 새로운 언어 AC를 만들었다.
// AC는 정수 배열에 연산을 하기 위해 만든 언어이다.이 언어에는 두 가지 함수 R(뒤집기)과 D(버리기)가 있다.
//
// 함수 R은 배열에 있는 숫자의 순서를 뒤집는 함수이고, D는 첫 번째 숫자를 버리는 함수이다.
// 배열이 비어있는데 D를 사용한 경우에는 에러가 발생한다.
//
// 함수는 조합해서 한 번에 사용할 수 있다.
// 예를 들어, "AB"는 A를 수행한 다음에 바로 이어서 B를 수행하는 함수이다.
// 예를 들어, "RDD"는 배열을 뒤집은 다음 처음 두 숫자를 버리는 함수이다.
// 
// 배열의 초기값과 수행할 함수가 주어졌을 때, 최종 결과를 구하는 프로그램을 작성하시오.

#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

int main(void)
{
    int T;
    cin >> T;

    while(T--)
    {
        string cmd, arr, temp;
        int N;
        cin >> cmd >> N >> arr;

        deque<int> dq;

        for (int i = 0; i < arr.length(); i++) {
            if (arr[i] == '[')
                continue;

            else if ('0' <= arr[i] && arr[i] <= '9')
                temp += arr[i];

            else if (arr[i] == ',' || arr[i] == ']')
            {
                if (!temp.empty())
                {
                    dq.push_back(stoi(temp));
                    temp.clear();
                }
            }
        }

        bool error = false, reverse = true;

        for (int i = 0; i < cmd.length(); i++) {
            if (cmd[i] == 'R')
                reverse = !reverse;
            else
            {
                if (dq.empty())
                {
                    error = true;
                    cout << "error\n";
                    break;
                }
                else
                    if (reverse)
                        dq.pop_front();
                    else
                        dq.pop_back();
            }
        }

        if (!error)
        {
            if (reverse)
            {
                cout << "[";

                while (!dq.empty())
                {
                    cout << dq.front();
                    dq.pop_front();

                    if (!dq.empty())
                        cout << ",";
                }

                cout << "]\n";
            }

            else
            {
                cout << "[";

                while (!dq.empty())
                {
                    cout << dq.back();
                    dq.pop_back();

                    if (!dq.empty())
                        cout << ",";
                }

                cout << "]\n";
            }
        }
    }

    return 0;
}