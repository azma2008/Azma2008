//Name:Azma Mubasshir Kagdi //
//PRN:2503033111372003
#include <stdio.h>
void printArray(int a[], int size) {
int i;
for (i = 0; i < size; i++) {
printf("%d\t", a[i]);
}
printf("\n");
}
int main() {
int arr[5] = {2, 3, 5, 6, 8};
printArray(arr, 5);
return 0;
}