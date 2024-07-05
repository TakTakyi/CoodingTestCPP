#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string letter = "aeiou";
    
    for (int ii = 0; ii < my_string.size(); ii++)
    {
        if (my_string[ii] != letter[0] &&
            my_string[ii] != letter[1] && 
            my_string[ii] != letter[2] && 
            my_string[ii] != letter[3] && 
            my_string[ii] != letter[4])
                answer += my_string[ii];
    }
    
    return answer;
}