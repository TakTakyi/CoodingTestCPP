#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long factorial (long n)
{
    long result = 1;
    
    for (int ii = 1; ii <= n; ii++)
    {
        result = result * ii;
    }
    
    return result;
}

long fact (int n, int r)
{
    long sum = 1;
    
    for (int ii = 1; ii < r + 1; ii++)
    {
        sum = (sum * n) / ii;
        n--;
    }
    
    return sum;
}

int solution(int balls, int share) {
    int answer = 0;
    
    long upn = 0;
    long lown = 0;
    long m = 0;
    
    //upn = factorial(balls);
    //lown = factorial(balls - share);
    //m = factorial(share);
    
    
    //long result = 0;
    //result = upn / (lown * m);
    
    //answer = (int)result;
    
    long sum = 1;
    
    for (int ii = 1; ii < share + 1; ii++)
    {
        sum = (sum * balls) / ii;
        balls--;
    }
    
    answer = sum;
    
    return answer;
}