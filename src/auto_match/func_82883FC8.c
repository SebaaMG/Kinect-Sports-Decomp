typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_8265CA20();
extern int fn_8287F798();
extern int fn_8287FD98();
extern int fn_82881D60();
extern int fn_82886980();
extern int fn_82887108();
extern int fn_828872C8();
extern int fn_82887890();
extern int fn_82888170();
extern int fn_8288E4B0();
extern int fn_8289F160();
extern int fn_828A24F8();
extern int fn_828EA790();
extern int fn_82CE06D8();
extern int fn_82CE06F8();
extern unsigned int *lbl_83212A04;


void fn_82883FC8(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int *piStack_50;
  int *apiStack_4c [19];
  
  piStack_50 = (int *)param_1;
  fn_8289F160(apiStack_4c,0xffffffff83212a00,&piStack_50);
  if (apiStack_4c[0] != lbl_83212A04) {
    uVar3 = fn_8287FD98();
    fn_8287F798(uVar3,param_1);
    iVar1 = apiStack_4c[0][4];
    if (*(int *)(iVar1 + 0xb4) != 0) {
      fn_82886980();
      *(undefined4 *)(iVar1 + 0xb4) = 0;
    }
    piVar5 = (int *)(iVar1 + 0x7c);
    iVar4 = *(int *)(iVar1 + 0x7c);
    while (iVar4 != 0) {
      puVar2 = (undefined4 *)*piVar5;
      if (puVar2[0xc] != 0) {
        *(undefined4 *)(puVar2[0xc] + 0x34) = puVar2[0xd];
      }
      if (puVar2[0xd] != 0) {
        *(undefined4 *)(puVar2[0xd] + 0x30) = puVar2[0xc];
      }
      if ((undefined4 *)*piVar5 == puVar2) {
        *piVar5 = puVar2[0xc];
      }
      if (*(undefined4 **)(iVar1 + 0x80) == puVar2) {
        *(undefined4 *)(iVar1 + 0x80) = puVar2[0xd];
      }
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
      puVar2[0xb] = 0;
      fn_82887108(1);
      (**(code **)*puVar2)(puVar2,1);
      fn_82887108(0);
      iVar4 = *piVar5;
    }
    piVar5 = (int *)(iVar1 + 0x70);
    iVar4 = *(int *)(iVar1 + 0x70);
    while (iVar4 != 0) {
      puVar2 = (undefined4 *)*piVar5;
      if (puVar2[0xc] != 0) {
        *(undefined4 *)(puVar2[0xc] + 0x34) = puVar2[0xd];
      }
      if (puVar2[0xd] != 0) {
        *(undefined4 *)(puVar2[0xd] + 0x30) = puVar2[0xc];
      }
      if ((undefined4 *)*piVar5 == puVar2) {
        *piVar5 = puVar2[0xc];
      }
      if (*(undefined4 **)(iVar1 + 0x74) == puVar2) {
        *(undefined4 *)(iVar1 + 0x74) = puVar2[0xd];
      }
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) + -1;
      puVar2[0xb] = 0;
      fn_82887108(1);
      (**(code **)*puVar2)(puVar2,1);
      fn_82887108(0);
      iVar4 = *piVar5;
    }
    piVar5 = (int *)(iVar1 + 0x98);
    iVar4 = *(int *)(iVar1 + 0x98);
    while (iVar4 != 0) {
      puVar2 = (undefined4 *)*piVar5;
      if (puVar2[0xc] != 0) {
        *(undefined4 *)(puVar2[0xc] + 0x34) = puVar2[0xd];
      }
      if (puVar2[0xd] != 0) {
        *(undefined4 *)(puVar2[0xd] + 0x30) = puVar2[0xc];
      }
      if ((undefined4 *)*piVar5 == puVar2) {
        *piVar5 = puVar2[0xc];
      }
      if (*(undefined4 **)(iVar1 + 0x9c) == puVar2) {
        *(undefined4 *)(iVar1 + 0x9c) = puVar2[0xd];
      }
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      *(int *)(iVar1 + 0xa0) = *(int *)(iVar1 + 0xa0) + -1;
      puVar2[0xb] = 0;
      (**(code **)*puVar2)(puVar2,1);
      iVar4 = *piVar5;
    }
    piVar5 = (int *)(iVar1 + 0xa4);
    iVar4 = *(int *)(iVar1 + 0xa4);
    while (iVar4 != 0) {
      puVar2 = (undefined4 *)*piVar5;
      if (puVar2[0xc] != 0) {
        *(undefined4 *)(puVar2[0xc] + 0x34) = puVar2[0xd];
      }
      if (puVar2[0xd] != 0) {
        *(undefined4 *)(puVar2[0xd] + 0x30) = puVar2[0xc];
      }
      if ((undefined4 *)*piVar5 == puVar2) {
        *piVar5 = puVar2[0xc];
      }
      if (*(undefined4 **)(iVar1 + 0xa8) == puVar2) {
        *(undefined4 *)(iVar1 + 0xa8) = puVar2[0xd];
      }
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(int *)(iVar1 + 0xac) = *(int *)(iVar1 + 0xac) + -1;
      puVar2[0xb] = 0;
      (**(code **)*puVar2)(puVar2,1);
      iVar4 = *piVar5;
    }
    piStack_50 = (int *)**(int **)(iVar1 + 0x8c);
    if (piStack_50 != *(int **)(iVar1 + 0x8c)) {
      do {
        puVar2 = (undefined4 *)piStack_50[4];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        fn_828EA790(&piStack_50);
      } while (piStack_50 != *(int **)(iVar1 + 0x8c));
    }
    fn_828A24F8(iVar1 + 0x88,*(undefined4 *)(*(int *)(iVar1 + 0x8c) + 4));
    *(int *)(*(int *)(iVar1 + 0x8c) + 4) = *(int *)(iVar1 + 0x8c);
    *(undefined4 *)*(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(iVar1 + 0x8c);
    *(int *)(*(int *)(iVar1 + 0x8c) + 8) = *(int *)(iVar1 + 0x8c);
    *(undefined4 *)(iVar1 + 0x90) = 0;
    fn_82888170(param_1,2,0x20,1);
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
    fn_82881D60(param_1);
    if ((*(int *)(iVar1 + 0x28) != 0) && (iVar4 = fn_82CE06F8(*(int *)(iVar1 + 0x28)), iVar4 != 3))
    {
      fn_82CE06D8(*(undefined4 *)(iVar1 + 0x28));
    }
    if (*(char *)(iVar1 + 6) != '\0') {
      puVar2 = *(undefined4 **)(iVar1 + 0x20);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined4 *)(iVar1 + 0x20) = 0;
      *(undefined1 *)(iVar1 + 6) = 0;
    }
    piStack_50 = (int *)*lbl_83212A04;
    piVar5 = lbl_83212A04;
    if (piStack_50 != lbl_83212A04) {
      do {
        iVar1 = piStack_50[4];
        if ((iVar1 != 0) && (*(int **)(iVar1 + 8) == (int *)param_1)) {
          *(undefined4 *)(iVar1 + 8) = 0xffffffff;
          piVar5 = lbl_83212A04;
        }
        fn_828EA790(&piStack_50);
      } while (piStack_50 != piVar5);
    }
    fn_8265CA20(*(undefined4 *)(apiStack_4c[0][4] + 0xb8));
    *(undefined4 *)(apiStack_4c[0][4] + 0xb8) = 0;
    iVar1 = apiStack_4c[0][4];
    if (iVar1 != 0) {
      fn_82887890(apiStack_4c,iVar1 + 0x88,**(undefined4 **)(iVar1 + 0x8c));
      fn_8265CA20(*(undefined4 *)(iVar1 + 0x8c));
      if (*(int *)(iVar1 + 0x60) != 0) {
        fn_8265CA20();
      }
      *(undefined4 *)(iVar1 + 0x68) = 0;
      *(undefined4 *)(iVar1 + 0x60) = 0;
      *(undefined4 *)(iVar1 + 100) = 0;
      fn_8288E4B0(apiStack_4c,iVar1 + 0x10,**(undefined4 **)(iVar1 + 0x14));
      fn_8265CA20(*(undefined4 *)(iVar1 + 0x14));
      fn_8265CA20(iVar1);
    }
    apiStack_4c[0][4] = 0;
    fn_828872C8(apiStack_4c,0xffffffff83212a00,apiStack_4c[0]);
  }
  return;
}

