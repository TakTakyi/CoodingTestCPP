#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    int x,y,z = 0;
    
    x = box[0] / n;
    y = box[1] / n;
    z = box[2] / n;
    
    answer = x*y*z;
    
    return answer;
}