#include <iostream>
#include <string>
#include <vector>
using namespace std;
string Typearray[3] = {"Deep dish","Hand tossed","Pan"};
string Sizearray[3] = {"Small","Medium","Large"};
string Toppingsarray[9] = {"Peppcroni","Peppcroni(NY Style)","Asiago","Bocconcini","Cheddar","Feta","Goat Cheese","Mozzarcella","Parmesan"};
int num = 0, money; //input num

class Pizza {//oop
    public:
        string type;
        string size;
        vector<string> toppings;
};
Pizza pay{};//pay

void Typefunction() {//type
    cout << "Choose pizza's type :" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i+1 << ". " << Typearray[i] << endl;
    }
    do {
        cin >> num;
        if (num == -1) {
            exit(1);
        }
        if (num > 3 || num < 1) {
            cout << "Invalid input, Please input again :" << endl;
        }
    } while(num > 3 || num < 1);
    
    pay.type = Typearray[num-1];
};

void Sizefunction() {//Size
    cout << "Choose pizza's size :" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i+1 << ". " << Sizearray[i] << endl;
    }
    do {
        cin >> num;
        if (num == -1) {
            exit(1);
        }
        if (num > 3 || num < 1) {
            cout << "Invalid input, Please input again :" << endl;
        }
    } while(num > 3 || num < 1);
    pay.size = Sizearray[num-1];

    if (num == 1) {
        money = 10;
    } else if (num == 2) {
        money = 14;
    } else {
        money = 17;
    }
};

void Topfunction() {//Top
    do {
        cout << "Choose pizza's toppings :" << endl;
        for (int i = 0; i < 9; i++) {
            cout << i+1 << ". " << Toppingsarray[i] << endl;
        }

        cin >> num;
        if (num == -1) {
            exit(1);
        }
        pay.toppings.push_back(Toppingsarray[num-1]);
    } while(num != 0);
    
    money += pay.toppings.size()*2;
};

void Output() {
    cout << "Your order :" << endl;
    cout << "Type : "  << pay.type << endl;
    cout << "Size : "  << pay.size << endl;

    cout << "Toppings : ";
    for (int i = 0; i < pay.toppings.size()-2; i++) {
        cout << pay.toppings[i] << " & ";
    }
    cout << pay.toppings[pay.toppings.size()-2] << endl;
    cout << endl;
    cout << "Your pizza's price : $" << money << endl;
    cout << "Thank you for your coming!";
}

int main() {//main
    Typefunction();  
    cout << endl;
    Sizefunction();
    cout << endl;
    Topfunction();
    cout << endl;
    Output();
}
