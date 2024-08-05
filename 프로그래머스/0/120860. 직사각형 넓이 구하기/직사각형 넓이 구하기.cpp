#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> x;
    vector<int> y;
    
    
    for (int ii = 0; ii < dots.size(); ii++)
    {
        x.push_back(dots[ii][0]);
        y.push_back(dots[ii][1]);
    }
    
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    
    //cout << x[0] << " : " << x[3] <<endl;
    //cout << y[0] << " : " << y[3] <<endl;
    
    answer = (x[3] - x[0]) * (y[3] - y[0]);
    
    return answer;
}