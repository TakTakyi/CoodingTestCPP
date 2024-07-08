#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int pbox = 6;
    while (pbox%n != 0)
    {
        pbox += 6;
    }
    
    answer = pbox/6;
    
    return answer;
}