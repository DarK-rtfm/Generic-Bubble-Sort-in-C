#include <stdio.h>
#include <string.h>


//Bubble Sort
void sort(void * arr, size_t data_size, size_t elem_size, int(*compare)(void * x, void * y)){
    char* arr_cptr = arr;
    size_t length = data_size/elem_size;
    for(size_t i = 0; i<length; i++){
        for(size_t j = 0; j<length-1; j++){
            if(compare(arr_cptr + elem_size*j, arr_cptr + elem_size * (j+1)) > 0){
                char temp[elem_size];
                memcpy(temp,arr_cptr + elem_size*j,elem_size);
                memcpy(arr_cptr + elem_size*j,arr_cptr + elem_size * (j+1), elem_size);
                memcpy(arr_cptr + elem_size * (j+1),temp, elem_size);
            };
        }

    }
}

int compare_int(void * x, void * y){
    int * value1 = (int*)x;
    int * value2 = (int*)y;
    return *value1 > *value2 ? 1 : -1;
}

int compare_char(void * x, void * y){
    char * p1 = (char*)x;
    char * p2 = (char*)y;
    return *p1 > *p2 ? 1 : -1;
}


int main(void) {
    int arr[] = {1, 7, 6, 5 , 22, 8, 1, 15, 74};
    sort(arr, sizeof(arr), sizeof(int), compare_int);
    for(size_t i =0; i<sizeof(arr)/sizeof(int); i++){
        printf("%d ", arr[i]);
    }


//     char c[] = {'3', '7', '5', '3'};
    char c[] = {'c', 'd', 'b','f','g','a'};
    sort(c, sizeof(c), sizeof(char), compare_char);
    for(size_t i = 0; i<sizeof(c)/sizeof(char); i++){
        printf("%c", c[i]);
    }

}
