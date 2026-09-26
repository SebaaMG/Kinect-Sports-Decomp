typedef struct Node Node;
struct Node {
    Node *previous;
    Node *next;
    Node *left;
    Node *right;
};

void fn_82237EF8(Node *param_1, Node **param_2)
{
    Node *previous = param_1->previous;
    Node *next = param_1->next;
    Node *left = previous->left;
    Node *next_next = next->right;

    param_1->next = next_next;
    if (next_next != 0) {
        next_next->previous = param_1;
    }
    next->right = param_1;
    param_1->previous = next;
    next->previous = previous;

    if (*param_2 == param_1) {
        *param_2 = next;
        return;
    }
    if (param_1 == left) {
        previous->left = next;
        return;
    }
    previous->right = next;
}
