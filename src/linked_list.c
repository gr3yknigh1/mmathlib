#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

#include "linked_list.h"


LinkedList CreateListEmpty() {
  return (LinkedList) {
    .root = NULL,
    .length = 0,
  };
}


LinkedListItem* GetItem(LinkedList* list, int index) {
  LinkedListItem* current = list->root;
  for (int i = 0; i < list->length; i++) {
    if (i == index) {
      break;
    }
    current = current->next;
  }
  return current;
}


LinkedListItem* GetLastItem(LinkedList* list) {
  return GetItem(list, list->length - 1);
}


void SetItem(LinkedList* list, int index, void* data) {
  GetItem(list, index)->data = data;
}


void PushItem(LinkedList* list, void* data, size_t size) {
  if (list->root == NULL) {
    list->root = malloc(sizeof(LinkedListItem));
    list->root->data = data;
    list->root->size = size;
    return;
  }

  LinkedListItem* lastItem = GetLastItem(list);
  lastItem->next = malloc(sizeof(LinkedListItem));
  lastItem->next->data = data;
  lastItem->next->size = size;
  list->length++;
}


void FreeItem(LinkedListItem* item) {
  // free(item->data);
  // free(item);
}


void RemoveItem(LinkedList* list, int index) {
  if (index > (list->length - 1)) {
    return;
  }

  LinkedListItem* item;

  if (index == 0) {
    // NOTE(gr3yknigh1): If removing first item
    item = list->root;
    LinkedListItem* nextItem = GetItem(list, index + 1);
    list->root = nextItem;

  } else if (index == (list->length - 1)) {
    // NOTE(gr3yknigh1): If removing last item
    item = GetItem(list, index);
    LinkedListItem* previousItem = GetItem(list, index - 1);
    previousItem->next = NULL;

  } else {
    item = GetItem(list, index);
    LinkedListItem* previousItem = GetItem(list, index - 1);
    LinkedListItem* nextItem = GetItem(list, index + 1);
    previousItem->next = nextItem;
  }

  FreeItem(item);
  list->length--;
}


void PrintList(LinkedList* list, char* format(void* pointer), char* sep) {
  for (int i = 0; i < list->length; i++) {
    printf("%s", format(GetItem(list, i)->data));
    if (i < list->length - 1) {
      printf("%s", sep);
    }
  }
}

