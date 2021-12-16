// 1) A departmental store maintains the details of all items sold from there. The following attributes must be entered. Item-code, item-name, unit-price, quantity. Whenever a customer purchases a thing, the item-name will be input through the keyboard. The system must search and find out whether the item is existing in the shop or not. If the item exists, system must display the details of the item and prompts for quantity. The user enters the quantity through the key-board. If enough quantity is there, the total cost is printed. When a new stock arrives (of any item), there must be a provision for updating the existing quantity. When a transaction takes place, the quantity must be updated. A single customer may purchase any number of items. His total bill must be printed along with full details of each item. The statistics of each item purchased must be recorded in order to order for the most demanding item. There must be provisions for adding new items in the store at any point of time. Use constructors for accomplish this. At the end of the program, the objects must be destroyed.
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class dept_store
{
    public:
    //  VARIABLES GIVEN IN QUESTION
        int item_code, unit_price, quantity;
        char item_name[20];

    // Variables I declared
    int i, n;

    dept_store(){}

    dept_store(int cpy_code, int cpy_price, int cpy_qty, char *name)
    {
        item_code = cpy_code;
        unit_price = cpy_price;
        quantity = cpy_qty;
        strcpy(item_name, name);
    }
    void enter()
    {
        cout<<"Enter Item Code: ";
        cin>>item_code;
        cout<<"Enter Item Name: ";
        cin>>item_name;
        cout<<"Enter Item Price: ";
        cin>>unit_price;
        cout<<"Enter Item Available Quantity: ";
        cin>>quantity;
    }
    void display()
    {
        cout<<item_code<<'\t'<<'\t'<<item_name<<'\t'<<'\t'<<unit_price<<'\t'<<'\t'<<quantity<<endl;
    }
    void input()
    {
        int entered_quantity, search_code;
        int i,n;
        
        retry_name:
        cout<<"Enter Code to find: ";
        cin>>search_code;
        
        if(search_code == item_code)
            {
            cout<<"Item is available"<<endl;
            cout<<"Details: "<<endl;
            cout<<"Item Code"<<'\t'<<"Item Name"<<'\t'<<"Item Price"<<'\t'<<"Item Available Quantity"<<endl;
            cout<<item_code<<'\t'<<'\t'<<item_name<<'\t'<<'\t'<<unit_price<<'\t'<<'\t'<<quantity<<endl;
        }
        else
        {
            cout<<"Item is not available"<<endl;
            goto retry_name;
        }

        retry_quantity:
        cout<<"Enter Quantity: ";
        cin>>entered_quantity;

        if(entered_quantity <= quantity)
        {
            cout<<"Required Quantity is available"<<endl;
            
            cout<<"Name: "<<item_name<<endl;
            cout<<"Code: "<<item_code<<endl;
            cout<<"Quantity: "<<entered_quantity<<endl;
            cout<<"Overall Price: "<<entered_quantity*unit_price<<endl;
        }
        else
        {
            cout<<"Required Quantity is not available"<<endl;
            goto retry_quantity;
        }
          
        quantity = quantity - entered_quantity;
        cout<<"Details of Avaliable Items"<<endl;
        cout<<"Item Code"<<'\t'<<"Item Name"<<'\t'<<"Item Price"<<'\t'<<"Item Available Quantity"<<endl;
        cout<<item_code<<'\t'<<'\t'<<item_name<<'\t'<<'\t'<<unit_price<<'\t'<<'\t'<<quantity<<endl;
    }
};

int main()
{
    dept_store ob[10];
    int i,n,quest;
    cout<<"Enter number of Available Items in store: ";
    cin>>n; 
    
    for(i=0;i<n;i++)
    {
        ob->enter();
    }

    cout<<"Item Code"<<'\t'<<"Item Name"<<'\t'<<"Item Price"<<'\t'<<"Item Available Quantity"<<endl;
    for(i=0;i<n;i++)
    {
        ob->display();
    }

    retry_purchase:
    ob->input();

    cout<<"Do you want to continue shopping? (1- yes/ 2- no): ";
    cin>>quest;

    if(quest == 1)
    {
        goto retry_purchase;
    }
    else
    {
        return 0;
    }

    return 0;
}