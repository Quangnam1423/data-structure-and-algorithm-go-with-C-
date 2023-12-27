#include <bits/stdc++.h>
using namespace std;

class MaxHeap {
	// A pointer pointing to the elements
	// in the array in the heap.
	int* arr;

	// Maximum possible size of
	// the Max Heap.
	int maxSize;

	// Number of elements in the
	// Max heap currently.
	int heapSize;

	public:
		MaxHeap(int maxSize);
		void MaxHeapify(int);
		int parent(int i)
		{
			return (i - 1) / 2;
		}
		int lChild(int i)
		{
			return (2 * i + 1);
		}

		int rChild(int i)
		{
			return (2 * i + 2);
		}
		int removeMax();
		void increaseKey(int i, int newVal);
		int getMax()
		{
			return this->arr[0];
		}

		int curSize()
		{
			return heapSize;
		}
		void deleteKey(int i);
		void insertKey(int x);
};
MaxHeap::MaxHeap(int totSize)
{
	heapSize = 0;
	maxSize = totSize;
	arr = new int[totSize];
}

// Inserting a new key 'x'.
void MaxHeap::insertKey(int x)
{
	// To check whether the key
	// can be inserted or not.
	if (heapSize == maxSize) {
		cout << "\nOverflow: Could not insertKey\n";
		return;
	}

	// The new key is initially
	// inserted at the end.
	heapSize++;
	int i = heapSize - 1;
	arr[i] = x;

	// The max heap property is checked
	// and if violation occurs,
	// it is restored.
	while (i != 0 && arr[parent(i)] < arr[i]) {
		swap(arr[i], arr[parent(i)]);
		i = parent(i);
	}
}

// Increases value of key at
// index 'i' to new_val.
void MaxHeap::increaseKey(int i, int newVal)
{
	arr[i] = newVal;
	while (i != 0 && arr[parent(i)] < arr[i]) {
		swap(arr[i], arr[parent(i)]);
		i = parent(i);
	}
}

// To remove the root node which contains
// the maximum element of the Max Heap.
int MaxHeap::removeMax()
{
	if (heapSize <= 0)
		return INT_MIN;
	if (heapSize == 1) {
		heapSize--;
		return arr[0];
	}
	int root = arr[0];
	arr[0] = arr[heapSize - 1];
	heapSize--;
	MaxHeapify(0);
	return root;
}

// In order to delete a key
// at a given index i.
void MaxHeap::deleteKey(int i)
{
	// It increases the value of the key
	// to infinity and then removes
	// the maximum value.
	increaseKey(i, INT_MAX);
	removeMax();
}

// To heapify the subtree this method
// is called recursively
void MaxHeap::MaxHeapify(int i)
{
	int l = lChild(i);
	int r = rChild(i);
	int largest = i;
	if (l < heapSize && arr[l] > arr[i])
		largest = l;
	if (r < heapSize && arr[r] > arr[largest])
		largest = r;
	if (largest != i) {
		swap(arr[i], arr[largest]);
		MaxHeapify(largest);
	}
}

int main()
{
	MaxHeap h(15);
	cout << "Entered 6 keys:- 3, 10, 12, 8, 2, 14 \n";
	h.insertKey(3);
	h.insertKey(10);
	h.insertKey(12);
	h.insertKey(8);
	h.insertKey(2);
	h.insertKey(14);
	cout << "The current size of the heap is "
		<< h.curSize() << "\n";
	cout << "The current maximum element is " << h.getMax()
		<< "\n";
	h.deleteKey(2);
	cout << "The current size of the heap is "
		<< h.curSize() << "\n";
	h.insertKey(15);
	h.insertKey(5);
	cout << "The current size of the heap is "
		<< h.curSize() << "\n";
	cout << "The current maximum element is " << h.getMax()
		<< "\n";

	return 0;
}
