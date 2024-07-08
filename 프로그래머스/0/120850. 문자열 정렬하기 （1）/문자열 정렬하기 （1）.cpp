#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    for (int ii = 0; ii < my_string.size(); ii++)
    {
        if (my_string[ii] >= '0' && my_string[ii] <= '9')
            answer.push_back(my_string[ii]-'0');
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}