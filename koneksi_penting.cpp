#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//----kode di atas batas ini tidak boleh diganti atau ditambah----

map<string, string> path;

void jalur_penting(map<string, string> path);

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

void jalur_penting(map<string, string> path) {
    set<string> koneksi_penting;

    for (const auto &entry : path) {
        string start = entry.first;
        string end = entry.second;


        if ((path[end] == start || koneksi_penting.find(end) != koneksi_penting.end()) && (start == "A" || start == "B" || start == "C")) {
            koneksi_penting.insert(start);
            koneksi_penting.insert(end);
        }
    }


    if (!koneksi_penting.empty()) {
        cout << "Jalur koneksi penting adalah: ";
        for (const auto &node : koneksi_penting) {
            cout << node << " ";
        }
        cout << "adalah koneksi penting" << endl;
    } else {
        cout << "Tidak ada jalur koneksi penting" << endl;
    }
}
