#include <iostream>
#include<conio.h>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

int main(){
		int cnic,Adult,child,Economy=40000,Business=80000,firstClass=100000;
		float Weight,maxWeight=10,tax,TAX_RATE=2;
		string flyFrom,flyTo,email,date;
		char name[100],Name[100],digit;
		bool seats[ROWS][COLS];

		cout<<"\n          **************************************  WELCOME TO Our  AIRLINES  **************************************\n";
		
		
		cout<<"\nBooking your Tickets here\n";
		cout << "\nEnter your name: ";
		cin.get(name,50);
		cout<<"\nEnter your email: ";
		cin>>email;
		cout<<"\nEnter Cnic number: ";
			int counter = 0;
	
	for (int i = 0; i < 13;i++)
	{
		digit = _getch();
		
		if (isdigit(digit)) 
		{
			cnic += digit;
			counter++;
			cout << digit;

			if (counter == 5 || counter == 12) 
			{
				cnic += '-';
				cout << '-';
			}
		}

	if (counter == 13) 
	{
		cout<<endl;
		break; 
	}
	}
		cout<<"\nFlying From: ";
		cin>>flyFrom;
		cout<<"\nFlying To: ";
		cin>>flyTo;
		cout<<"\nChoose Date (MM/DD/YY): ";
			int count = 0;
		
		for (int i=0;i<6;i++)
		{
			digit = _getch();
			
			if (isdigit(digit)) 
			{
				date += digit;
				count++;
				cout << digit;
	
				if (count == 2 || count == 4) 
				{
					date += '/';
					cout << '/';
				}
			}
	
		if (count == 6) 
		{
			cout<<endl;
			break; 
			
		}
	}
		int seat;
 
    cout<<"\nHow many seats you want to book: ";
    cin>>seat;
    
    		 


    // Initialize all seats as available
    
    
    for (int i = 1 ;i <=ROWS; ++i) {
        for (int j = 1; j <= COLS; ++j) {
            seats[i][j] = true;
        }
    }

    for(int i=1;i<=seat;i++){
    	 	  if(seat>25)
 			break;
    	
        // Display seating chart
        
        cout << "Seating Chart:\n";
        for (int i = 1; i <= ROWS; ++i) {
            for (int j = 1; j <=COLS; ++j) {
                cout << (seats[i][j] ? "O" : "X") <<" ";
          }
          cout<<endl;
 	 }
        // User input
        
        int row, col;
        cout << "Enter the row number (0-" << ROWS  << "): ";
        cin >> row;
        cout << "Enter the column number (0-" << COLS  << "): ";
        cin >> col;

        // Validate seat selection
        
        if (row <= 0 || row >= ROWS || col <= 0 || col >= COLS) {
            cout << "Invalid seat selection. Please try again.\n\n";
            continue;
        }

        // Check seat availability
        
        if (seats[row][col]) {
        	
            // Reserve seat
            
            seats[row][col] = false;
            cout << "Seat booked successfully!\n\n";
            
            
       }
         
         else  {
            cout << "Seat is not available. Please choose another seat.\n\n";
            
            
       
}}
		cout<<"\nAdult Person: ";
		cin>>Adult;
		cout<<endl;
		cin.ignore();
		for(int i=1;i<=Adult;i++){
			cout<<"Enter "<<i<<" Name: ";
			cin.getline(Name,100);
			cout<<endl;
}		cout<<"\nChilds: ";
		cin>>child;
		cin.ignore();
		for(int i=1;i<=child;i++){
			cout<<"Enter "<<i<<" Name: ";
			cin.getline(Name,100);
			cout<<endl;
}
		cout<<"\nLuggage Shuld be 10 kg\n";
	 	cout << "\nEnter the weight of your luggage in kilograms: ";
	     cin >> Weight;
		
     // To check if tax is needs to be paid or not?
	     if (Weight > maxWeight) {
        	    tax = (Weight -  maxWeight) * TAX_RATE;
        	    cout << "\nYou  weight is overloaded. You need to pay a tax of : $" << tax << endl;
    	   } 
          else 
        		cout << "\nYour luggage is within the weight limit. No tax is needed." << endl;
    
		
	//    To take input for flight class    
	  
	     int class_choice;
	     cout << "\nPlease choose a flight class: " << endl;
	     cout << "1. Economy" << endl;
	     cout << "2. Business" << endl;
	     cout << "3. First class" << endl;
          cin >> class_choice;
          
          if(class_choice==1){
          	cout<<"\nYou Choose Economy Class Thats price is: "<<Economy*seat+tax;
		}
		else if(class_choice==2){
          	cout<<"\nYou Choose Business Class Thats price is: "<<Business*seat+tax;
		}
		else if(class_choice==3){
          	cout<<"\nYou Choose First Class Thats price is: "<<firstClass*seat+tax;
		}
		else
		    cout<<"INVALID";

		    
	cout<<"\n\n**************************************THANK YOU FOR CHOOSING OUR AIRLINES**************************************\n";	    
		    


return 0;


}

