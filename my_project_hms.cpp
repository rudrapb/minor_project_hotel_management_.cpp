#include<bits/stdc++.h> 
using namespace std;

int main(){
    int quantity;
    int choice;

    // store quantity of rooms
    int q_rooms=1000; int q_pasta=1000; int q_burger=1000; int q_shake=1000;
        
    // store of sold
    int s_rooms=0; int s_pasta=0; int s_burger=0; int s_shake=0;
    
    // price of items ;
    int p_rooms=0; int p_pasta=0; int p_burger=0; int p_shake=0;
    
    cout<<"welcome to our hotel"<<endl<<endl;
    cout<<"we have a capacity of "<<q_rooms<<endl;
    cout<<"Quantity of items wer have"<<endl<<endl;
    
    cout<<"pasta avaliable (number of plates): "<<q_pasta<<endl; 
    cout<<"burger avaliable (number of plates): "<<q_burger<<endl; 
    cout<<"shake avaliable (number of plates): "<<q_shake<<endl; 
    
    cout<<"please select from the list "<<endl<<endl;
    cout<<"1->Rooms"<<endl;
    cout<<"2->pasta"<<endl;
    cout<<"3->burger"<<endl;
    cout<<"4->shake"<<endl;
    cout<<"5->for hotel's current status"<<endl;
    cout<<"0-> exit"<<endl;

    cout<<"enter your choice: "; cin>>choice;
    cout<<endl;
    while(choice!=0){

    switch (choice)
    {
    case 1:
            cout<<"Enter the no. of rooms you want: "; cin>>quantity; cout<<endl;
            if(quantity<=(q_rooms-s_rooms)){
                s_rooms+=quantity;
                cout<<"your room have been alloted to you"<<endl;
               /// cout<<"your Total price be:"<<q_rooms*p_rooms<<endl;
               p_rooms+=quantity*1000;
               cout<<"do you want anything else from menu  "<<endl;
               cout<<"enter a choice betweem t 1 to 5 else 0 : "<<endl;;
               int a;
               cin>>a;
               choice=a;

               cout<<endl; cout<<endl; cout<<endl;
               continue;

            }
            else{
                cout<<" Sorry! only"<<q_rooms-s_rooms<<"rooms are avaliable :"<<endl; cout<<endl;
                cout<<"do you want  anything else from menu  "<<endl;
               cout<<"enter a choice betweem t 1 to 5 else 0: "<<endl;;
               int a;
               cin>>a;
               choice=a;
               cout<<endl; cout<<endl; cout<<endl;

               continue;
            }
        break;

        case 2:
            cout<<"Enter quantity of pasta you want:"; cin>>quantity; cout<<endl;
            if(quantity<=(q_pasta-s_pasta)){
                s_pasta+=quantity;
                cout<<"thanks for your order"<<endl;
               // cout<<"your Total price be:"<<q_pasta*p_pasta<<endl;
                p_pasta+=quantity*250;
                cout<<"do you want anything else from menu  "<<endl;
               cout<<"enter a choice betweem t 1 to 5 else 0"<<endl;;
               int a;
               cin>>a;
               choice=a; cout<<endl;cout<<endl; cout<<endl;
               continue;
            }
            else{
                cout<<" Sorry! only"<<q_pasta-s_pasta<<"pltes of pasta avaliable"<<endl;  cout<<endl;
                cout<<"do you want  anything else from menu  "<<endl;
               cout<<"enter a choice betweem t 1 to 5 else 0"<<endl;;
               int a;
               cin>>a;
               choice=a;
               cout<<endl; cout<<endl;cout<<endl;
               continue;
            }
        break;

        case 3:
            cout<<"Enter quantity of burger you want:"; cin>>quantity;  cout<<endl;
            if(quantity<=(q_burger-s_burger)){
                s_burger+=quantity;
                cout<<"thanks for your order"<<endl;
                p_burger+=quantity*200;
                cout<<"do you want  anything else from menu  "<<endl;
               cout<<"enter a choice betweem t 1 to 5 else 0"<<endl;
               int a;
               cin>>a;
               choice=a; cout<<endl; cout<<endl; cout<<endl;
               continue;
            }
            else{
                cout<<" Sorry! only"<<q_burger-s_burger<<"pltes of burger avaliable"<<endl; cout<<endl;
                cout<<"do you want  anything else from menu  "<<endl;
               cout<<"enter a choice betweem t 1 to 5 else 0"<<endl;;
               int a;
               cin>>a;
               choice=a;
               cout<<endl; cout<<endl; cout<<endl;
               continue;
            }
        break;

        case 4:
            cout<<"Enter quantity of shake you want:"; cin>>quantity; cout<<endl;
            if(quantity<=(q_shake-s_shake)){
                s_shake+=quantity;
                cout<<"thanks for your order"<<endl;
                       p_shake+=quantity*180;
                       cout<<"do you want  anything else from menu  "<<endl;
               cout<<"enter a choice betweem t 1 to 5 else 0"<<endl;;
               int a;
               cin>>a;
               choice=a; cout<<endl; cout<<endl;cout<<endl;
               continue;
            }
            else{
                cout<<" Sorry! only"<<q_shake-s_shake<<"shakes are avaiable"<<endl; cout<<endl;
                cout<<"do you want  anything else from menu  "<<endl;
               cout<<"enter a choice betweem t 1 to 5 else 0"<<endl;;
               int a;
               cin>>a;
               choice=a;  cout<<endl;cout<<endl; cout<<endl;
               continue;
            }
        break;

        case 5:
            cout<<"details of sales and collection :"<<endl;
            cout<<"no. of rooms in this hotel :"<<q_rooms<<endl;
            cout<<"no. of rooms we sold :"<<s_rooms<<endl;
            cout<<"Remaing rooms :"<<q_rooms-s_rooms<<endl;
                 cout<<endl;cout<<endl;cout<<endl; 
             cout<<"no. of plates of pasta :"<<q_pasta<<endl;
            cout<<"no. of plates of pasta we sold:"<<s_pasta<<endl;
            cout<<"Remaing plates of pasta we have:"<<q_pasta-s_pasta<<endl;
                 cout<<endl;cout<<endl;cout<<endl; 

            cout<<"no. of plates of burger :"<<q_burger<<endl;
            cout<<"no. of plates of burger we sold:"<<s_burger<<endl;
            cout<<"Remaing plates of burger we have:"<<q_burger-s_burger<<endl;
                 cout<<endl;cout<<endl;cout<<endl; 

           cout<<"no. of shakes :"<<q_shake<<endl;
            cout<<"no. of shakes we sold:"<<s_shake<<endl;
            cout<<"Remaing shake we have:"<<q_shake-s_shake<<endl;
                 cout<<endl;cout<<endl;cout<<endl; 

            cout<<"do you want  anything else from menu  "<<endl;
               cout<<"enter a choice betweem t 1 to 5 else 0"<<endl;;
               int a;
               cin>>a;
                 cout<<endl;cout<<endl;cout<<endl; 
               choice=a;  
               continue;

        break;

       
        default:
            cout<<"please enter a number  between 1 to 5 "<<endl;
        break;
    }

    }

 
            
            
            cout<<"here is your bill:"<<endl;
            cout<<"room->"<<p_rooms<<endl;;
            cout<<"pasta->"<<p_pasta<<endl;
            cout<<"burger->"<<p_burger<<endl;
            cout<<"shakes->"<<p_shake<<endl;
            cout<<"your total bill->"<<(p_rooms+p_pasta+p_burger+p_shake)<<endl;
            cout<<"thanks for comming  "<<endl;
            cout<<"visit again "<<endl;
     

    return 0;
}