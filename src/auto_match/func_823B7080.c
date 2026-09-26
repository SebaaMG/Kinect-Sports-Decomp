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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_20;
extern int fn_82250928();
extern int fn_823831D8();
extern int fn_823B8DA0();
extern int fn_823B9060();
extern int fn_823BAFF8();
extern int fn_825AD4B8();
extern int fn_8288B760();
extern int fn_828AAF70();
extern unsigned int lbl_821CC160;


void fn_823B7080(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar5;
  int *piVar4;
  longlong lVar3;
  uint auStack_20 [2];
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x50) = 1;
  uVar2 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x14) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(uint *)(param_1 + 0xc) != 0) {
    cVar5 = fn_8288B760((ulonglong)*(uint *)(param_1 + 0xc) - 0x68);
    if (cVar5 != '\0') {
      piVar4 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
      if (*(int *)(param_1 + 0xc) == 0) {
        piVar4 = (int *)0x0;
      }
      lVar3 = (**(code **)(*piVar4 + 8))();
      fn_823BAFF8(lVar3 + 0x9c);
      piVar4 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
      if (*(int *)(param_1 + 0xc) == 0) {
        piVar4 = (int *)0x0;
      }
      lVar3 = (**(code **)(*piVar4 + 8))();
      fn_823BAFF8(lVar3 + 0xf0);
      piVar4 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
      if (*(int *)(param_1 + 0xc) == 0) {
        piVar4 = (int *)0x0;
      }
      lVar3 = (**(code **)(*piVar4 + 0x44))();
      fn_823831D8(lVar3 + 0xa8);
    }
    piVar4 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
    if (*(int *)(param_1 + 0xc) == 0) {
      piVar4 = (int *)0x0;
    }
    lVar3 = (**(code **)(*piVar4 + 8))();
    fn_828AAF70(lVar3 + 0x144,0);
    piVar4 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
    if (*(int *)(param_1 + 0xc) == 0) {
      piVar4 = (int *)0x0;
    }
    lVar3 = (**(code **)(*piVar4 + 8))();
    fn_828AAF70(lVar3 + 0x198,0);
  }
  fn_825AD4B8(param_1 + 0x6c);
  fn_823B8DA0(param_1 + 0x94);
  puVar1 = *(uint **)(param_1 + 0x60);
  auStack_20[0] = *puVar1;
  while( true ) {
    if ((ulonglong)auStack_20[0] == ZEXT48(puVar1)) break;
    fn_823B9060((ulonglong)auStack_20[0] + 0x18);
    fn_82250928(auStack_20);
    puVar1 = *(uint **)(param_1 + 0x60);
  }
  return;
}

