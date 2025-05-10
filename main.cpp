#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <limits>

using namespace std;

// Function declarations
void setColor(int);
void clearScreen();
void showMenu();
void waitForKeypress();
void saveToFile(const double[][8], int, int, const string&);
void loadFromFile(double[][8], int, int, const string&);

// Color constants
enum Colors {
    BLUE = 9,
    GREEN = 10,
    CYAN = 11,
    RED = 12,
    MAGENTA = 13,
    YELLOW = 14,
    WHITE = 15
};

void displayHeader() {
    setColor(CYAN);
    cout << "\n=== Matrix Operations Program ===\n";
    cout << "Author: Adrian Lesniak\n\n";
    setColor(WHITE);
    cout << "Program Features:\n";
    cout << "1. Generate random matrices\n";
    cout << "2. Display matrices in formatted way\n";
    cout << "3. Calculate arithmetic mean below main diagonal\n";
    cout << "4. Calculate column sums\n";
    cout << "5. Find maximum values in rows\n\n";
}

void wpisanie_tablicy(double A[][8], int n, int m)
{
    srand(time(NULL));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            A[i][j] = double(rand() % 51) / 10;
        }
    }
}

void wypisz(double A[][8], int n, int m)
{
    setColor(GREEN);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << setw(7) << fixed << setprecision(1) << A[i][j];
        }
        cout << endl;
    }
    cout << endl;
    setColor(WHITE);
}

float srednia_aryt(double A[][8])
{
    float suma = 0;
    int ilosc = 0;

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(i>j){
                suma += A[i][j];
                ilosc++;
            }
        }
    }
    return suma/ilosc;
}

void tabela_C(double C[], double B[][8])
{

    for(int i=0; i<8; i++)
    {
        float suma = 0;
        for(int j=0; j<5; j++)
        {
            suma += B[j][i];
        }
        C[i] = suma;
    }
}

void tabela_D(double D[], double B[][8])
{

    for(int i=0; i<5; i++)
    {
        double max = 0.0;
        for(int j=0; j<8; j++)
        {
            if( B[i][j] > max )
            {
                max = B[i][j];
            }
        }
        D[i] = max;
    }
}

void saveToFile(const double A[][8], int n, int m, const string& filename) {
    ofstream file(filename);
    if (!file) {
        setColor(RED);
        cout << "Error: Could not open file for writing!" << endl;
        setColor(WHITE);
        return;
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            file << A[i][j] << " ";
        }
        file << endl;
    }
    file.close();
    
    setColor(GREEN);
    cout << "Data saved successfully to " << filename << endl;
    setColor(WHITE);
}

void loadFromFile(double A[][8], int n, int m, const string& filename) {
    ifstream file(filename);
    if (!file) {
        setColor(RED);
        cout << "Error: Could not open file for reading!" << endl;
        setColor(WHITE);
        return;
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (!(file >> A[i][j])) {
                setColor(RED);
                cout << "Error: Invalid data in file!" << endl;
                setColor(WHITE);
                return;
            }
        }
    }
    
    setColor(GREEN);
    cout << "Data loaded successfully from " << filename << endl;
    setColor(WHITE);
}

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void clearScreen() {
    system("cls");
}

void waitForKeypress() {
    cout << "\nPress any key to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

int main()
{
    double A[8][8], B[5][8];
    double C[8], D[5];
    char choice;
    
    do {
        clearScreen();
        displayHeader();
        setColor(YELLOW);
        cout << "\nMenu Options:\n";
        cout << "1. Generate new matrices\n";
        cout << "2. Display matrices\n";
        cout << "3. Calculate arithmetic mean\n";
        cout << "4. Calculate column sums (Table C)\n";
        cout << "5. Find row maximums (Table D)\n";
        cout << "6. Save matrices to file\n";
        cout << "7. Load matrices from file\n";
        cout << "0. Exit\n";
        setColor(WHITE);
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1':
                wpisanie_tablicy(A, 8, 8);
                wpisanie_tablicy(B, 5, 8);
                cout << "Matrices generated successfully!\n";
                break;
                
            case '2':
                setColor(CYAN);
                cout << "\nMatrix A:\n";
                setColor(WHITE);
                wypisz(A, 8, 8);
                setColor(CYAN);
                cout << "Matrix B:\n";
                setColor(WHITE);
                wypisz(B, 5, 8);
                break;
                
            case '3':
                setColor(MAGENTA);
                cout << "\nArithmetic mean below main diagonal: " 
                     << srednia_aryt(A) << endl;
                setColor(WHITE);
                break;
                
            case '4':
                tabela_C(C, B);
                setColor(YELLOW);
                cout << "\nTable C (Column sums):\n";
                setColor(WHITE);
                for(int i=0; i<8; i++)
                    cout << setw(7) << fixed << setprecision(1) << C[i];
                cout << endl;
                break;
                
            case '5':
                tabela_D(D, B);
                setColor(YELLOW);
                cout << "\nTable D (Row maximums):\n";
                setColor(WHITE);
                for(int i=0; i<5; i++)
                    cout << setw(7) << fixed << setprecision(1) << D[i];
                cout << endl;
                break;
                
            case '6':
                saveToFile(A, 8, 8, "matrix_A.txt");
                saveToFile(B, 5, 8, "matrix_B.txt");
                break;
                
            case '7':
                loadFromFile(A, 8, 8, "matrix_A.txt");
                loadFromFile(B, 5, 8, "matrix_B.txt");
                break;
                
            case '0':
                setColor(CYAN);
                cout << "\nThank you for using the program!\n";
                setColor(WHITE);
                return 0;
                
            default:
                setColor(RED);
                cout << "\nInvalid choice! Please try again.\n";
                setColor(WHITE);
        }
        
        waitForKeypress();
    } while (true);

    return 0;
}
