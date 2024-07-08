#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string test = to_string(order);
    
    for (int ii = 0; ii < test.size(); ii++)
    {
        if (test[ii] == '3' || test[ii] == '6' || test[ii] == '9')
            answer++;
    }
    
    return answer;
}