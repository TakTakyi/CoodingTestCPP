#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int ii = 1;
    int res = 1;
    
    while(1)
    { 
        res = res * ii;
        
        if (res > n)
        {
            break;
        }
        
        ii++;
    }
    
    ii--;
    answer = ii;
    
    return answer;
}