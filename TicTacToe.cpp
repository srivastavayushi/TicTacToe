// Include all the required header files
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

char board[9]={'1','2','3','4','5','6','7','8','9'},pName1[20],pName2[20];

// Function to ask player names
void pName(){
    cout<<"\nEnter name for player 1: ";
    cin>>pName1;
    cout<<"\nEnter name for player 2: ";
    cin>>pName2;    
}

// Function to display tic-tac-toe board
void boardDesign(char board[]){
cout<<"  "<<board[0]<<" "<<"|"<<" "<<board[1]<<" "<<"|"<<" "<<board[2]<<" "<<endl;     
cout<<"-------------"<<endl;   
cout<<"  "<<board[3]<<" "<<"|"<<" "<<board[4]<<" "<<"|"<<" "<<board[5]<<" "<<endl;     
cout<<"-------------"<<endl;
cout<<"  "<<board[6]<<" "<<"|"<<" "<<board[7]<<" "<<"|"<<" "<<board[8]<<" "<<endl;     
}

void play(){
int i;    
cout<<"Enter box number: ";
cin>>i;
if(board[i]=='x'||board[i]=='o'){
cout<<"\nThis spot is already filled..Try again";
// else{
//     if
// }
}
}
bool check(){
  for(int i=0;i<9;i++){
    if(board[i]=='X'||board[i]=='O')    
    return true;
    else
    return false;
  }
}
// Main function
int main(){
    int i;
    cout<<"***********"<<endl;
    cout<<"TIC-TAC-TOE"<<endl;
    cout<<"***********"<<endl;
    pName();
    do{ 
        boardDesign(board);
        cout<<pName1;
        cout<<"\nEnter spot no.: ";
        cin>>i;
        if(board[i]=='X'||board[i]=='O')
        cout<<"\nThis spot is already filled..Try again";
        else
        board[i]='X';
        cout<<"\n"<<pName2;
        cout<<"\nEnter spot no.: ";
        cin>>i;
        if(board[i]=='X'||board[i]=='O')
        cout<<"\nThis spot is already filled..Try again";
        else
        board[i]='O';
    }while(check());
    
    return 0;
}
