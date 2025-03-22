#include <iostream> 
#include <ctime> 
#include <unistd.h> 
using namespace std; 


int main(){
	while(true){	
		time_t now = time(0); 
		tm *local = localtime(&now); 
		cout << "\033[H\033[J"; 
		cout << "Current Time" << local->tm_hour << ":" 
	  		<< local->tm_min << ":"
			<< local->tm_sec << endl; 
		sleep(1); 
	}
	return 0; 


}
