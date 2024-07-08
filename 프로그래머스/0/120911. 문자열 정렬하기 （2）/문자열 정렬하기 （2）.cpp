#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (int ii = 0; ii < my_string.size(); ii++)
    {
        if (my_string[ii] >= 'A' && my_string[ii] <= 'Z')
            my_string[ii] += 32;
    }
    
    answer = my_string;
    sort(answer.begin(), answer.end());
    
    return answer;
}