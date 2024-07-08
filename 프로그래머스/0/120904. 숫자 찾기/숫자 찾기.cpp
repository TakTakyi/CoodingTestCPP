#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string number = to_string(num);
    
    for(int ii = 0; ii < number.size(); ii++)
    {
        if (number[ii] - '0' == k)
        {
            answer = ii+1;
            break;
        }
        else
        {answer = -1;}
    }
    
    return answer;
}