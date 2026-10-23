#include<iostream>
#include<vector>
using namespace std;

int main() {
    //cout << 3 << "\n,\n",

    //cout << 3 << endl;
    //cout << 3 << "\n";
    //cout << 6;
    //cout << 3;
    //cout << 6;
    //cout << "hello, world!"  << " \n";
    //cout << " i am learning c++";
    /*int myNum= 15;
    cout << myNum;*/
    /*int myAge = 35;
    cout << "I am " << myAge << "years old.";*/
    /*string name = "daniel";
    int age = 35;
    double height = 6.1;
    cout << name << " is " << age << "years old " <<  height << " feet tall";*/


    /*int studentID = 15;
    int studentAge = 23;
    double studentFee = 75.25;
    char studentGrade = 'B';

    cout << "student ID :" << studentID << "\n";
        cout << "student Age :" << studentAge << "\n";
        cout << "student Fee :" << studentFee << "\n";
        cout << "studentGrade :" << studentGrade << "\n";


    int length = 4;
    int width = 6;

        int area = length * width;

        cout << "Length is: " << length << endl;
    cout << "Width is: " << width << endl;
        cout << "Area  of a rectangle is: " << area << endl;*/

    /*int x, y;
        int sum;
        cout << "Type a number:" ;
        cin >> x;
        cout << "Type another number:" ;
        cin >> y;
        sum = x + y;
        cout << "sum is :" << sum;*/
    /* int x;
     cout << "type a number";
     cin >> x;
     cout << "your number is " << x;*/

    /*int x ,y;
    int sum;
    cout << "type a number";
    cin >> x;
    cout << "type another number" ;
    cin >> y;
    sum = x + y ;
    cout << "sum is " << sum;*/

    /* float f1 = 35e3;
     double d1 = 12E4;
     cout << f1;
     cout << d1;
 double mynum = 19.99;
     cout << mynum;*/

    /* int items = 50;
     double cost_per_items = 9.99;
     double total_cost = items * cost_per_items;
     char currency = '$';

     cout << " number of items: " << items << endl;
     cout << " cost per items: " << cost_per_items << currency << endl;
     cout << " total cost: " << total_cost << currency << endl;*/

    /*int peopleinroom =0;
    peopleinroom++;
    cout << peopleinroom << endl;
    peopleinroom--;
    cout << peopleinroom  << endl;*/

    /*string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "the length of the txt string is : " << txt.length();*/

    /* string fullname;
     cout << "type your fullname: " ;
     getline(cin, fullname);
     cout << "your name is : " << fullname ;*/

    /*int i = 0;
    do {
        cout << i << endl;
        i++;
    }
    while (i < 5);*/

    /*int num;
    do {
        cout <<  "Enter a positive num: ";
        cin >> num;
    }while (num > 0);*/

    /*int a = 5;
    int b = 6;
    int sum;

    sum = a + b;
    cout << "sum :" << sum << endl;*/

    /* int a;
     int b;
     int sum;
     cout <<  "Enter a positive integer: ";
     cin >> a;
     cout << "Enter another positive integer: ";
     cin >> b;

     sum = a + b;
     cout << "sum: " << sum << endl;*/

    /*for (int i = 01; i <= 10; i = i + 3) {
        cout << i << endl;
    }*/

    /*for (int i  = 1; i <= 12; i++) {
        for (int j = 1; j <= 12; j++) {
            cout << i  * j << " ";
        }
        cout << endl;
    }*/

    /*int numbers = 12;
    int i;

    for (i = 1; i <= 12; i++) {
        cout /*
        << "   |   " << numbers  << "x" << i << "   " << "=" << numbers * i << "   |   "<< endl;  //"/n";
    }
        int i;
int numbers =512;
for (int i =2; i <= 512; i *= 2) {
    cout << i << "\n";
}*/

    /*string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i = 0; i < 5; i++) {
        //cout << cars[i] << "\n";
        cout << i << " = " << cars[i] << "\n";
    }
    //cars[0]; //= //"Opel";
    //cout << cars[0];*/

    vector<string> cars = {"Volvo", "BMW", "Ford"};
    cars.push_back("Tesla");
    for (string car : cars) {
        cout << car << endl;
    }
return 0;
}