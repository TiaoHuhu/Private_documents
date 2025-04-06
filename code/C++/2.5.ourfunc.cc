//outfunc.cc -- defining your own function
#include "head.h"
void simon(int);

int main(){
    using namespace std;
    simon(3);
    cout << "pick an integer:";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n){
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
}
