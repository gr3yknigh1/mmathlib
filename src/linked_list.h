#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include "types.h"

typedef struct LinkedListItem {
  struct LinkedListItem* next;
  void*  data;
  size_t size;
} LinkedListItem;


typedef struct LinkedList {
  LinkedListItem* root;
  uint length;
} LinkedList;


LinkedList CreateListEmpty();
LinkedListItem* GetItem    (LinkedList* list, uint index);
LinkedListItem* GetLastItem(LinkedList* list);


void PushItem  (LinkedList* list, void* data, size_t size);
void SetItem   (LinkedList* list, uint index, void* data);
void RemoveItem(LinkedList* list, uint index);

void PrintList(LinkedList* list, char* format(void* pointer), char* separator);


#endif // LINKED_LIST_H
