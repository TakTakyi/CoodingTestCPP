#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    
    int coffee = money / 5500;
    int Change = money % 5500;
    
    answer.push_back(coffee);
    answer.push_back(Change);
    
    return answer;
}