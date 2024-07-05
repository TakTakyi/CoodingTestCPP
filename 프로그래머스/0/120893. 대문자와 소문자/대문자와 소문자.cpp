#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (int ii = 0; ii < my_string.size(); ii++)
    {
        if (my_string[ii] >= 'A' && my_string[ii] <= 'Z')
            answer += my_string[ii] + 32;
        
        if (my_string[ii] >= 'a' && my_string[ii] <= 'z')
            answer += my_string[ii] - 32;
    }
    
    return answer;
}