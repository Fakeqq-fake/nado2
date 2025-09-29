#include <iostream>
void n_1(){
    double num1, num2;

    std::cout << "Bbedute IIepBoe 4uclo: ";
    std::cin >> num1;
    
    std::cout << "Bbedute Btopoe 4uclo: ";
    std::cin >> num2;

    bool areEqual = (num1 == num2);
    std::cout << std::boolalpha << areEqual << std::endl;
}
void n_2(){
    int num;

    std::cout << "Bbedute 4uclo: ";
    std::cin >> num;

    bool isEven = (num % 2 == 0);

    std::cout << std::boolalpha << isEven << std::endl;
}
void n_3(){
     int age;

    std::cout << "Budute Baw Bo3BpacT: ";
    std::cin >> age;

    bool isAdult = (age >= 18); 

    std::cout << std::boolalpha << isAdult << std::endl;
}
void n_4(){
     float temperature;

    std::cout << "Enter the temperature (in degrees Celsius): ";
    std::cin >> temperature;
  
    if (temperature < 0) {
        std::cout << "The temperature is below 0 degrees." << std::endl;
    } else {
        std::cout << "The temperature is not below 0 degrees." << std::endl;
    }
}
void n_5() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;
 
    if (number % 3 == 0 && number % 5 == 0) {
        std::cout << "The number is divisible by both 3 and 5." << std::endl;
    } else {
        std::cout << "The number is not divisible by both 3 and 5." << std::endl;
    }
}
void n_6(){
    int password;
    const int correctPassword = 1234;

    std::cout << "Enter the password (whole number): ";
    std::cin >> password;
 
    if (password == correctPassword) {
        std::cout << "Access granted" << std::endl;
    } else {
        std::cout << "Access denied" << std::endl;
    }
}
void n_7(){
    int year;

    std::cout << "Enter the year: ";
    std::cin >> year;
 
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << "is a leap year." << std::endl;
    } else {
        std::cout << year << "is not a leap year." << std::endl;
    }
}
void n_8(){
     int year;

    std::cout << "Enter the year: ";
    std::cin >> year;
 
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (!isLeapYear) {
        std::cout << year << "is not a leap year." << std::endl;
    } else {
        std::cout << year << "is a leap year." << std::endl;
    }
}
void n_9(){
int x;

    std::cout << "Enter the number x: ";
    std::cin >> x;
  
    if (x >= 10 && x <= 20) {
        std::cout << x << "is in the range from 10 to 20." << std::endl;
    } else {
        std::cout << x << "is not in the range from 10 to 20." << std::endl;
    }

}
void n_10(){
bool a, b;

    std::cout << "Enter a value for a (0 or 1): ";
    std::cin >> a;
    std::cout << "Enter a value for b (0 or 1): ";
    std::cin >> b;

    std::cout << "The result of a && b: " << (a && b) << std::endl;

    std::cout << "Result a || b: " << (a || b) << std::endl;


}
int main(){
    n_1();
    n_2();
    n_3();
    n_4();
    n_5();
    n_6();
    n_7();
    n_8();
    n_9();
    n_10();

    return 0;
}
