#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;    
    int even = 0, odd = 0;
    
    for (int ii = 0; ii < num_list.size(); ii++)
    {
        if (num_list[ii] % 2 == 0)
            even++;
        else 
            odd++;
    }
    
    answer.push_back(even);
    answer.push_back(odd);
    
    return answer;
}