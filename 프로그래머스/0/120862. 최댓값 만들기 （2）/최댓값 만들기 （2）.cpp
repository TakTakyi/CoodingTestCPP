#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int Last = numbers.size() - 1;
    sort(numbers.begin(), numbers.end());
    
    if (numbers[0] * numbers[1] > numbers[Last] * numbers[Last-1])
        answer = numbers[0] * numbers[1];
    else
        answer = numbers[Last] * numbers[Last-1];
    
    return answer;
}