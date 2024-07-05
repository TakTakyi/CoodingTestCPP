#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    for (int ii = 0; ii < rsp.size(); ii++)
    {
        if (rsp[ii] == '2')
            answer += '0';
        else if (rsp[ii] == '0')
            answer += '5';
        else if (rsp[ii] == '5')
            answer += '2';
    }
    
    return answer;
}