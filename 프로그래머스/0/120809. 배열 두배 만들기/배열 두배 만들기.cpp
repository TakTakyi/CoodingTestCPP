#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for (int ii = 0; ii < numbers.size(); ii++)
    {
        int root = numbers[ii] * 2;
        answer.push_back(root);
    }
    
    return answer;
}