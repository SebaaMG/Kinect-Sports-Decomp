extern unsigned int lbl_821AE068;
extern void fn_82D81240(unsigned char *);
extern void fn_82CE4118(unsigned int *);
typedef struct { unsigned int a; unsigned int b; } Child;
typedef struct { unsigned int v; unsigned int unused; Child *child; } Obj;

void fn_822E8378(Obj *p) {
 unsigned char s[16];
 p->v=(unsigned int)&lbl_821AE068;
 if(p->child!=0 && p->child->b!=0){fn_82D81240(s);fn_82CE4118((unsigned int *)p->child);p->child=0;}
}
