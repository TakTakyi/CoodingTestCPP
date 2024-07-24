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
    
    //매개변수로 들어온 문자열의 0이될때까지 반복
    while(numbers.length() != 0)
    {
        //전역변수로 선언된 벡터와 매개변수로 들어온 문자열을 비교하기 위한 반복문
        for(int i = 0; i < m_NumStr.size(); i++)
        { 
            //substr은 문자열을 인덱스만큼 문자열을 반환하는 함수
            //매개변수numbers를 벡터의 문자열만큼만 비교하고 비교한 값이 같으면 
            //answer에 값을 대입한다
            //값을 대입후 확인된 문자열만큼 지운다 
            //문자열을 지우는 것은 while문의 조건식에 의해서 이다
            if(numbers.substr(0, m_NumStr[i].length()) == m_NumStr[i])
            {
                answer = answer*10+i; //answer*10은 자릿수 늘리기, 영어로된 숫자를 삽입 
                numbers = numbers.substr(m_NumStr[i].length()); //확인된 문자열을 제거한다
                break; //for문에 경우 조건식만큼 반복이 들어가기때문에 if문이 실행되면 바로 종료 시키므로 연산량을 줄인다
            }
        }
    }
    
    return answer;
}