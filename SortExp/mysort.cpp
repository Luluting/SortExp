#include "mysort.h"
#include <iostream>


//mySort

//��ȡ����
int getLen(int* arr) {
	int size = 0;
	while (arr[size] != 0xcccccccc) {
		size++;
	}
	return size;
}

//��������
int insertSort(int* arr) {

	int len = getLen(arr);
	
	for (int i = 1; i < len; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		};
		arr[j + 1] = key;
	}
	
	return true;
}

//ϣ������
int ShellSort(int* arr) {

	int len = getLen(arr);
	int gap = len / 2;

	while (gap > 0) {
		for (int i = gap; i < len; i++) {
			int key = arr[i];
			int preIndex = i - gap;
			while (preIndex >= 0 && arr[preIndex] > key) {
				arr[preIndex + gap] = arr[preIndex];
				preIndex -= gap;
			}
			arr[preIndex + gap] = key;
		}
		gap /= 2;
	}
	
	return true;
}

//ð������
int bubbleSort(int* arr) {

	int len = getLen(arr);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return true;
}

//��������
int selectionSort(int* arr) {
	
	int len = getLen(arr);

	for (int i = 0; i < len; i++) {
		int minIndex = i;
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j + 1] < arr[j]) {
				minIndex = j + 1;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
	return true;
}