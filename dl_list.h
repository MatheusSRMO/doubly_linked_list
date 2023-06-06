#ifndef DL_LIST_H
#define DL_LIST_H


#include "node.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct dl_list DlList;


DlList* dl_list_contruct();
void dl_list_push_front(DlList* dl_list, data_type data);
void dl_list_push_back(DlList* dl_list, data_type data);
data_type dl_list_pop_front(DlList* dl_list);
data_type dl_list_pop_back(DlList* dl_list);
void dl_list_print(DlList* dl_list, void (*print_fn)(data_type));
void dl_list_destruct(DlList* dl_list);

#endif // DL_LIST_H