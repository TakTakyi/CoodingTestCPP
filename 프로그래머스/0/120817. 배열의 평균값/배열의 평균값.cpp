#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    for(int ii = 0; ii < numbers.size(); ii++)
    {
        answer += numbers[ii];
    }
    
    answer = answer / numbers.size();
    
    return answer;
}