#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    
    for (int ii = 0; ii < numlist.size(); ii++)
    {
        if (numlist[ii] % n == 0)
            answer.push_back(numlist[ii]);
    }
    
    return answer;
}