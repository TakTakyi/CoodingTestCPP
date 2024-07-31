#include <string>
#include <vector>
#include <iostream>

using namespace std;

int find(vector<string> spell, string dic)
{
    int a_find = 0;
    int a_count = 0;
    
    for(int ii = 0; ii < spell.size(); ii++)
    {
        if (dic.find(spell[ii]) != string::npos)
        {
            a_count++;
        }
    }
    
    
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
    int count = 0;
    
    
    //dic 벡터에서 문자열을 하나씩 빼오기
    for (int ii = 0; ii < dic.size(); ii++)
    {
        if (find(spell, dic[ii]) == 1)
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