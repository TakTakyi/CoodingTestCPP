#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    
    for (int ii = 0; ii < array.size(); ii++)
    {
        if (array[ii] > height)
        {
            answer++;
        }
    }
    return answer;
}