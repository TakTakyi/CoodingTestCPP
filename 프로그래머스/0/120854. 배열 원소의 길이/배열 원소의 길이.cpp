#include <string>
#include <cstring>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    
    for (int ii = 0; ii < strlist.size(); ii++)
    {
        answer.push_back(strlist[ii].size());
    }
    
    return answer;
}