#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int n = array[0];
    int idx = 0;
    
    for (int ii = 0; ii < array.size(); ii++)
    {
        if (array[ii] > n)
        {
            n = array[ii];
            idx = ii;
        }
    }
    
    answer.push_back(n);
    answer.push_back(idx);
    
    return answer;
}