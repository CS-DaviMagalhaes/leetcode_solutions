#include <iostream>
#include <string>
using namespace std; 
class Solution {
public:
    int char_value(char c){
        switch (c)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10; 
        case 'L':
            return 50;
        case 'C':
            return 100; 
        case 'D':
            return 500;
        case 'M':
            return 1000;
        }
        return 0; 
    }
    int romanToInt(string s) {
        char c; 
        int sum = 0;
        for (int i=0; i<s.size(); i++){
            if (i<= s.size()-1 && char_value(s[i+1]) > char_value(s[i])){
                sum += char_value(s[i+1]) - char_value(s[i]);
                i++;
            }else{
                sum += char_value(s[i]);
            }
        }   
        return sum;
    }
};