#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

//4개 의 좌표는 직사각형을 만든다
//for문을 돌려 벡터로 선언한 x,y에 
//좌표에 맞게 값을 넣어준다

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> x; //x축 좌표값을 담기 위한 벡터변수
    vector<int> y; //y축 좌표값을 담기 위한 벡터변수
    
    //매개변수로 들어온 dots의 사이즈 만큰 반복하면서 각 좌표값을 넣어준다
    for (int ii = 0; ii < dots.size(); ii++)
    {
        x.push_back(dots[ii][0]);
        y.push_back(dots[ii][1]);
    }
    
    //정렬함수를 이용하여 벡터를 오름차순으로 정렬한다
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    
    //결과값에 경우 정렬된 좌표값중 가장 큰값에서 작은값을 빼 
    //x와 y를 곱하면 결과값이 나온다
    answer = (x[3] - x[0]) * (y[3] - y[0]);
    
    return answer;
}