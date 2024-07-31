#include <string>
#include <vector>
#include <iostream>

using namespace std;

//문자열 찾기 함수
//문제 조건에 따라 조합가능한 단어가 있으면 1을 아니면 2를 리턴하는 함수
//매개변수로 벡터와 문자열을 받는다
int tak_find(vector<string> spell, string dic)
{
    int a_find = 0; //리턴값 변수 
    int a_count = 0; 
    
    //반복문을 돌려 문자열의 find함수를 통해 
    //찾는 문자열이 있으면 a_count를 증가 시킨다
    for(int ii = 0; ii < spell.size(); ii++)
    {
        if (dic.find(spell[ii]) != string::npos)
        {
            a_count++;
        }
    }
    
    //a_count가 spell 사이즈보다 크거나 같으면 1을 리턴
    //아니면 2를 리턴한다
    if(a_count >= spell.size())
    {
        a_find = 1;   
    }
    else
    {
        a_find = 2;
    }
    
    return a_find;
}

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    
    //dic 벡터에서 문자열을 하나씩 빼오기
    //tak_find함수에 두번째 매개변수가 문자열이기 때문에
    //tak_find함수가 1를 리턴하면 조합되는 단어가 하나라도 있기 때문에
    //반복을 멈추고 1을 리턴한다
    for (int ii = 0; ii < dic.size(); ii++)
    {
        if (tak_find(spell, dic[ii]) == 1)
        {
            answer = 1;
            break;
        } 
        else
        {
            answer = 2;
        }
    }
    
    return answer;
}