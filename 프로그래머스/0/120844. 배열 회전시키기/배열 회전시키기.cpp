#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    
    if (direction == "right")
    {
        answer.push_back(numbers[numbers.size() - 1]);
        for (int ii = 0; ii < numbers.size() - 1; ii ++)
        {
            answer.push_back(numbers[ii]);
        }
    }
    else if (direction == "left")
    {
        for (int ii = 1; ii < numbers.size(); ii ++)
        {
            answer.push_back(numbers[ii]);
        }
        answer.push_back(numbers[0]);
    }
    
    return answer;
}