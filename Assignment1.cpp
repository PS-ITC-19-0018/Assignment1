#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string customerName;
    int customerID;
    int item;
    int quantity;
    double price;
    double totalCost;
    double amountPaid;
    double balance;
    string item_name;
    char decision;
     double vat=0.12;

    const double PRINTER_PRICE=450.00,
                 PHONE_PRICE=700.00,
                 TABLE_PRICE=50.00;

    const int printer=1,
              phone =2,
              table=3;


    cout<<"Enter your name : " <<endl;
    getline(cin,customerName);

    cout<<"Enter your ID : "<<endl;
    cin>>customerID;


    do
	 {
    cout<<"THERE ARE THREE ITEMS IN STOCK AS DESCRIBED BELOW. " <<endl;
    cout<<"ITEMS\t\tPRICE" <<endl;
    cout<<"___________________________"<<endl;
    cout<<"PRINTER\t\tGHS"<<PRINTER_PRICE<<endl;
    cout<<"PHONE\t\tGHS"<<PHONE_PRICE<<endl;
    cout<<"TABLE\t\tGHS"<<TABLE_PRICE<<endl;
    cout<<endl;
    cout<<"ENTER THE NUMBER ATTACHED TO IT TO INDICATE THE ITEM YOU ARE BUYING"<<endl;
    cout<<"1.PRINTER.\n2.PHONE.\n3.TABLE"<<endl;
    cin>>item;

    //VALIDATING ITEM SELECTION
      while(item<printer || item>table)
    {
        cout<<"Invalid!, Please read the instructions and press a valid key "<<endl;
        cout<<"Please enter 1, 2 or 3 to make your choice "<<endl;
       cin>>item;
    }
    switch(item)
   {

     case printer:
        {


        cout<<"How many are you buying ?" <<endl;
        cin>>quantity;
        price=PRINTER_PRICE*quantity;
        vat=price*vat;
        totalCost=(PRINTER_PRICE*quantity+vat);
        cout<<"Total Cost : GHS "<<totalCost<<endl;
        cout<<"Enter the amount in hand "<<endl;
        cin>>amountPaid;

        balance=amountPaid-totalCost;

        while(amountPaid<totalCost)
        {
            cout<<"Your money is insufficient!. Please Your money should be greater than or equal to : "<<totalCost<<endl;
            cout<<"Please enter the money again :" <<endl;
            cin>>amountPaid;

        }




        string itemName="Printer";
        cout<<"====================" <<endl;
        cout<<"RECEIPT INFO. " <<endl;
        cout<<"NAME : " <<customerName<<endl;
        cout<<"Customer ID : "<<customerID<<endl;
        cout<<"Item bought : "<<itemName<<endl;
        cout<<"Quantity : " <<quantity<<endl;
        cout<<"Vat on Items : GHS "<< vat<<endl;
        cout<<"Total Cost : GHS "<<totalCost<<endl;
        cout<<"Total amount Paid : GHS "<<amountPaid<<endl;

         if(amountPaid>totalCost)
           {
            cout<<"Balance : GHS " <<balance<<endl;
           }

         }

        break;




    case phone:
            {
        cout<<"How many are you buying ?" <<endl;
        cin>>quantity;
        price=PHONE_PRICE*quantity;
        vat=price*vat;
        totalCost=(PHONE_PRICE*quantity+vat);
        cout<<"Total Cost : GHS"<<totalCost<<endl;
        cout<<"Enter the amount in hand "<<endl;
        cin>>amountPaid;


        balance=(amountPaid-totalCost);

        while(amountPaid<totalCost)
        {
            cout<<"Your money is insufficient!. Please Your money should be greater than or equal to : GHS "<<totalCost<<endl;
            cout<<"Enter your money again :"<<endl;
            cin>>amountPaid;
        }

        //DISPLAYING RECEIPT

        string itemName="Phone";
        cout<<"====================" <<endl;
        cout<<"RECEIPT INFO. " <<endl;
        cout<<"NAME : " <<customerName<<endl;
        cout<<"Customer ID : "<<customerID<<endl;
        cout<<"Item bought : "<<itemName<<endl;
        cout<<"Quantity : " <<quantity<<endl;
        cout<<"Vat on Items : GHS"<< vat<<endl;
        cout<<"Total Cost : GHS"<<totalCost<<endl;
        cout<<"Total amount Paid : GHS"<<amountPaid<<endl;

          if(amountPaid>totalCost)
           {
            cout<<"Balance : GHS" <<balance<<endl;
           }

        cout<<"=====================" <<endl;

            }
            break;

        case table:
            {
        cout<<"How many are you buying ?" <<endl;
        cin>>quantity;
        price=TABLE_PRICE*quantity;
        vat=price*vat;
        totalCost=(TABLE_PRICE*quantity+vat);
        cout<<"Total Cost : GHS"<<totalCost<<endl;
        cout<<"Enter the amount in hand "<<endl;
        cin>>amountPaid;

        balance=(amountPaid-totalCost);

        while(amountPaid<totalCost)
        {
            cout<<"Your money is insufficient!. Please Your money should greater than or equal to : "<<totalCost<<endl;
            cout<<"Enter your money again :"<<endl;
            cin>>amountPaid;

           // balance=amountPaid-totalCost;
        }

        //DISPLAYING RECEIPT

        string itemName="Table";

        cout<<"====================" <<endl;
        cout<<"RECEIPT INFO. " <<endl;
        cout<<"NAME : " <<customerName<<endl;
        cout<<"Customer ID : "<<customerID<<endl;
        cout<<"Item bought : "<<itemName<<endl;
        cout<<"Quantity : " <<quantity<<endl;
        cout<<"Vat on Items : GHS"<< vat<<endl;
        cout<<"Total Cost : GHS"<<totalCost<<endl;
        cout<<"Total amount Paid : GHS "<<amountPaid<<endl;

          if(amountPaid>totalCost)
           {
            cout<<"Balance : GHS " <<balance<<endl;
           }

        cout<<"=====================" <<endl;




   }



   }
          cout<<endl;
         //ASK THE USER IF HE WANTS TO BUY ANY ITEM AGAIN
         cout<<"Do you want to buy another item ?" <<endl;
         cout<<"If YES, enter 'Y' or 'y'. If NO, Enter any other key to end:" <<endl;
         cin>>decision;

         } while(decision=='Y'|| decision== 'y');

         cout<<"THANK YOU " <<endl;

        cout<<"=====================" <<endl;


   return 0;
}

