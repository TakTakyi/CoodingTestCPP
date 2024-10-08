#include <string>
#include <vector>

//최대공약수를 구하는 방법은 유클리드 호제법
//재귀함수를 사용하여 구현할 수 있다

using namespace std;

//유클리드 호재법 함수
//재귀함수를 사용
int gcd(int a, int b)
{
    if(a%b==0) 
    { 
        return b;
    }
    return gcd(b, a%b);
}

int solution(int a, int b) {
    int answer = 0;
    
    b/=gcd(b, a);
    
    while(1)
    {
        if(b%2==0) 
        {
            b/=2;
        }
        else if(b%5==0) 
        {
            b/=5;
        }
        else 
        {
            break;
        }
    }
    
    if(b==1) 
    {
        answer=1;
    }
    else 
    {
        answer=2;
    }
    
    return answer;
}