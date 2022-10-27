#include "iostream"

using namespace std; 

int a = 0; // Biens Global a
 
void Display();
void callStaticV() {
    static int bienA = 1000;
    bienA++;
    cout << "bienA: " << bienA;
}
 
int main()
{
    for(int j = 0; j < 5; j++){
        callStaticV();
        cout << endl;
    }

}
