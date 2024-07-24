#include <string>
#include <vector>
#include <iostream>

using namespace std;

//문자열을 비교하기 위한 백턴 전역변수선언
//숫자를 영어로 쓴 문자열 벡터
vector<string> m_NumStr ={"zero", "one", "two", "three", "four",
                   "five", "six", "seven", "eight", "nine"};

long long solution(string numbers) {
    long long answer = 0;
    
    while(numbers.length() != 0)
    {
        for(int i = 0; i < m_NumStr.size(); i++)
        { 
            cout << i <<endl;
            if(numbers.substr(0, m_NumStr[i].length()) == m_NumStr[i])
            {
                answer = answer*10+i; //answer*10은 자릿수 늘리기, 영어로된 숫자를 삽입 
                numbers = numbers.substr(m_NumStr[i].length()); //확인된 문자열을 제거한다
                //break;
            }
        }
    }
    
    return answer;
}