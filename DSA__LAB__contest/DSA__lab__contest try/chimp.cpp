#include <iostream>
#include <algorithm>
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

        // Find the tallest lady chimp shorter than Luchu
        int shorterHeight = -1; // Default value if no shorter chimp is found
        int tallerHeight = -1;  // Default value if no taller chimp is found

        // Binary search for shorter and taller chimps
        int low = 0, high = N - 1;

        // Find the tallest lady chimp shorter than Luchu
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (ladyChimps[mid] < luchuHeight) {
                shorterHeight = ladyChimps[mid];
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Reset bounds for finding the shortest lady chimp taller than Luchu
        low = 0, high = N - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (ladyChimps[mid] > luchuHeight) {
                tallerHeight = ladyChimps[mid];
                high = mid - 1;
            } else {
                low = mid + 1;
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
