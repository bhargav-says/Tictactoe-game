#include<iostream>
using namespace std;
#define n 3

char arr[n][n] = {'1', '2','3','4','5','6','7','8','9' };

 //  0 1 2
 //0[1 2 3]
 //1[4 5 6]   
 //2[7 8 9]    
char player = 'X';
int l;
void draw(){
    system("cls");
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
           // cout<<"\n";
        }
       cout<<"\n";
    }
}
  void input()
  {
      int a;
      cout<<"It's "<<player<<" turns"<<"\npress the number of the field"<<endl;
      cin>>a;
      if(a == 1) // we are checking with the iteration;
      {
          if(arr[0][0] == '1')
          {
              arr[0][0] = player;
          }
          else
          {
              cout<<"already occupied\n ";
              input();
          }
          
      }
      else if(a == 2){
          if(arr[0][1]=='2')
          {
          arr[0][1]=player;
        
          }
          else{
              cout<<"already occupied\n";
              input();
          }
      }
      else if(a == 3){
          if(arr[0][2]=='3'){
          arr[0][2] = player;
      }
      else{
              cout<<"already occupied\n";
              input();
      }
      }
      
      else if(a == 4){
            if(arr[1][0]=='4'){
          arr[1][0] = player;
      }
      else{
              cout<<"already occupied\n";
              input();
      }
          //arr[1][0]=player;
      }
      else if(a == 5){
            if(arr[1][1]=='5'){
          arr[1][1] = player;
      }
      else{
              cout<<"already occupied\n";
              input();
      }
          //arr[1][1]=player;
      }
      else if(a == 6){
            if(arr[1][2]=='6'){
          arr[1][2] = player;
      }
      else{
              cout<<"already occupied\n";
              input();
      }
        //  arr[1][2]=player;
      }
      else if( a == 7){
           if(arr[2][0]=='7'){
          arr[2][0] = player;
      }
      else{
              cout<<"already occupied\n";
              input();
      }

         // arr[2][0] = player;
      }
      else if(a == 8){
           if(arr[2][1]=='8'){
          arr[2][1] = player;
      }
      else{
              cout<<"already occupied\n";
              input();
      }
        //  arr[2][1]=player;
      }
      else if(a == 9){
        
           if(arr[2][2]=='9'){
          arr[2][2] = player;
      }
      else{
              cout<<"already occupied\n";
              input();
      }
          //arr[2][2]=player;
      }
    else {
        printf("wrong input\n");
    } 
    return;
  }
    void second(){
        if(player == 'X'){
            player = 'O';

        }
        else{
            player ='X';
        }
    }
    char win(){
        // first player
        if(arr[0][0]== 'X'&& arr[0][1]=='X'&& arr[0][2]=='X') // 1 2 3
        {
            return 'X';
        }
         if(arr[0][0]== 'X'&& arr[1][0]=='X'&& arr[2][0]=='X') // 1 4 7
         {
             return 'X';
         }
         if(arr[1][0]=='X'&& arr[1][1]=='X'&& arr[1][2]=='X')// 4 5 6
         {
             return 'X';
         }
         if(arr[0][1]== 'X'&& arr[1][1]=='X'&& arr[2][1]=='X')// 2 5 8
         {
            return 'X';
         }
         if(arr[2][0]== 'X'&& arr[2][1]=='X'&& arr[2][2]=='X')// 7 8 9
         {
             return 'X';
         }
          if(arr[0][2]== 'X'&& arr[1][2]=='X'&& arr[2][2]=='X') //  3 6 9
          {
              return 'X';
          }
          // second player
         if(arr[0][0]== 'O'&& arr[0][1]=='O'&& arr[0][2]=='O') // 1 2 3
        {
            return 'O';
        }
         if(arr[0][0]== 'O'&& arr[1][0]=='O'&& arr[2][0]=='O') // 1 4 7
         {
             return 'O';
         }
         if(arr[1][0]=='O'&& arr[1][1]=='O'&& arr[1][2]=='O')// 4 5 6
         {
             return 'O';
         }
         if(arr[0][1]== 'O'&& arr[1][1]=='O'&& arr[2][1]=='O')// 2 5 8
         {
            return 'O';
         }
         if(arr[2][0]== 'O'&& arr[2][1]=='O'&& arr[2][2]=='O')// 7 8 9
         {
             return 'O';
         }
          if(arr[0][2]== 'O'&& arr[1][2]=='O'&& arr[2][2]=='O') //  3 6 9
          {
              return 'O';
          }
          return'/';
    }
  
int main(){
   draw();
   l =0;
   //char ch;
   //making the quited system.
  // cout<<"press q to quit"<<endl;
 //  ch =getchar();
   //ch = getchar();
   while(1){
    //draw();;
    l++;
    input();
    draw();


     if(win()=='X')
     {
         printf("xxxx wins xoxo\n");
         break;
     }
     else if(win()=='O')
     {
         printf("oooo wins xoxo\n");
         break;
     }
     else if( win()=='/'&& l == 9)

     {
         cout<<"Its a draw \n";
         break;
     }
     
     
     second();
   }
   // cin>>ch;
    //cout<<"press anything to  continue";
    //to check the if statement;
  // system("pause");
  cout<<"game quited\n";
    return 0;
}

