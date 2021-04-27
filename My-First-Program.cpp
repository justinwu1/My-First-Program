#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>
#include <time.h>
using namespace std;

int main() {
        srand((int) time(NULL));

        //sum for the final score//
        int computerSum;
        int playerSum;
        int rounds = 1;
        int bet;
        int playerMoney = 1000;
        int computerMoney = 1000;
        int bigFish=19;
        // do while loop, making the whole game process not stop until one is broken//
        do {
                //dice1-3 is for player//
                int dice1 = rand() % 2 + 1;
                int dice2 = rand() % 2 + 1;
                int dice3 = rand() % 2 + 1;
                //dice4-6 is for computer//
                int dice4 = rand() % 6 + 1;
                int dice5 = rand() % 6 + 1;
                int dice6 = rand() % 6 + 1;
                cout << "[Round" << rounds << "]" << flush;
                cout << "You rolled " << "(" << dice1 << "," << dice2 << flush;
                cout << "," << "?" << ")" << "," << flush;
                cout << "Machine rolled " << "(" << dice4 << "," << dice5 << flush;
                cout << "," << "?" << ")" << endl;
                /*      cout << "Type autobet if you are not sure what to bet " << endl;*/
                cout << "How much you going to bet: " << flush;
                cin >> bet;

                //while loop to have bet only 1-10//
                while (bet > 300) {
                        cout << "Your bet need to be in 1-10, try again: " << flush;
                        cin >> bet;

                }
                //big fish//

                //if statement for output//

                if (bet <= 300) {

                        cout << "You had (" << dice1 << "," << dice2 << "," << dice3
                                        << ")-->" << flush;

                        //rolling dice1//
                        if (dice1 == dice2 && dice1 == dice3 && dice2 == dice3) {
                    playerSum = dice1 + dice2 + dice3;
                cout << "Big fish!!" << endl;                       
                        }
                        if (dice4 == dice5 && dice4== dice6 && dice5 == dice6) {
                    computerSum = dice4 + dice5 + dice6;
                cout << "Big fish!!" << endl;                       
                        }


                        else if ((dice1 >= dice2) && (dice1 >= dice3)) {
                                playerSum = dice1;
                                int dice2 = rand() % 6 + 1;
                                int dice3 = rand() % 6 + 1;
                                cout << "You rolled(" << dice2 << "," << dice3 << ")" << flush;
                                if (dice2 >= dice3) {
                                        playerSum = dice2;
                                        int dice3 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice3 << ")-->" << flush;
                                        playerSum = dice1 + dice2 + dice3;
                                        cout << "You scored " << playerSum << endl;
                                }
                                if (dice3 > dice2) {
                                        playerSum = dice3;
                                        int dice2 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice2 << ")-->" << flush;
                                        playerSum = dice1 + dice2 + dice3;
                                        cout << "You scored " << playerSum << endl;
                                }
                        }
                        //big fish for player//
                        //rolling dice2//
                        else if ((dice2 > dice1) && (dice2 >= dice3)) {
                                playerSum = dice2;
                                int dice1 = rand() % 6 + 1;
                                int dice3 = rand() % 6 + 1;
                                cout << "You rolled(" << dice1 << "," << dice3 << ")" << flush;
                                if (dice1 >= dice3) {
                                        playerSum = dice1;
                                        int dice3 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice3 << ")-->" << flush;
                                        playerSum = dice1 + dice2 + dice3;
                                        cout << "You scored " << playerSum << endl;
                                }
                                if (dice3 > dice1) {
                                        playerSum = dice3;
                                        int dice1 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice1 << ")-->" << flush;
                                        playerSum = dice1 + dice2 + dice3;
                                        cout << "You scored " << playerSum << endl;
                                }
                        }

                        //rolling dice3//
                        else if ((dice3 > dice2) && (dice3 > dice1)) {
                                playerSum = dice3;
                                int dice1 = rand() % 6 + 1;
                                int dice2 = rand() % 6 + 1;
                                cout << "You rolled(" << dice1 << "," << dice2 << ")" << flush;
                                if (dice1 >= dice2) {
                                        playerSum = dice1;
                                        dice2 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice2 << ")-->" << flush;
                                        playerSum = dice1 + dice2 + dice3;
                                        cout << "You scored " << playerSum << endl;
                                } else if (dice2 > dice1) {
                                        playerSum = dice2;
                                        dice1 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice1 << ")-->" << flush;
                                        playerSum = dice1 + dice2 + dice3;
                                        cout << "You scored " << playerSum << endl;
                                }
                        }
                        //ending for player rerolling dices//
                        //rolling dice4//
                        cout << "Machine had (" << dice4 << "," << dice5 << "," << dice6
                                        << ")-->" << flush;
                        if ((dice4 >= dice5) && (dice4 >= dice6)) {
                                computerSum = dice4;
                                int dice5 = rand() % 6 + 1;
                                int dice6 = rand() % 6 + 1;
                                cout << "Machine rolled(" << dice5 << "," << dice6 << ")"
                                                << flush;
                                if (dice5 >= dice6) {
                                        computerSum = dice5;
                                        int dice6 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice6 << ")-->" << flush;
                                        computerSum = dice4 + dice5 + dice6;
                                        cout << "You scored " << computerSum << endl;
                                }
                                if (dice6 > dice5) {
                                        computerSum = dice6;
                                        int dice5 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice5 << ")-->" << flush;
                                        computerSum = dice4 + dice5 + dice6;
                                        cout << "You scored " << computerSum << endl;
                                }
                        }
                        //rolling dice5//
                        else if ((dice5 > dice4) && (dice5 >= dice6)) {
                                computerSum = dice5;
                                int dice4 = rand() % 6 + 1;
                                int dice6 = rand() % 6 + 1;
                                cout << "Machine rolled(" << dice4 << "," << dice6 << ")"
                                                << flush;
                                if (dice4 >= dice6) {
                                        computerSum = dice4;
                                        int dice6 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice6 << ")-->" << flush;
                                        computerSum = dice4 + dice5 + dice6;
                                        cout << "Machine scored " << computerSum << endl;
                                }
                                if (dice6 > dice4) {
                                        computerSum = dice6;
                                        int dice4 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice4 << ")-->" << flush;
                                        computerSum = dice4 + dice5 + dice6;
                                        cout << "Machine scored " << computerSum << endl;
                                }
                        }
                        //rolling dice6//
                        else if ((dice6 > dice4) && (dice6 > dice5)) {
                                computerSum = dice6;
                                int dice4 = rand() % 6 + 1;
                                int dice5 = rand() % 6 + 1;
                                cout << "Machine rolled(" << dice4 << "," << dice5 << ")"
                                                << flush;
                                if (dice4 >= dice5) {
                                        computerSum = dice4;
                                        dice5 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice5 << ")-->" << flush;
                                        computerSum = dice4 + dice5 + dice6;
                                        cout << "Machine scored " << computerSum << endl;
                                } else if (dice5 > dice4) {
                                        computerSum = dice5;
                                        dice4 = rand() % 6 + 1;
                                        cout << "and then rolled(" << dice4 << ")-->" << flush;
                                        computerSum = dice4 + dice5 + dice6;
                                        cout << "Machine scored " << computerSum << endl;
                                } // start
                        }

                }
                //if statement for the result//
        /*      if ( dice4==dice5 && dice4==dice6 && dice4==dice5) {
                    cout << "You lost :( " <<flush;
                    playerMoney = playerMoney - (bet * 50);
                    computerMoney = computerMoney + (bet * 50);
                    cout << "You have$ " << playerMoney <<flush;
                    cout << "Machine has$ " << computerMoney << endl;

                } */
       if ( dice1==dice2 && dice2==dice3 && dice1==dice3) {
                    cout << "You won :( " <<flush;
                    playerMoney = playerMoney + (bet * 50);
                    computerMoney = computerMoney - (bet * 50);
                    cout << "You have$ " << playerMoney <<flush;
                    cout << "Machine has$ " << computerMoney << endl;
                }else if (playerSum > computerSum ){
                        cout << "You won :) " << flush;
                        playerMoney = playerMoney + ((playerSum - computerSum) * bet);
                        computerMoney = computerMoney - ((playerSum - computerSum) * bet);
                        cout << "You have$ " << playerMoney << flush;
                        cout << " Machine has$ " << computerMoney << endl;
                } else if (playerSum == computerSum) {
                        cout << "Tie! Money remain" << endl;
                } else if (computerSum > playerSum || (dice1 != dice2 && dice2 !=dice3 )) {
                        cout << "You lost :( " << flush;
                        playerMoney = playerMoney - ((computerSum - playerSum) * bet);
                        computerMoney = computerMoney + ((computerSum - playerSum) * bet);
                        cout << "You have$ " << playerMoney << flush;
                        cout << " Machine has$ " << computerMoney << endl;
                }
                     if ( dice4==dice5 && dice5==dice6 && dice4==dice6) {
                    cout << "You lost :( " <<flush;
                    playerMoney = playerMoney - (bet * 50);
                    computerMoney = computerMoney + (bet * 50);
                    cout << "You have$ " << playerMoney <<flush;
                    cout << "Machine has$ " << computerMoney << endl;
                }else if (playerSum > computerSum || (dice4 != dice5 && dice4 !=dice6 )){
                        cout << "You won :) " << flush;
                        playerMoney = playerMoney + ((playerSum - computerSum) * bet);
                        computerMoney = computerMoney - ((playerSum - computerSum) * bet);
                        cout << "You have$ " << playerMoney << flush;
                        cout << " Machine has$ " << computerMoney << endl;
                } else if (playerSum == computerSum) {
                        cout << "Tie! Money remain" << endl;
                } else if (computerSum > playerSum ) {


                        cout << "You lost :( " << flush;
                        playerMoney = playerMoney - ((computerSum - playerSum) * bet);
                        computerMoney = computerMoney + ((computerSum - playerSum) * bet);
                        cout << "You have$ " << playerMoney << flush;
                        cout << " Machine has$ " << computerMoney << endl;
                }



                rounds++;
        } while (playerMoney >= 0 && computerMoney >= 0);

        //the rounds will continue as the money is not equal to 0 //
        return 0;
}