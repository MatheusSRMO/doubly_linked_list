
#include <stdio.h>

#include "dl_list.h"

void print_int(data_type data) {
    printf("%d", data);
}

int main() {
    
    DlList* dl_list = dl_list_contruct();

    dl_list_push_front(dl_list, 3);
    dl_list_push_front(dl_list, 2);
    dl_list_push_back(dl_list, 4);

    dl_list_pop_front(dl_list);
    dl_list_pop_back(dl_list);

    dl_list_print(dl_list, print_int);

    dl_list_destruct(dl_list);
    return 0;
}