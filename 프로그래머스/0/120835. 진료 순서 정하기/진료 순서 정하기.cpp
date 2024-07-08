#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> test;
    
    test = emergency;
    sort(test.begin(), test.end(), greater<>());
    
    for (int ii = 0; ii < emergency.size(); ii++)
    {
        for (int jj = 0; jj < test.size(); jj++)
        {
            if (emergency[ii] == test[jj])
            {
                answer.push_back(jj+1);
            }
        }
    }
    
    return answer;
}