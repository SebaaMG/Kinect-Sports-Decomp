// Kinect Sports retail 4D5308C9, function 0x823D5BA8 (100 bytes).
// Walks the intrusive list rooted at param_1+4, running the destructor on each
// of the two children and clearing their counters until the sentinel pointer
// stored at param_1+4 is reached again.
typedef struct Child {
    unsigned char prefix[0x10];
    int value;
    int pad;
} Child;

typedef struct Node {
    unsigned char prefix[0x18];
    Child child[2];
} Node;

extern void fn_82359C18(Child *value);
extern void fn_822509A0(Node **value);

#define ENDP ((Node * volatile *)((char *)param_1 + 4))

void fn_823D5BA8(void *param_1)
{
    Node *node = *ENDP;

    if (node != *ENDP) {
        do {
            Child *c = &node->child[0];
            fn_82359C18(c);
            c->value = 0;
            fn_82359C18(c + 1);
            c[1].value = 0;
            fn_822509A0(&node);
        } while (node != *ENDP);
    }
}
