#include <string>
#include <vector>
#include <iostream>
#include <algorithm> //sort를 쓰기 위해 정렬

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    sort(sides.begin(), sides.end());
    
    for (int ii = sides[1] - sides[0] + 1; ii < sides[1] + sides[0]; ii++)
    {
        answer++;
    }
    
    return answer;
}