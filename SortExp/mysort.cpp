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
