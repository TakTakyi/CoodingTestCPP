#include <string>
#include <vector>
#include <iostream>
#include <algorithm> //sort를 쓰기 위해 정렬

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    sort(sides.begin(), sides.end()); //오름차순으로 정렬한다 
    
    //가장 긴변이 sides[1]인 경우 x는 sides[1] - sides[0] < x이다
    //가장 긴변이 x인 경우 x는 sides[1] + sides[0] > x이다
    //그러므로 x는 sides[1] - sides[0] < x < sides[1] + sides[0]의 범위를 가진다
    //범위 만큼 반복하여 answer에 더할 경우 결과값이 나온다
    
    //for (int ii = sides[1] - sides[0] + 1; ii < sides[1] + sides[0]; ii++)
    //{
        //answer++;
    //}
    
    //다른 방식으로 풀 경우 
    //가장 긴변이 sides[1]인 경우 (sides[1] - (sides[1] - sides[0] + 1) + 1) -> sides[0]
    //가장 긴변이 x인 경우 ((sides[0] + sides[1] - 1) - sides[1]) -> sides[0] - 1
    //그러므로 x는 sides[0]*2-1이다
    answer+=(sides[0]*2-1);
    
    return answer;
}