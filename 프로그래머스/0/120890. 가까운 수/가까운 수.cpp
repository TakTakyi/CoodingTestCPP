#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int idx = 0;
    
    array.push_back(n);
    sort(array.begin(), array.end());
    
    for (int ii = 0; ii < array.size(); ii++)
    {
        if (n == array[ii])
        {
            idx = ii;
            if (idx == array.size() - 1)
            {
                answer = array[idx - 1];
                break;
            }
            
            if (idx == 0)
            {
                answer = array[idx + 1];
                break;
            }
            
            int num1 = abs(array[idx] - array[idx - 1]);
            int num2 = abs(array[idx] - array[idx + 1]);
            if (num1 > num2)
            {
                answer = array[idx+1];
                break;
            }
            else
            {
                answer = array[idx-1];
                break;
            }
        }
    }
    
    return answer;
}