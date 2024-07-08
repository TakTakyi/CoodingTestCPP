#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int Lastnum = numbers.size() - 1;
    
    sort(numbers.begin(), numbers.end());
    answer = numbers[Lastnum] * numbers[Lastnum-1];
    
    return answer;
}