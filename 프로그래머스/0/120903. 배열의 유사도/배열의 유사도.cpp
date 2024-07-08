#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for (int ii = 0; ii < s1.size(); ii++)
    {
        for (int jj = 0; jj < s2.size(); jj++)
        {
            if (s1[ii] == s2[jj])
                answer++;
        }
    }
    
    return answer;
}