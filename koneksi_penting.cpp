#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//----kode di atas batas ini tidak boleh diganti atau ditambah----

map<string, string> path;

void jalur_penting(map<string, string> path){

int main() {
    int n;
    cout << "Input: n (node) = ";
    cin >> n;
    cin.ignore();

    cout << "Masukkan jalur :" << endl;


    for (int i = 0; i < n; ++i) {
        string input;
        cout << i + 1 << ". ";
        getline(cin, input);


        string start = input.substr(0, input.find(','));
        string end = input.substr(input.find(',') + 1);
        path[start] = end;
    }


    jalur_penting(path);

    return 0;
}

}

int main(){

return 0;
}
