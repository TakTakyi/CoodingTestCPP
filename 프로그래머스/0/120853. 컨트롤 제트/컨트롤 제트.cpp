#include <string>
#include <vector>
#include <iostream>
#include <sstream>  //문자열을 공백을 기준으로 분리하기위한 라이브러리 추가
#include <stack>    //스택 자료구조를 사용하기 위한 라이브러리 추가

using namespace std;

stack<int> sumStack; //스택 변수 추가

int solution(string s) {
    int answer = 0;
    stringstream ss(s); //공백을 기준으로 문자열을 분리
    string str; //나눈 문자열을 담을 문자열 변수
    
    //스텍에 Z가 아니면 정수형으로 형변환하여 push하고 Z이면 직전에 push된 정수를 pop한다
    while(ss >> str)
    {
        if(str == "Z") //분리된 문자열중 Z가 있으면 스택에서 pop한다
        {
            sumStack.pop();
        }
        else //그외에는 정수형으로 형변환 하고 push한다
        {
            sumStack.push(stoi(str));
        }
    }
    
    //스택에 저장된 숫자들을 전부 더한다
    //스택에서 하나씩 더한후 더한 후 pop한다
    while(!sumStack.empty())
    {
        answer+=sumStack.top();
        sumStack.pop();
    }
    
    return answer;  //결과값 리턴
}