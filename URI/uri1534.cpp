//Array 123

#include <iostream>

using namespace std;

int main(){
    int n;

    while(cin>>n){

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
            	
                if(j == (n-1)-i)
                    cout <<2;
                    
                else if(i == j)
                    cout <<1;
                    
                else
                    cout <<3;
            }
            
            cout << endl;
        }
    }
        
    return 0;
    
}
