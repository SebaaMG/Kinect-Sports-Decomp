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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82298280();
extern int fn_8249BC10();
extern int fn_8266DA38();
extern int fn_8266DAA0();
extern int fn_8266EC60();
extern int fn_82672C20();
extern int fn_828AAF70();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8249B9D0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != param_2) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    else if (iVar1 == 2) {
      if (*(int *)(param_1 + 0xb0) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 0;
        fn_82298280();
        uStack_50 = 0;
        uStack_4c = 0;
        puVar2 = *(undefined4 **)(param_1 + 0xb0);
        fn_82273CD8(&uStack_50,2);
        uStack_48 = 0;
        fn_82672C20(*puVar2,0xffffffff821aa9d4,&uStack_50,1);
        fn_82273C88(&uStack_50);
      }
      if (*(int *)(param_1 + 0x74) != 0) {
        uVar6 = fn_8266EC60();
        fn_8266DAA0(uVar6,0);
        uVar6 = fn_8266EC60();
        fn_8266DA38(uVar6,0);
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    if (param_2 == 1) {
      if (*(int *)(param_1 + 0x70) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 0xd54);
        iVar4 = *(int *)(iVar1 + 0x14);
        if ((iVar4 != 0) && (*(int *)(iVar1 + 0x18) == 0)) {
          piVar5 = *(int **)(iVar4 + 0x18);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x7c))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
      fn_8249BC10(param_1);
    }
    else if (param_2 == 2) {
      if ((*(int *)(param_1 + 0x88) == 0) &&
         (puVar2 = *(undefined4 **)(param_1 + 0xb0), puVar2[0x17] == 0)) {
        uStack_40 = 0;
        uStack_3c = 0;
        fn_82273CD8(&uStack_40,2);
        uStack_38 = 1;
        fn_82672C20(*puVar2,0xffffffff821aa9d4,&uStack_40,1);
        fn_82273C88(&uStack_40);
      }
      if (*(int *)(*(int *)(param_1 + 0x110) + 0x24) != 0) {
        uVar6 = fn_8266EC60();
        fn_8266DAA0(uVar6,1);
        uVar6 = fn_8266EC60();
        fn_8266DA38(uVar6,1);
        *(undefined4 *)(param_1 + 0x74) = 1;
      }
    }
    else if ((param_2 == 3) && (*(int *)(param_1 + 0x70) != 0)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 0xd54);
      iVar4 = *(int *)(iVar1 + 0x14);
      if ((iVar4 != 0) && (*(int *)(iVar1 + 0x18) == 0)) {
        if (*(int **)(iVar4 + 0x18) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + 0x18) + 0x78))();
        }
        if (*(int **)(iVar4 + 0x3f4) != (int *)0x0) {
          lVar7 = (**(code **)(**(int **)(iVar4 + 0x3f4) + 8))();
          fn_828AAF70(lVar7 + 0x150,1);
        }
      }
    }
  }
  return;
}

