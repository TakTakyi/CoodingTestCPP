#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int temp; //전역변수
 
//정렬 함수
bool compare(int a, int b)
{
    // 절댓값
    int num1 = abs(temp - a);
    int num2 = abs(temp - b);
    
    // 만약 두 수가 같다면 내림차순
    // n이 4일 경우 5,3이면 num1,2가 같음
    // 값이 같을 경우 내림차순
    if (num1 == num2)
    {
        return a > b;
    }
    
    // n과 가까운 순서대로 정렬
    // n이 30일 경우 num1 = 6 , num2 = 10
    // 값을 비교했을때 값이 더작은값이 n과 가까운수
    // 가까운수 부터 정렬
    return num1 < num2;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    
    answer = numlist; //벡터 복사하기
    
    temp = n; //전역변수에 비교할 정수n을 대입한다
    //정렬 함수 사용
    //복사한 벡터를 정렬한다
    //정렬 할때 compare함수를 통해 정렬한다
    sort(answer.begin(), answer.end(), compare);
    
    return answer;
}