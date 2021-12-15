#include<iostream>
using namespace std;

int main(){
	int count[5] = {};
	int A = 1, B = 1, C = 1, D = 1, F = 1; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	char grade;
	int i = 0;
	do{
		i++;
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0] = A++;
		}else if(grade == 'B'){
			count[1] = B++;
		}else if(grade == 'C'){
			count[2] = C++;
		}else if(grade == 'D'){
			count[3] = D++;			
		}else if(grade == 'F'){
			count[4] = F++;
		}else if(grade == '0'){
			break;
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again." << endl;
			i--;
		} 
	}while(true);
	
	
	cout << "In total " << i-1 << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	

	
	return 0;
}
