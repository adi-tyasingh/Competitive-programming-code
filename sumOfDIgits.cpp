// Take sum of digits until single digit
#include<bits/stdc++.h>
using namespace std;
int digitSum(int n){
    int remainder;
    int sum = 0;
    while(n > 0){
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    if(sum < 10)
        return sum;
    else
        return digitSum(sum);
    return n;
}

int main(){
    int result;
    int number;
    cin >> number;
    result = digitSum(number);
    cout << result << endl; 
}