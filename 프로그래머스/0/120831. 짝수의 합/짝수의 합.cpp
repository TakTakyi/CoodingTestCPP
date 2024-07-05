#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int ii = n; ii >= 0; ii--)
    {
        if((ii % 2) == 0)
        {
            answer += ii;
        }    
    }
    
    return answer;
}