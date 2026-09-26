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
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_40;


void fn_8227B668(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  double dVar3;
  undefined8 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double dStack_28;
  
  iVar2 = 8;
  *(undefined4 *)(param_1 + 0xa84) = 8;
  if (param_3 < 2) {
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0xa84) = 0;
      goto LAB_8227b76c;
    }
    if (param_2 == 2) {
      iVar2 = 1;
    }
    else if (param_2 == 3) {
      iVar2 = 6;
    }
    else if (param_2 == 4) {
      iVar2 = 7;
    }
    else if ((param_2 < 5) || (8 < param_2)) goto LAB_8227b76c;
  }
  else if (param_3 == 2) {
    if (param_2 == 2) {
      iVar2 = 10;
    }
    else if (param_2 == 3) {
      iVar2 = 0xb;
    }
    else {
      if (param_2 != 4) goto LAB_8227b76c;
      iVar2 = 0xc;
    }
  }
  else if (param_3 < 4) {
    if (param_2 == 3) {
      iVar2 = 0xd;
    }
    else {
      if (param_2 != 4) goto LAB_8227b76c;
      iVar2 = 0xe;
    }
  }
  else if (param_3 == 4) {
    iVar2 = ((uint)LZCOUNT(*(undefined4 *)(param_1 + 0xa6c)) >> 5 ^ 1) + 2;
  }
  else {
    if (5 < param_3) goto LAB_8227b76c;
    iVar2 = 9;
  }
  *(int *)(param_1 + 0xa84) = iVar2;
LAB_8227b76c:
  *(undefined4 *)(param_1 + 0xa48) = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_40 = (longlong)*(int *)(param_1 + 0xa84);
  *(undefined4 *)(param_1 + 0xa4c) = lbl_821CC160;
  dVar3 = (double)uStack_40;
  fn_82273CD8(&uStack_30,3);
  dStack_28 = dVar3;
  puVar1 = (undefined4 *)fn_82279C58(&uStack_40,param_1);
  fn_82672C20(*puVar1,0xffffffff821a84ac,&uStack_30,1);
  if ((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) != 0) {
    fn_822315A0();
  }
  fn_82273C88(&uStack_30);
  return;
}

