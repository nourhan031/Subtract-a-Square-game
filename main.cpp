#include<iostream>
using namespace std;


bool is_valid(int arr[7], int num, int result) {
    for (int i = 0; i < 7; i++) {
        if (arr[i] == num) {
            if (num <= result) {
                return true;
            }

        }
    }

    return false;
}

int main() {



    int result = 150;
    int P1, P2 ;
    bool a = true;
    int arr[7] = { 1,4,9,16,25,36,49 };


    cout << "This is subtract-a-square game\n\n";
    cout << "There are 150 coins and you get to pick a number from these:(1,4,9,16,25,36,49) to subtract\n\n";

    while (a == true) {

        cout << "player1, pls pick a number: ";
        cin >> P1;

        while (is_valid(arr, P1 , result) == false) {
            cout << "invalid input";
            cout << "Please, try again";
            cin >> P1 ;
            is_valid(arr, P1, result);
        }


        result = result - P1;

        cout << result << endl;

        if (result == 0) {
            cout << "congrats, player1!";
            break;
        }

        else {
            cout << "player2's turn\n\n";
        }
        cout << "player2, pls pick a number: ";
        cin >> P2;

        while (is_valid(arr, P2, result) == false) {
            cout << "invalid input";
            cout << "Please, try again";
            cin >> P2;
            is_valid(arr, P2, result);
        }

        result = result - P2;

        cout << result << endl;

        if (result == 0) {
            cout << "congrats, player2!";
            break;
        }

        else {
            cout << "player1's turn\n\n";
        }

    }

    return 0;
}
