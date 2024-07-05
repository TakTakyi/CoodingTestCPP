#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    for (int ii = 0; ii < my_string.size(); ii++)
    {
        if (my_string[ii] != letter[0])
            answer += my_string[ii];
    }
    
    return answer;
}