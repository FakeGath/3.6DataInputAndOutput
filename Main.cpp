// adds the library iostream to the program and string library too
#include <iostream>
#include <string>

int main(){

    //Declaration of variables age int and name string.
    int age {29};
    std:: string name;

    // prints message Hello World!
    std ::cout <<"Hello World!" << std:: endl;

    //Prints Age
    std :: cout << "Age : " << age << std :: endl;

    //Prints Errors and Logs
    std :: cerr << "Error message : Something is wrong"<< std :: endl;
    std :: clog << "Log message : Something happend " << std :: endl;

    //Declaration of variables age1 int and name1 string
    int age1;
    std :: string name1;

    //prints out a message to input data on age1 and name1
    std::cout <<"Please type your name and age : " << std :: endl;

    //it requests the name1 and age1 input
    std::cin >> name1;
    std:: cin >> age1;

    //prints out a message with the information gathered
    std:: cout << "Hello "<< name1 << " you are " << age1 << " years old!"<< std::endl;

    return 0;
}