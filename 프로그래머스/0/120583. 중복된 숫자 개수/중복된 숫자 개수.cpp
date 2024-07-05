#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    for (int ii = 0; ii < array.size(); ii++)
    {
        if (array[ii] == n)
        {
            answer++;
        }
    }
    return answer;
}