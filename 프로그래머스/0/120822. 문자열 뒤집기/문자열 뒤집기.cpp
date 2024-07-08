#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int n = my_string.length();
    for (int i = 0; i < n/2; i++) {
        swap(my_string[i], my_string[n-i-1]);
    }
    
    answer = my_string;
    return answer;
}