#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int n = 0;
    
    for(int i=0; i<my_string.size(); i++)
    {
        if(my_string[i]>='0' && my_string[i]<='9')
        {
            n=n*10+my_string[i]-'0';
        }
        else
        {
            answer+=n, n=0;
        }
    }
    
     answer+=n;
    
    return answer;
}