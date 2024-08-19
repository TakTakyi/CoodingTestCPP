#include <string>
#include <vector>
#include <iostream>

using namespace std;

//n은 자연수이고 n번 만큼 반복하면서 3의저주의 조건에 맞게 값을 증가시킨다
//n은 최대 크기가 100이고 최대 100번 돌아간다
//3의 배수와 3이 들어간 숫자 
//3의 배수 (3, 6, 9, 12, 15, 18, ....)
//3이 들어간 숫자 (3, 13, 23, 30~39, 43, ...)
//이 숫자들을 넘어가야 한다
//11-17  12-19  13-20  14-22  15-25 ...

//answer를 위의 조건을 만족할 경우 증가시킨다


int solution(int n) {
    int answer = 1;
    string temp = to_string(answer);
    
    int i = 1;
    while(1)
    {
        // 문자열에서 3을 찾는다면
        temp = to_string(answer);
        if (temp.find("3") != -1) 
        {
            answer += 1;
            continue;
        }
        
        // 3의 배수라면
        if (answer % 3 == 0)
        {
            answer += 1;
            continue;
        }
        
        // 모든 체크를 끝내고 return
        if (i == n)
        {
            return answer;
        }
        
        i++;
        answer++;
    }
    
    return answer;
}