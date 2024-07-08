#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for (int aa = i; aa <= j; aa++)
    {
        int bb = aa;
        while(true)
        {
            if (bb == 0)
                break;

            if (bb%10 == k)
                answer++;
            bb = bb /10;
        }
    }
    
    return answer;
}