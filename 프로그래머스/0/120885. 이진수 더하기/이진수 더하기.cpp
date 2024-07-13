#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int carry = 0; //이진수 더하기에서 올림이 나올때 저장하기 위한 변수
    
    //이진수 더하기는 뒤에서 부터 더하기 떄문에 뒤집어서 순서를 맞추고 반복문을 돌리기 위해
    reverse(bin1.begin(), bin1.end()); 
    reverse(bin2.begin(), bin2.end());
    
    //매개변수로 들어온 두 문자열의 크기를 맞추기 위한 코드
    //n 변수에 양수로 저장하고 사이즈 큰 매개변수에 맞추기위한 코드
    if(bin1.size() > bin2.size())
    {
        int n = bin1.size() - bin2.size();
        for (int i = 0; i < n; i++)
        {
            bin2 += '0'; //문자열이기 때문에 문자로 추가
        }
    }
    else if(bin2.size() > bin1.size())
    {
        int n = bin2.size() - bin1.size();
        for (int i = 0; i < n; i++)
        {
            bin1 += '0';
        }
    }
    
    //이진수 더하기 코드
    //문자열을 하나씩 꺼내서 더한후 올림값이 나오면 carry변수에 저장후 다음 계산식에 사용
    for (int i = 0; i <bin1.size(); i++)
    {
        //bin1[i] - '0'
        //문자형을 실수형으로 변환하는 코드
        //아스키 코드 참조
        int n = (bin1[i] - '0') + (bin2[i] - '0') + carry;
        
        carry = n/2; //올림수 계산
        
        //결과값에 추가
        //실수형을 문자형으로 형변화하여 삽입
        answer += to_string(n%2); 
    }
    
    //올림수가 문자열 사이즈를 초과할 경우
    //올림수를 추가하여여 정확한 계산값이 된다
    if (carry != 0)
    {
        answer += to_string(carry);
    }
    
    //문자열을 뒤집어서 계산하였기 때문에 
    //뒤집어서 결과값을 리턴한다
    reverse(answer.begin(), answer.end());
    
    return answer;
}