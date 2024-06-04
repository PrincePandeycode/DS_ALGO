#include <bits/stdc++.h>
using namespace std;

    
    void rotateClockwise(string &s){
        char c = s[s.size()-1];
        int ind = s.size()-2;
        
        while(ind>=0){
            s[ind +1] = s[ind];
            ind--;
        }
        
        s[0] = c;
        
    }
    
     void AntirotateClockwise(string &s){
         
         char c = s[0];
         int ind = 1;
         
         while(ind<=s.size()-1){
             s[ind-1] = s[ind];
             ind++;
         }
         s[s.size()-1] = c;
        
    }
    
    bool isRotated(string str1, string str2)
    {
        string clockwise = str1, anticlockwise = str1;
        
        if(str1.size() != str2.size()) return 0;
        
        rotateClockwise(clockwise);
        rotateClockwise(clockwise);
        
        if(clockwise == str2) return 1;
        
        AntirotateClockwise(anticlockwise);
        AntirotateClockwise(anticlockwise);
        
        if(anticlockwise == str2) return 1;
        
        return 0;
        
    }






int main() {

		string s;
		string b;
        cout<<"Enter first string: ";
		getline(cin,s);
        cout<<"ENter second string";
		getline(cin,b);

        if(isRotated(s,b)){
            cout<<"it is rotated";
        }
		else cout<<"it is not rotated";
	}
	
