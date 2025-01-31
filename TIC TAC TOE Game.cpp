#include <iostream>
#include <ctime>
using namespace std;

void board(char *space);
void playerMove(char *space, char player);
void computerMove(char *space, char computer, char player);
bool checkWinner(char *space, char player, char computer);
bool checkTie(char *space);

int main(){
    srand(time(0));
    bool playAgain = false;
    do {
        char space[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
        char player = 'X';
        char computer = 'O';
        bool running = true;

        
        board(space);
        while (running) {
            playerMove(space, player);
            if (checkWinner(space, player, computer)) {  
                board(space);
                running = false;  
                break;
            }else if (checkTie(space)) {
                board(space);
                running = false; 
                break;
            }
            computerMove(space, computer, player);  
            board(space);
            if (checkWinner(space, player, computer)) {  
                running = false;  
                break;
            }else if (checkTie(space)) {
                board(space);
                running = false;
                break;
            }
        }

        char choice;
        cout << "\n\nDo You Want To Play Again? (Y/N): ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y'){
            playAgain = true;
            continue;
        }else{
            break;
        };

    } while(playAgain);
    cout << "\nDont Forget To Kiss Akkawi!\n" << endl;
    return 0;
}

void board(char *space){
    cout << " " << space[0] << " | " << space[1] << " | " << space[2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << space[3] << " | " << space[4] << " | " << space[5] << endl;
    cout << "---|---|---" << endl;
    cout << " " << space[6] << " | " << space[7] << " | " << space[8] << endl;
}
void playerMove(char *space, char player){
    int move;
    do{
        cout << "\nEnter Your Move (1-9): ";
        cin >> move;
        cout << '\n';
        move--;
        if(space[move] == ' '){
            space[move] = player;
            break;
        }
    }while(move < 0 || move > 8 || space[move] != ' '); 
}
void computerMove(char *space, char computer, char player){

    for(int i = 0; i < 9; i++){
        if(space[i] == ' '){
            space[i] = computer;

            if(checkWinner(space, computer, player)) return;

            space[i] = player;
            if(checkWinner(space, player, computer)){
                space[i] = computer;
                return;
            }
            space[i] = ' ';
        }
    }

        while(true){
        int move = rand() % 9;
        if(space[move] == ' '){
            space[move] = computer;
            break;
        }
    }
}
bool checkWinner(char *space, char player, char computer) {
    int winningPatterns[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},  // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},  // Columns
        {0, 4, 8}, {2, 4, 6}              // Diagonals
    };
    for (int i = 0; i < 8; i++) {
        const int *pattern = winningPatterns[i];
        if (space[pattern[0]] != ' ' && space[pattern[0]] == space[pattern[1]] && space[pattern[1]] == space[pattern[2]]) {
            cout << (space[pattern[0]] == player ? "\nAllah Akbar, You Win!\n" : "\nPathetic, You lose!\n") << endl;
            return true;
        }
    }
    return false;
}
bool checkTie(char *space){
    for(int i = 0; i < 9; i++){
        if(space[i] == ' '){
            return false;
        }
    }
    cout << "\nIt's a Tie!\n";
    return true;
}