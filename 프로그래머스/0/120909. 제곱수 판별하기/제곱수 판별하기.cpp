#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int ii = 1; ii <= n; ii++)
    {
        if (ii*ii == n)
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