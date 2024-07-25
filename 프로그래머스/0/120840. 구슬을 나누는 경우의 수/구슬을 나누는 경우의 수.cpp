#include <string>
#include <vector>
#include <iostream>

using namespace std;

/* 
long long factorial (long n)
{
    long result = 1;
    
    for (int ii = 1; ii <= n; ii++)
    {
        result = result * ii;
    }
    
    return result;
}
*/

//long upn = 0;
//long lown = 0;
//long m = 0;

//upn = factorial(balls);
//lown = factorial(balls - share);    
//m = factorial(share);

//long result = 0;
//result = upn / (lown * m);
    
//answer = (int)result;

//힌트에 나온 계산식으로 코딩을 하였으나 오버플로우 발생하여 
//long 형을 사용하여 풀이 하였으나 풀이가 되지않아 확인해보니
//나누어지지 않고 무한소수가 발생할수 있다는 것을 확인하여
//https://school.programmers.co.kr/questions/42602 
//링크를 참고하여 풀이를 수정

int solution(int balls, int share) {
    int answer = 0;
    
    long sum = 1; //30!에 경우 int 범위를 넘어가기 때문에 사이즈가 더큰 long형 사용
    
    //링크를 참고하여 (((((30 / 1) * 29 / 2) * 28 / 3) * 27 / 4) * 26 / 5)
    //위에식을 for문으로 작성 
    //무한소수를 발생시키지 않기 위해서
    for (int ii = 1; ii < share + 1; ii++)
    {
        sum = (sum * balls) / ii;
        balls--;
    }
    
    answer = sum;
    
    return answer;
}