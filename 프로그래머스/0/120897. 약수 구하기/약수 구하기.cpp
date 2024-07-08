#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for (int ii = 1; ii <= n; ii++)
    {
        if (n % ii == 0)
            answer.push_back(ii);
    }
    
    return answer;
}