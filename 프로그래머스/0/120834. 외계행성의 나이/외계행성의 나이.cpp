#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string s_age = to_string(age);
    
    for (int ii = 0; ii < s_age.size(); ii++)
    {
        answer += s_age[ii] + 49;
    }
    
    return answer;
}