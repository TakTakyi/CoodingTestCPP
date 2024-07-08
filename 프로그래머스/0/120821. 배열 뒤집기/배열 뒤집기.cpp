#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    for (int ii = num_list.size()-1; ii >= 0; ii--)
    {
        answer.push_back(num_list[ii]);
    }
    
    return answer;
}