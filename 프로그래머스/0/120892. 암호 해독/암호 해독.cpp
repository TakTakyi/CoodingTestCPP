#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    
    for (int ii = 0; ii < cipher.size(); ii++)
    {
        if ((ii+1) % code == 0)
        answer += cipher[ii];
    }
    
    return answer;
}