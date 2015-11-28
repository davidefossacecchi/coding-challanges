#include <iostream>
using namespace std;

int main()
{
	int T, maxR, count, r_count;
	string test;
    cin >> T;
    
    for (int i = 1; i<=T; i++){
    	maxR = 0;
    	count = 0;
    	r_count = 0;
    	cin >> test;
    	for (int c = 0; c < test.length(); c++){
    		if (test[c] == 'R'){
    			r_count++;
    			if (count >0) count--;	
    		} 
    		else count ++;
    		
    		if (count > maxR) maxR = count;
    	}
    	cout << maxR + r_count << endl;
    }
    
    return 0;
}
