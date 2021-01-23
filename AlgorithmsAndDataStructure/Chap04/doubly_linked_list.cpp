#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;

struct node{
    unsigned int key;
    struct node *next;
    struct node *prev;
};

typedef struct node * NodePointer;

// head
NodePointer nil;

NodePointer listSearch(int key){
    /* your code */
    NodePointer cur;
    cur = nil->next;
    while (cur != nil && cur->key != key) {
        cur = cur->next;
    }
    return cur;
}

void init(){
    nil = (NodePointer)malloc(sizeof(struct node));
    nil->next = nil;
    nil->prev = nil;
}

void printList(){
    NodePointer cur = nil->next;
    int isf = 0;
    while (1) {
        if (cur == nil) break;
        if (isf++ > 0) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");
}

void deleteNode(NodePointer t){
    /* your code */
    if (t == nil) return;

    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst(){
    deleteNode(nil->next);
}

void deleteLast(){
    /* your code */
    deleteNode(nil->prev);
}

void deleteKey(int key){
    /* your code */
    deleteNode(listSearch(key));
}


void insert(int key){
    NodePointer x;
    x = (NodePointer)malloc(sizeof(struct node));
    x->key = key;

    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

int main(){
    int key, n, i;
    int size = 0;
    char com[20];
    int np = 0, nd = 0;
    scanf("%d", &n);
    init();

    for ( i = 0; i < n; i++ ){
        scanf("%s%d", com, &key);
        if ( com[0] == 'i' ) {insert(key); np++; size++;}
        else if ( com[0] == 'd' ) {
            if (strlen(com) > 6) {
                if ( com[6] == 'F' ) deleteFirst();
                else if ( com[6] == 'L' ) deleteLast();
            } else {
                deleteKey(key); nd++; 
            }
            size--;
        }
    }

    printList();
    return 0;
}