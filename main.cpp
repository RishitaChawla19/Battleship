# include <iostream>

using namespace std;

int main()
{
    char orientation;
    int i,j,row, column,length;
    bool done = false;
    char shipType;
    
    char bsboard[10][10];
     for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
        {
            bsboard[i][j]='_';
            cout<<bsboard[i][j]<<"|";
        }
        cout<<endl;
     }
     
     for(int i = 0 ; i < 5; i++){
         switch(i){
             case 0:

                 shipType = 'a';
                 done = false;
                 length=5;
                 
                 cout << "Place your Aircraft Carrier, length 5" << endl
                 << "Vertical or horizontal orientation , input H or V" << endl;
                 
                 cin >> orientation;
                 if(orientation == 'h' || orientation == 'H') {
                     do{
                         cout << "Where should the leftmost part of your ship be placed?" << endl
                         <<      "enter row --- ";
                         cin >> row;
                         cout << endl << "enter column --- ";
                         cin >> column;
                         if(row >= 0 && row < 10 && column >= 0 && column < 6){
                             done = true;
                             // input code for ploting ship
                             for (j=column;j<=column+length-1;j++)
                             bsboard[row][j]=shipType;
                             
                             
                             
                         } else 
                         {
                           
                            cout << endl << "!! Incorrect Placement, Please try again !!" << endl << endl;
                            continue;
                             
                         }
                        } while(!done);
                    } else if(orientation == 'v' || orientation == 'V')
                {
                    do{
                         cout << "Where should the top part of your ship be placed?" << endl
                         <<      "enter row --- ";
                         cin >> row;
                         cout << endl << "enter column --- ";
                         cin >> column;
                         if(row >= 0 && row < 6 && column >= 0 && column < 10){
                             done = true;
                             // input code for ploting ship
                             for(i=row;i<=row+length-1;i++){
                                 bsboard[i][column]= shipType;
                             }
                         } else {
                            cout << endl << "!! Incorrect Placement, Please try again !!" << endl << endl;
                            continue;
                             
                         }
                    } while(!done);
                    for(i=0;i<10;i++){
                        for(j=0;j<10;j++){
                            cout<<bsboard[i][j]<<"|";
                        }
                        cout<<endl;
                    }
                    
                 break;
            case 1:
                 shipType = 'b';
                 length =4;
                 done = false;
                 
                 cout << "Place your Battleship, length 4" << endl
                 << "Vertical or horizontal orientation , input H or V" << endl;
                 
                 cin >> orientation;
                 if(orientation == 'h' || orientation == 'H') {
                     do{
                         cout << "Where should the leftmost part of your ship be placed?" << endl <<"enter row --- ";
                         cin >> row;
                         cout << endl << "enter column --- ";
                         cin >> column;
                         
                         if(row >= 0 && row < 10 && column >= 0 && column < 7){
                             done = true;
                             // input code for ploting ship
                                for(i=row;i<=row+length-1;i++){
                                 bsboard[i][column]= shipType;
                             }
                         } else {
                            cout << endl << "!! Incorrect Placement, Please try again !!" << endl << endl;
                            continue;}
                        } while(!done);
                }else if(orientation == 'v' || orientation == 'V') {
                    do{
                         cout << "Where should the top part of your ship be placed?" << endl
                         <<      "enter row --- ";
                         cin >> row;
                         cout << endl << "enter column --- ";
                         cin >> column;
                         if(row >= 0 && row < 7 && column >= 0 && column < 10){
                             done = true;
                             // input code for ploting ship
                                for(i=row;i<=row+length-1;i++){
                                 bsboard[i][column]= shipType;
                             }
                         } else {
                            cout << endl << "!! Incorrect Placement, Please try again !!" << endl << endl;
                            continue;
                             
                         }
                    } while(!done);
                }
                             for(i=0;i<10;i++)
                             {
                                 for(j=0;j<10;j++)
                                 {
                                     cout<<bsboard[i][j]<<"|";
                                 }
                                 cout<<endl;
                             }
                    
                
                 break;
            case 2:
                 shipType = 's';
                 done = false;
                 length=3;
                 cout << "Place your Submarine, length 3" << endl
                 << "Vertical or horizontal orientation , input H or V" << endl;
                 
                 cin >> orientation;
                 
                 if(orientation == 'h' || orientation == 'H') {
                    do{
                         cout << "Where should the leftmost part of your ship be placed?" << endl <<"enter row --- ";
                         cin >> row;
                         cout << endl << "enter column --- ";
                         cin >> column;
                         
                         if(row >= 0 && row < 10 && column >= 0 && column < 8){
                             done = true;
                             // input code for ploting ship
                             for(i=row;i<=row+length-1;i++){
                                 bsboard[i][column]= shipType;
                             }
                         } else {
                            cout << endl << "!! Incorrect Placement, Please try again !!" << endl << endl;
                            continue;}
                    } while(!done);
                }else if(orientation == 'v' || orientation == 'V') {
                    do{
                         cout << "Where should the top part of your ship be placed?" << endl
                         <<      "enter row --- ";
                         cin >> row;
                         cout << endl << "enter column --- ";
                         cin >> column;
                         if(row >= 0 && row < 8 && column >= 0 && column < 10){
                             done = true;
                             // input code for ploting ship
                                for(i=row;i<=row+length-1;i++){
                                 bsboard[i][column]= shipType;
                             }
                         } else {
                            cout << endl << "!! Incorrect Placement, Please try again !!" << endl << endl;
                            continue;
                             
                         }
                    } while(!done);
                    
                    }
                             for(i=0;i<10;i++)
                             {
                                 for(j=0;j<10;j++)
                                 {
                                     cout<<bsboard[i][j]<<"|";
                                 }
                                 cout<<endl;
                             }
                 break;
             case 3:
                 shipType = 'd';
                 done = false;
                 length=3;
                 cout << "Place your Destoyer, length 3" << endl
                 << "Vertical or horizontal orientation , input H or V" << endl;
                 
                 cin >> orientation;
                 
                 if(orientation == 'h' || orientation == 'H') {
                    do{
                         cout << "Where should the leftmost part of your ship be placed?" << endl <<"enter row --- ";
                         cin >> row;
                         cout << endl << "enter column --- ";
                         cin >> column;
                         
                         if(row >= 0 && row < 10 && column >= 0 && column < 8){
                             done = true;
                             // input code for ploting ship
                             for(i=row;i<=row+length-1;i++){
                                 bsboard[i][column]= shipType;
                             }
                         } else {
                            cout << endl << "!! Incorrect Placement, Please try again !!" << endl << endl;
                            continue;}
                    } while(!done);
                }else if(orientation == 'v' || orientation == 'V') {
                    do{
                         cout << "Where should the top part of your ship be placed?" << endl
                         <<      "enter row --- ";
                         cin >> row;
                         cout << endl << "enter column --- ";
                         cin >> column;
                         if(row >= 0 && row < 8 && column >= 0 && column < 10){
                             done = true;
                             // input code for ploting ship
                                for(i=row;i<=row+length-1;i++){
                                 bsboard[i][column]= shipType;
                             }
                         } else {
                            cout << endl << "!! Incorrect Placement, Please try again !!" << endl << endl;
                            continue;
                             
                         }
                    } while(!done);
                    
                    }
                             for(i=0;i<10;i++)
                             {
                                 for(j=0;j<10;j++)
                                 {
                                     cout<<bsboard[i][j]<<"|";
                                 }
                                 cout<<endl;
                             }
                 break;
             case 4:
                length=2;
                 shipType = 'p';
                 done = false;
                 
                 cout << "Place your Patrol Boat, length 2" << endl
                 << "Vertical or horizontal orientation , input H or V" << endl;
                 
                 cin >> orientation;
                 
                 if(orientation == 'h' || orientation == 'H') {
                    do{
                         cout << "Where should the leftmost part of your ship be placed?" << endl <<"enter row --- ";
                         cin >> row;
                         cout << endl << "enter column --- ";
                         cin >> column;
                         
                         if(row >= 0 && row < 10 && column >= 0 && column < 9){
                             done = true;
                             // input code for ploting ship
                             for(i=row;i<=row+length-1;i++){
                                 bsboard[i][column]= shipType;
                             }
                         } else {
                            cout << endl << "!! Incorrect Placement, Please try again !!" << endl << endl;
                            continue;}
                    } while(!done);
                }else if(orientation == 'v' || orientation == 'V') {
                    do{
                         cout << "Where should the top part of your ship be placed?" << endl
                         <<      "enter row --- ";
                         cin >> row;
                         cout << endl << "enter column --- ";
                         cin >> column;
                         if(row >= 0 && row < 9 && column >= 0 && column < 10){
                             done = true;
                             // input code for ploting ship
                                for(i=row;i<=row+length-1;i++){
                                 bsboard[i][column]= shipType;
                             }
                         } else {
                            cout << endl << "!! Incorrect Placement, Please try again !!" << endl << endl;
                            continue;
                             
                         }
                    } while(!done);
                    
                    }
                                 for(i=0;i<10;i++)
                             {
                                 for(j=0;j<10;j++)
                                 {
                                     cout<<bsboard[i][j]<<"|";
                                 }
                                 cout<<endl;
                             }
                     break;

             
         }
         
     }
     return 0;
}




