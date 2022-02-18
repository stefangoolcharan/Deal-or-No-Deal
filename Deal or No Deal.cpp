#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <fstream>
using namespace std;
 

struct TwistData{ 
	int numbers;
	int casevalues;
};

int Twist (int numcases, int PlayerCaseVal) { 
	
	system("cls");
	cout<<"Welcome to the Mini Game!"<<endl;
	system("pause");
	cout<<"The rules are simple: "<<endl;
	system("pause");
	cout<<"Answer a series of random arithmetic questions."<<endl; 
	cout<<"1. Get all tweleve correct and win double the amount of the value in your original case!"<<endl;
	cout<<"2. Get six correct and only get 3/4 the amount of the value in your original case "<<endl;
	cout<<"3. Get less than six correct...and you lose everything entirely"<<endl;
	cout<<endl;
	cout<<"Goodluck..."<<endl;
	system("pause");
	system("cls");
	
	int randnum,answer=0,response,checkyay=0, checknay=0;
	float newcase, sum;
	int num2 = 500, num1 = 50;
	int num3= 30, num4 = 60;
	TwistData twist[numcases];
	
	srand(time(0));
	
		for (int i=1; i<=numcases; i++){ 
				
			randnum = num1 + rand()  % (num1 - num2 + 1);
			twist[i].numbers = randnum;
		}
		
		
		for(int i=1; i<=numcases; i++){ 
		
			randnum = num3 + rand() % (num3 - num4 + 1);
			
			twist[i].casevalues = randnum;
			
		}
	
	
		for(int i=1; i<=6; i++){ 
			cout<<"Question "<<i<<endl;
			cout<<endl;
			cout<<twist[i].numbers<<" x "<<twist[i].casevalues<<" = ?"<<endl;
			cin >> response;
			
			answer = twist[i].numbers*twist[i].casevalues;
			
				if(answer == response){ 
					checkyay++;
				}
				
		
		system("cls");		
	}
	
	cout<<"For division you can only input the quotient"<<endl;
	system("pause");
	system("cls");
		
		for(int k=7; k<=12; k++ ){ 
			cout<<"Question "<<k<<endl;
			cout<<endl;
			cout<<twist[k].numbers<<" / "<<twist[k].casevalues<<" = ?"<<endl;
			cin >> response;
			
			answer = twist[k].numbers*twist[k].casevalues;
			
				if(answer == response){ 
					checkyay++;
				}
				
		 	system("cls");
		}
		
		
		if(checkyay == 12){ 
			cout<<"Congraulations!! You Won!!"<<endl;
			cout<<"Your new winnings total is..."<<endl;
			system("pause");
			
			newcase = PlayerCaseVal*2;
			
			cout<<"$"<<newcase<<"!"<<endl;
			cout<<"Your orignial case contained $"<<PlayerCaseVal;
		}
		
		if(checkyay == 6 ){ 
			cout<<"You won second prise"<<endl;
			cout<<"Your new winnings total is..."<<endl;
			system("pause");
			
			newcase = PlayerCaseVal * 0.75;
			
			cout<<"$"<<newcase<<"!"<<endl;
			cout<<"Your orignial case contained $"<<PlayerCaseVal;
		}
		
		if(checkyay < 6){ 
			cout<<"Sorry...you lost the game. "<<endl;
			cout<<"Better luck next time !"<<endl;
		}
	
}

int Cases16 (int numcases, int CaseMonVal[], int DisplayCases[], int rounds[]) { 

ifstream infile; 

infile.open("Data16.txt");

if(!infile.is_open()){ 
cout<<"Data file cannot be opened"<<endl;
return 0;
}

int p=0;
int money, round;

for(int i=1; i<=16; i++){ 
	infile >> money;
	CaseMonVal[i] = money;
	DisplayCases[i] = money;
}



infile >> round; 

while (!infile.eof()){ 
	rounds[p] = round;
	p++;
	infile >> round;
}



infile.close();
return p;
}

int Cases18 (int numcases, int CaseMonVal[], int DisplayCases[], int rounds[]) {  

ifstream infile; 

infile.open("Data18.txt");

if(!infile.is_open()){ 
cout<<"Data file cannot be opened"<<endl;
return 0;
}

int p=0;
int money, round;

for(int i=1; i<=18; i++){ 
	infile >> money;
	CaseMonVal[i] = money;
	DisplayCases[i] = money;
}

infile >> round; 

while (!infile.eof()){ 
	rounds[p] = round;
	p++;
	infile >> round;
}

infile.close();
return p;
}

int Cases20 (int numcases, int CaseMonVal[], int DisplayCases[], int rounds[]) {

ifstream infile; 

infile.open("Data20.txt");

if(!infile.is_open()){ 
cout<<"Data file cannot be opened"<<endl;
return 0;
}

int p=0;
int money, round;

for(int i=1; i<=20; i++){ 
	infile >> money;
	CaseMonVal[i] = money;
	DisplayCases[i] = money;
}

infile >> round; 

while (!infile.eof()){ 
	rounds[p] = round;
	p++;
	infile >> round;
}


infile.close();
return p;
}

int Cases22 (int numcases, int CaseMonVal[], int DisplayCases[], int rounds[]){ 

ifstream infile; 

infile.open("Data22.txt");

if(!infile.is_open()){ 
cout<<"Data file cannot be opened"<<endl;
return 0;
}

int p=0;
int money, round;

for(int i=1; i<=22; i++){ 
	infile >> money;
	CaseMonVal[i] = money;
	DisplayCases[i] = money;
}

infile >> round; 

while (!infile.eof()){ 
	rounds[p] = round;
	p++;
	infile >> round;
}


infile.close();
return p;
}

int Cases24 (int numcases, int CaseMonVal[], int DisplayCases[], int rounds[]){ 

ifstream infile; 

infile.open("Data24.txt");

if(!infile.is_open()){ 
cout<<"Data file cannot be opened"<<endl;
return 0;
}

int p=0;
int money, round;

for(int i=1; i<=24; i++){ 
	infile >> money;
	CaseMonVal[i] = money;
	DisplayCases[i] = money;
}

infile >> round; 

while (!infile.eof()){ 
	rounds[p] = round;
	p++;
	infile >> round;
}

infile.close();
return p;
}

int Cases26 (int numcases, int CaseMonVal[], int DisplayCases[], int rounds[]){ 

ifstream infile; 

infile.open("Data26.txt");

if(!infile.is_open()){ 
cout<<"Data file cannot be opened"<<endl;
return 0;
}

int p=0;
int money, round;

for(int i=1; i<=26; i++){ 
	infile >> money;
	CaseMonVal[i] = money;
	DisplayCases[i] = money;
}

infile >> round; 

while (!infile.eof()){ 
	rounds[p] = round;
	p++;
	infile >> round;
}


infile.close();
return p;
}

int Shuffle (int CaseMonVal[], int numcases){ 



int i=0;
int money;
int randnum, checkrandnum=0;

srand(time(0));

for(i=1; i<=numcases; i++){ 
	
	randnum = rand()% numcases +1;
	
	
		if (randnum == checkrandnum){ 
			randnum = rand()% numcases + 1; 
		}
		
	checkrandnum = randnum;	
	
	money = CaseMonVal[i];
	CaseMonVal[i] = CaseMonVal[randnum];
	CaseMonVal[randnum] = money; 
	
	}


}

char BankOffer (int DisplayCases[], int numcases, int derp, int j){ 
	
	system("cls");
	
	
 	float average=0, bankOffer=0; 
 	int sum=0, check=0;
	int Cround=derp, Tround=j;
 	char choice;
	
	for(int i=1; i<=numcases; i++){ 
		
		 if(DisplayCases[i] != -1 ){ 
		 	sum = sum + DisplayCases[i];
		 	check++;
		 }
	}
	
	average = sum/check;
	
	bankOffer = (average)*Cround/Tround;
	
	cout<<"The banker has made you an offer..."<<endl;
	cout<<endl;
	cout<<"The offer is: $"<<bankOffer<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<"Deal or No Deal?"<<endl;
	cout<<"Enter (y) for Deal or (n) for No Deal"<<endl;
	cin >> choice;
	
		if(choice == 'y'){ 
			cout<<"DEAL!"<<endl;
			cout<<"You won : $"<<bankOffer<<endl;
			cout<<"Thank You for playing!"<<endl;
			
		}
		
		else 
			system("cls");
			
	return choice;
}

int moneyBoard (int DisplayCases[], int CaseMonVal[], int choice, int ALLcases[], int numcases){ 

int casenum=choice, casevalue;

//assigning case value
for(int i=1; i<=numcases; i++){ 

		system("cls");
	
	   if(i == choice){
	   
	    	casevalue = CaseMonVal[choice];	
     	}
	}

cout<<"The value of case "<<casenum<<" is "<<casevalue<<". The unopened cases contain the following values."<<endl;

cout<<endl;
cout<<"====THE MONEY BOARD===="<<endl;

//display money board
	for (int i=1; i<=numcases; i++){ 
			
		if(DisplayCases[i] == -1)
			cout<<"        "<<" "<<endl;
			
		else
			cout<<"        "<<DisplayCases[i]<<endl;
	}
	
	system("pause");
	cout<<endl;
}

int PlayRounds (int numcases, int CaseMonVal[], int DisplayCases [], int ALLcases[], int rounds[],int choice, int PlayerCase, int PlayerCaseVal){ 

	char decision; 
	int j=1,numrounds=rounds[0],cases; 
	int derp;
	int final;
	int caseval;
	int caseVALS[numcases];
	int k=0;
	
	
	while (j <= numrounds){ 
	
		
		derp = rounds[j];	
			cout<<"We are in round "<<j<<"."<<endl;
			cout<<"You must choose "<<rounds[1+k]<<" cases in this round."<<endl;
			cout<<endl;
			
		for(int m=1; m<=derp; m++) { 
					
			cout<<"====REMAINING CASES===="<<endl;
			
	//printing case options		
			for (int i=1; i<=numcases; i++){ 
		
				if(ALLcases[i] == -1)
					cout<<"        "" "<<endl;
				else
					cout<<"        "<<ALLcases[i]<<endl;
			}
			
	//inputing case
			cout<<endl;
			cout<<"Please choose a case: ";
			cin >> choice;
			
			
	//checking for invalid cases 
			
			if(choice == PlayerCase || choice > numcases || choice == 0){ 
					
				cout<<"Invalid case number please enter another one"<<endl;
				cin >> choice;
					
			}
			
					
			
	//assigning -1 to case number	
			for(int i=1; i<=numcases; i++){ 
			
				if(i == choice ){ 
					ALLcases[i] = -1;	
				}
				
			}
			
		caseval = CaseMonVal[choice];	
			
	//assigning -1 to case number's value
			for( int i=1; i<=numcases; i++){ 
					if(DisplayCases[i] == caseval ){ 
			    		DisplayCases[i] = -1;
				}	
			}
		
			
	//money Board function	
			moneyBoard(DisplayCases,CaseMonVal,choice,ALLcases,numcases);					
			
			
		}
		
	//bank offer function
			if( j!=numrounds){ 
				BankOffer(DisplayCases, numcases, derp, j);
				
				decision = BankOffer(DisplayCases, numcases, derp, j);		
				
			}
	
			 	
		 	if(decision == 'y'){ 
		 		return 0;
			 }
		j++;	 
			 
			if(j==numrounds){ 
				cout<<"We've reached the end..."<<endl;
				cout<<"Would you like to open your case, switch it with the last remaning one or...play a mini game?"<<endl;
				cout<<"Input 1 to open, 2 to switch or 3 to play the mini game."<<endl;
				cin >> final;
				
					if(final == 1){ 
						system("cls");
						cout<<"Your case was"<<PlayerCase<<" and it contains..."<<endl;
						system("pause");
						cout<<"$"<<PlayerCaseVal<<endl;
						cout<<"Congratulations!"<<endl;
						return 0;
					}
					
					if(final == 2){ 
						system("cls");
						cout<<"Your case will now be switched"<<endl;
						system("pause");
							 
							 for(int i=1; i<=numcases; i++){ 
							 		
							 		if(DisplayCases[i] != -1){ 
							 			PlayerCaseVal = DisplayCases[i];
									 }
							 }
							 
						cout<<"Your new case contains..."<<endl;
						system("pause");
						cout<<"$"<<PlayerCaseVal<<endl;
						cout<<"Congratulations!"<<endl;
						return 0;		
					
					}
					
					if(final == 3){
						Twist(numcases,PlayerCaseVal);
						return 0;
					}
				
			}

		k++;
		
	}
	
}


int main () { 

	
int casechoice;
int recordcases[26];
	
int numcases;
int roundnum;
int choice;
int p;


cout<<"		WELCOME TO DEAL OR NO DEAL!"<<endl;
cout<<"			WITH A TWIST      "<<endl;
cout<<endl;
cout<<endl;
cout<<"At the end of this game a twist will occur..."<<endl;
cout<<"You can choose to solve 12 arithmetic questions"<<endl;
cout<<"Win and get double the amount of your orinigal case"<<endl;
cout<<"Get six correct and take away only 3/4 the amount of your original case"<<endl;
cout<<"Lose...and get nothing."<<endl;
system("pause");
cout<<endl;
cout<<"Place your bet wisely player."<<endl;
cout<<"Goodluck"<<endl;

system("pause");
system("cls");

cout<<"Please choose the amount of cases you will like to play with"<<endl;
cout<<"Options include: 16, 18, 20, 22, 24, 26"<<endl;
cout<<"Enter a number: ";
cin >> numcases;

	if(numcases != 16 && numcases != 18 && numcases != 20 && numcases != 22 && numcases != 24 && numcases != 26 ){
		
		cout<<endl;
		cout<<"Invalid amount! Please restart game."<<endl;
		return 0;
	
	}


int CaseMonVal[numcases];
int remove[numcases];
int DisplayCases[numcases];
int rounds[10];
int ALLcases[numcases];
int PlayerCase,PlayerCaseVal;

	if(numcases == 16) {
		
		Cases16(numcases,CaseMonVal,DisplayCases,rounds);	
		roundnum=Cases16(numcases,CaseMonVal,DisplayCases,rounds);
	}
		
	if(numcases == 18) { 
		Cases18(numcases,CaseMonVal,DisplayCases,rounds);
		roundnum=Cases18(numcases,CaseMonVal,DisplayCases,rounds);
	}
	
	if(numcases == 20) { 
		Cases18(numcases,CaseMonVal,DisplayCases,rounds);
		roundnum=Cases20(numcases,CaseMonVal,DisplayCases,rounds);
	}
	
	if(numcases == 22) { 
		Cases18(numcases,CaseMonVal,DisplayCases,rounds);
		roundnum=Cases22(numcases,CaseMonVal,DisplayCases,rounds);
	}
	
	if(numcases == 24) { 
		Cases18(numcases,CaseMonVal,DisplayCases,rounds);
		roundnum=Cases24(numcases,CaseMonVal,DisplayCases,rounds);
	}
	
	if(numcases == 26) { 
		Cases18(numcases,CaseMonVal,DisplayCases,rounds);
		roundnum=Cases26(numcases,CaseMonVal,DisplayCases,rounds);
	}



//shuffle function	
	Shuffle(CaseMonVal,numcases);
	
//initilize ALLcases array

	for(int i=1; i<=numcases; i++){
		ALLcases[i]=i;
	}

	
//initilize record cases array	
	for(int i=0; i<=numcases; i++)
			recordcases[i]=0;


	cout<<endl;
	cout<<"Please choose a case number to hold onto: ";
	cin >> choice;
	cout<<endl; 
	
	PlayerCase = choice;
	
	
//storing first case 
	for(int i=1; i<=numcases; i++) { 

		 PlayerCaseVal = CaseMonVal[choice];
	}

	// setting choice to -1
	for(int i=1; i<=numcases; i++){ 
		if(i == choice ){ 
			
			ALLcases[i] = -1;
		}
	}


		system("cls");
		PlayRounds(numcases,CaseMonVal,DisplayCases,ALLcases,rounds,choice,PlayerCase,PlayerCaseVal);
		

}
