#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    int cnt=(my_str.size()-1)/n+1; //총 반복 횟수용 변수,  문자열의 크기를 벗어나지 않게 하기 위한 계산
    int idx=0; //인덱스 변수 문자열에 경우 인덱스 값으로 계산하기 때문
    
    //반복문 위에서 계산한 횟수만큼 반복 하기 위해 감소연산자 사용 
    while(cnt--){
        if(cnt==0) //반복 횟수에 마지막에 경우 남은 문자열이 n보다 작을수 있기 때문에 남은 문자열을 전부 추가한다 
        {
            answer.push_back(my_str.substr(idx)); //substr 문자열 자르기 함수 n번째 index부터 끝까지 부분 문자열 반환
        }
        else 
        {
            answer.push_back(my_str.substr(idx, n)); //n번째 index부터 k개의 부분 문자열 반환
        }
        
        idx+=n; //이미 계산된 문자열은 계산하지 않기 위해 
    }
    
    //결과값 리턴
    return answer;
}