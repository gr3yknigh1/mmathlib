#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>


typedef struct LinkedListItem {
  struct LinkedListItem* next;
  void*  data;
  size_t size;
} LinkedListItem;


typedef struct LinkedList {
  LinkedListItem* root;
  int   length;
} LinkedList;


LinkedList CreateListEmpty();
LinkedListItem* GetItem    (LinkedList* list, int index);
LinkedListItem* GetLastItem(LinkedList* list);


void PushItem  (LinkedList* list, void* data, size_t size);
void SetItem   (LinkedList* list, int index, void* data);
void RemoveItem(LinkedList* list, int index);

void PrintList(LinkedList* list, char* format(void* pointer), char* sep);


#endif // LINKED_LIST_H
