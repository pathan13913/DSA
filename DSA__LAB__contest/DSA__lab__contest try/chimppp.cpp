#include <iostream>
using namespace std;

int main() {
    int N; 
    cin >> N;
    int ladyChimps[N];

    for (int i = 0; i < N; i++) {
        cin >> ladyChimps[i];
    }

    int Q; 
    cin >> Q;
    int luchuHeights[Q];

  
    for (int i = 0; i < Q; i++) {
        cin >> luchuHeights[i];
    }

   
    for (int i = 0; i < Q; i++) {
        int luchuHeight = luchuHeights[i];
        int shorterHeight = -1; 
        int tallerHeight = -1;  
        
        for (int j = 0; j < N; j++) {
            if (ladyChimps[j] < luchuHeight) {
                shorterHeight = ladyChimps[j]; // Update shorter height
            } else if (ladyChimps[j] > luchuHeight && tallerHeight == -1) {
                tallerHeight = ladyChimps[j]; // Update taller height and stop
                break; // No need to check further as array is sorted
            }
        }

        // Output the results
        if (shorterHeight == -1)
            cout << "X ";
        else
            cout << shorterHeight << " ";

        if (tallerHeight == -1)
            cout << "X" << endl;
        else
            cout << tallerHeight << endl;
    }

    return 0;
}
