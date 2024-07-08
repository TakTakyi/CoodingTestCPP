#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = 0;
    answer = n;
    
    for (int ii = 0; ii < t; ii++)
    {
        answer *= 2;
    }
    
    return answer;
}