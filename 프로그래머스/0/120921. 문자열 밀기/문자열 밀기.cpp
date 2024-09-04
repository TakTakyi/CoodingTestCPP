#include <string>
#include <vector>
#include <iostream>

using namespace std;

//문자열 밀기 함수
//매개변수로 들어온 문자열의 마지막문자를
//함수 내부에 선언된 문자에 삽입후
//나머지 문자를 삽입
string stringpush(string A)
{
    string test; //문자열 변수
    
    test = A[A.length()-1];
    //cout << test << endl;
    for (int ii = 0; ii < A.length()-1; ii++)
    {
        test += A[ii];
    }
    
    return test;     
}

int solution(string A, string B) {
    int answer = 0;
    
    //두 매개변수의 값이 같을경우
    if (A == B)
    {
        return answer = 0;
    }
    
    int ii = 0;
    string c = A;
    while(1)
    {
        c = stringpush(c);
        //cout << c << endl;
        ii++;
        if (c == B)
        {
            answer = ii;
            break;
        }
        else if (c == A)
        {
            answer = -1;
            break;
        }
    }
    
    return answer;
}