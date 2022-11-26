#include <iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

void mainmenu();

class managment {

public:
    managment()
    {
        mainmenu();
    }

};

class Details {
public:
    static string name, gender;
    int phone;
    int age;
    string add;
    static int cid;
    char arr[100];

    void information()
    {
        cout << "enter you name: ";
        cin >> name;
        cout << "enter gender: ";
        cin >> gender;
        cout << "enter phone number: ";
        cin >> phone;
        cout << "enter age: ";
        cin >> age;
        cout << "enter address: ";
        cin >> add;
        cout << "enter CID: ";
        cin >> cid;
        cout << "your information saved with us\n";
    }
};
int Details ::cid;
string Details::name;
string Details::gender;

class registration {

public:
    static int choice;
   static float charges;
    int choice1;
    int back;

    void flights() {

        string flight[]{ "dubai", "canada", "UK","USA", "australia", "europa"};
        for (int a = 0; a < 6; a++) {

            cout << a + 1 << " flight to " << flight[a] << endl;
        }
        cout << "___________Welcome in Airlines_______\n";
        cout << "press number of flight you want to book \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "___________Welcome to Dubai Emarat__________\n";
            cout << "your comfort is our priority. Enjoy the journey \n";
            cout << "following are the flights \n";

            cout << "1. DUB _ 498" << endl;
            cout << "\t 08_01_2022 8::00 AM 10hrs Rs. 14000 \n";
            cout << "1. DUB _ 488" << endl;
            cout << "\t 09_01_2022 8::00 AM 10hrs Rs. 10000 \n";
            cout << "1. DUB _ 408" << endl;
            cout << "\t 11_01_2022 8::00 AM 10hrs Rs. 16000 \n";

            cout << "select the flight you want to book \n";
            cin >> choice1;

            if (choice1 == 1) {

                charges = 14000;
                cout << "\n you have successfully booked the flight DUB _ 498 \n";
                cout << "you can go back to the main menu and take ticket \n";

            }
            else if (choice == 2) {

                charges = 10000;
                cout << "\n you have successfully booked the flight DUB _ 488 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else if (choice == 3) {
                charges = 16000;
                cout << "\n you have successfully booked the flight DUB _ 408 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else {
                cout << "invalid input, shifting to the previos menu \n";
                flights();
            }

            cout << "press any key to back the main menu \n";
            cin >> back;

            if (back == 1) {
                mainmenu();
            }
            else {
                mainmenu();
            }
        }
        case 2:
        {
            cout << "___________Welcome to Canadian Airline__________\n";
            cout << "your comfort is our priority. Enjoy the journey \n";
            cout << "following are the flights \n";

            cout << "1. CA _ 198" << endl;
            cout << "\t 08_01_2022 8::00 AM 10hrs Rs. 14000 \n";
            cout << "1. CA _ 288" << endl;
            cout << "\t 09_01_2022 8::00 AM 10hrs Rs. 10000 \n";
            cout << "1. CA _ 108" << endl;
            cout << "\t 11_01_2022 8::00 AM 10hrs Rs. 16000 \n";

            cout << "select the flight you want to book \n";
            cin >> choice1;

            if (choice1 == 1) {

                charges = 14000;
                cout << "\n you have successfully booked the flight CA _ 198 \n";
                cout << "you can go back to the main menu and take ticket \n";

            }
            else if (choice == 2) {

                charges = 10000;
                cout << "\n you have successfully booked the flight CA _ 288 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else if (choice == 3) {
                charges = 16000;
                cout << "\n you have successfully booked the flight CA _ 108 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else {
                cout << "invalid input, shifting to the previos menu \n";
                flights();
            }

            cout << "press any key to back the main menu \n";
            cin >> back;

            if (back == 1) {
                mainmenu();
            }
            else {
                mainmenu();
            }
        }

        case 3:
        {
            cout << "___________Welcome to UK Airways__________\n";
            cout << "your comfort is our priority. Enjoy the journey \n";
            cout << "following are the flights \n";

            cout << "1. UK _ 398" << endl;
            cout << "\t 08_01_2022 8::00 AM 10hrs Rs. 14000 \n";
            cout << "1. UK _ 588" << endl;
            cout << "\t 09_01_2022 8::00 AM 10hrs Rs. 10000 \n";
            cout << "1. UK _ 608" << endl;
            cout << "\t 11_01_2022 8::00 AM 10hrs Rs. 16000 \n";

            cout << "select the flight you want to book \n";
            cin >> choice1;

            if (choice1 == 1) {

                charges = 14000;
                cout << "\n you have successfully booked the flight UK _ 398 \n";
                cout << "you can go back to the main menu and take ticket \n";

            }
            else if (choice == 2) {

                charges = 10000;
                cout << "\n you have successfully booked the flight UK _ 588 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else if (choice == 3) {
                charges = 16000;
                cout << "\n you have successfully booked the flight UK _ 608 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else {
                cout << "invalid input, shifting to the previos menu \n";
                flights();
            }

            cout << "press any key to back the main menu \n";
            cin >> back;

            if (back == 1) {
                mainmenu();
            }
            else {
                mainmenu();
            }
        }

        case 4:
        {
            cout << "___________Welcome to USA__________\n";
            cout << "your comfort is our priority. Enjoy the journey \n";
            cout << "following are the flights \n";

            cout << "1. USA _ 598" << endl;
            cout << "\t 08_01_2022 8::00 AM 10hrs Rs. 14000 \n";
            cout << "1. USA _ 458" << endl;
            cout << "\t 09_01_2022 8::00 AM 10hrs Rs. 10000 \n";
            cout << "1. USA _ 405" << endl;
            cout << "\t 11_01_2022 8::00 AM 10hrs Rs. 16000 \n";

            cout << "select the flight you want to book \n";
            cin >> choice1;

            if (choice1 == 1) {

                charges = 14000;
                cout << "\n you have successfully booked the flight USA _ 598 \n";
                cout << "you can go back to the main menu and take ticket \n";

            }
            else if (choice == 2) {

                charges = 10000;
                cout << "\n you have successfully booked the flight USA _ 458 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else if (choice == 3) {
                charges = 16000;
                cout << "\n you have successfully booked the flight USA _ 508 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else {
                cout << "invalid input, shifting to the previos menu \n";
                flights();
            }

            cout << "press any key to back the main menu \n";
            cin >> back;

            if (back == 1) {
                mainmenu();
            }
            else {
                mainmenu();
            }
        }
        case 5:
        {
            cout << "___________Welcome to Ausralia Airways__________\n";
            cout << "your comfort is our priority. Enjoy the journey \n";
            cout << "following are the flights \n";

            cout << "1. AS _ 480" << endl;
            cout << "\t 08_01_2022 8::00 AM 10hrs Rs. 14000 \n";
            cout << "1. AS _ 482" << endl;
            cout << "\t 09_01_2022 8::00 AM 10hrs Rs. 10000 \n";
            cout << "1. AS _ 409" << endl;
            cout << "\t 11_01_2022 8::00 AM 10hrs Rs. 16000 \n";

            cout << "select the flight you want to book \n";
            cin >> choice1;

            if (choice1 == 1) {

                charges = 14000;
                cout << "\n you have successfully booked the flight AS _ 480 \n";
                cout << "you can go back to the main menu and take ticket \n";

            }
            else if (choice == 2) {

                charges = 10000;
                cout << "\n you have successfully booked the flight AS _ 482 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else if (choice == 3) {
                charges = 16000;
                cout << "\n you have successfully booked the flight AS _ 409 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else {
                cout << "invalid input, shifting to the previos menu \n";
                flights();
            }

            cout << "press any key to back the main menu \n";
            cin >> back;

            if (back == 1) {
                mainmenu();
            }
            else {
                mainmenu();
            }
        }

        case 6:
        {
            cout << "___________Welcome to European Airlines__________\n";
            cout << "your comfort is our priority. Enjoy the journey \n";
            cout << "following are the flights \n";

            cout << "1. EU _ 398" << endl;
            cout << "\t 08_01_2022 8::00 AM 10hrs Rs. 14000 \n";
            cout << "1. EU _ 988" << endl;
            cout << "\t 09_01_2022 8::00 AM 10hrs Rs. 10000 \n";
            cout << "1. EU _ 708" << endl;
            cout << "\t 11_01_2022 8::00 AM 10hrs Rs. 16000 \n";

            cout << "select the flight you want to book \n";
            cin >> choice1;

            if (choice1 == 1) {

                charges = 14000;
                cout << "\n you have successfully booked the flight EU _ 398 \n";
                cout << "you can go back to the main menu and take ticket \n";

            }
            else if (choice == 2) {

                charges = 10000;
                cout << "\n you have successfully booked the flight EU _ 988 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else if (choice == 3) {
                charges = 16000;
                cout << "\n you have successfully booked the flight EU _ 708 \n";
                cout << "you can go back to the main menu and take ticket \n";
            }
            else {
                cout << "invalid input, shifting to the previos menu \n";
                flights();
            }

            cout << "press any key to back the main menu \n";
            cin >> back;

            if (back == 1) {
                mainmenu();
            }
            else {
                mainmenu();
            }
        }
        default:
        {
            cout << "Invalid input, shifting you to the main menu \n";
            mainmenu();
            break;
        }
        }

    }
};
float registration::charges;
int registration::choice;

class ticket : public registration, Details {

public:
    void bill() {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf << "__________ XYA Lines __________\n";
            outf << "____________TICKET_____________\n";
            outf << "_______________________________\n";

            outf << "Customer Id: " << Details::cid << endl;
            outf << "Customer name: " << Details::name << endl;
            outf << "Customer gender: " << Details::gender << endl;
            outf << "\t Description \n\n";

            if (registration::choice == 1) {
                destination = "Dubai";
            }
            else if (registration::choice == 2) {
                destination = "Canda";
            }
            else if (registration::choice == 3) {
                destination = "UK";
            }
            else if (registration::choice == 4) {
                destination = "USA";
            }
            else if (registration::choice == 5) {
                destination = "Australia";
            }
            else if (registration::choice == 6) {
                destination = "Europa";
            }
            outf << "\t Destination " << destination << endl;
            outf << "flight cost " << registration::charges << endl;
        }
        outf.close();
    }

    void disbill() {

        ifstream ifs("records.txt"); {
            if (!ifs) {
                cout << "error file \n";
            }
            while (!ifs.eof()) {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }


};
void mainmenu()
{
    int lchoice;
    int schoice;
    int back1;

    cout << "\t\t\t\t      xyz Airlines     " << endl;
    cout << "\t\t\t\t       MainMenu        " << endl;
    cout << "\t\t\t\t_______________________" << endl;
    cout << "\t\t\t\t                       " << endl;

    cout << "press 1 for customer details    \n";
    cout << "press 2 for flight registration \n";
    cout << "press 3 to exit                 \n";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:
    {
        cout << "\t\t\t\t Customers \n";
        d.information();
        cout << "press any key to back to main menu \n";
        cin >> back1;

        if (back1 == 1)
        {
            mainmenu();
        }
        else
        {
            mainmenu();
        }
    }
    break;

    case 2:
    {
        cout << "\t\t\t\t Book a flight using this system " << endl;
        r.flights();
        break;
    }
    case 3:
    {
        cout << "\t\t\t Get your ticket \n";
        t.bill();

        cout << "your ticket is printed, you can collect it \n";
        cout << "press 1 to display it \n";
        cin >> back1;

        if (back1 == 1)
        {
            t.disbill();
            cout << "press 1 to back to main menu \n";
            cin >> back1;

            if (back1 == 1)
            {
                mainmenu();
            }
            else
            {
                mainmenu();
            }
        }
        else
        {
            mainmenu();
        }
    }
    break;

    case 4:
    {
        cout << "\n\n____________thank you \n\n";
        break;
    }
    default:
        cout << "error choice, try again \n";
        mainmenu();
        break;
    }


}
int main()
{


 managment mobji;



}




