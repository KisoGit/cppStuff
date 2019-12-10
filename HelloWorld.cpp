#include <iostream>

using namespace std;

class Book {                    //Define a c++ class.
    private:
        string title;
        string author;
        int pages;
    public:
        Book(string givenTitle) {   //Constructor for the "Book" class.
            title = givenTitle;
        }
};

class ChildrensBook: public Book {  //inheritance
    private:
        int ageRestriction;
        
    public:
        void setAgeRestriction(int givenAgeRestriction) {
            ageRestriction = givenAgeRestriction;
        }

        int getAgeRestriction() {
            return ageRestriction;
        }
};

void sayHi(string name) {       //Defining a fuction.
    cout << "Hello " << name;
}

int power(int baseNum, int powNum) {        //Function that gives baseNum to the power of powNum.

    int result = 1;

    for(int i = 0; i < powNum; i++) {
            result = result * baseNum;
    }

    return result;
}

int main() {
    
    string hello = "Hello World";
    int age;
    int *pAge = &age;       //Pointer to age.
    string name;

    int numbers[] = {3, 4 ,6 ,1};
    
    cout << "what do you call this type of program?\n" << hello << " \n Oh I remember..." << endl;

    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old?" << endl;

    cout << "Enter your name: " << endl;
    getline(cin, name);
    
    sayHi(name);

    return 0;
}