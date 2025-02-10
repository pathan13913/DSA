#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum heap size
int heap[MAX_SIZE];  // Array to store heap elements
int size = 0;        // Current size of the heap

// Function to get the parent index
int parent(int i) {
    return (i - 1) / 2;
}

// Function to get the left child index
int leftChild(int i) {
    return (2 * i + 1);
}

// Function to get the right child index
int rightChild(int i) {
    return (2 * i + 2);
}

// Function to insert a new element into the heap
void insert(int value) {
    if (size >= MAX_SIZE) {
        cout << "Heap overflow! Cannot insert more elements.\n";
        return;
    }

    heap[size] = value; // Insert at the last position
    int current = size;
    size++;

    // Heapify up (fix the heap property)
    while (current > 0 && heap[parent(current)] < heap[current]) {
        swap(heap[current], heap[parent(current)]);
        current = parent(current);
    }
}

// Function to heapify down from a given index
void heapify(int i) {
    int largest = i;
    int left = leftChild(i);
    int right = rightChild(i);

    if (left < size && heap[left] > heap[largest])
        largest = left;
    if (right < size && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify(largest);
    }
}

// Function to remove and return the maximum element (root)
int extractMax() {
    if (size == 0) {
        cout << "Heap is empty!\n";
        return -1;
    }

    int maxVal = heap[0]; // Store the max element
    heap[0] = heap[size - 1]; // Replace root with last element
    size--; // Reduce heap size

    heapify(0); // Restore heap property

    return maxVal;
}



// Function to print the heap
void display() {
    cout << "Heap: ";
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

// Main function to test the heap
int main() {
    insert(10);
    insert(20);
    insert(15);
    insert(30);
    insert(40);

    display(); // Display the heap

    cout << "Extracted Max: " << extractMax() << endl;
    display(); // Display after removal

    return 0;
}
