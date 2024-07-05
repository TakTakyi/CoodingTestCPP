#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for (int ii = 1; ii <= n; ii++)
    {
        if (ii % 2 == 1)
            answer.push_back(ii);
    }
    
    return answer;
}