#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    
    for (int ii = num1; ii <= num2; ii++)
    {
        answer.push_back(numbers[ii]);
    }
    
    return answer;
}