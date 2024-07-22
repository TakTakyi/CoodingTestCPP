#include <string>
#include <vector>
#include <iostream>
#include <sstream> // cpp의 문자열 스트림을 사용하기 위한 헤더 추가

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    stringstream ss(my_string); //공백 단위로 문자열을 자르기위한 메서드 사용
    ss >> answer; //>>에 경우 cpp 입출력 연산자 오버로딩으로 문자열 삽입을 의마함, 공백 단위로 짜른 문자열을 answer에 삽입
    
    char c; //문자형 변수 선언 -> 더하기 빼기 기호 저장용
    int n;  //정수형 변수 선언 -> 정수형 저장용
    
    while (ss >> c >> n) //공백 단위로 짜른 문자열을 하나씩 문자형과 정수형에 맞게 넣어서 문자열이 더이상 없을때까지 반복
    {
        if (c == '+') //문자형에 더하기인 경우 answer에 n을 더한다
        {
            answer += n;
        }
        else if ( c == '-') //문자형에 빼기인 경우 answer에 n을 뺀다
        {
            answer -= n;\
        }
    }
    
    //반복이 끝나면 answer를 리턴한다.
    return answer;
}