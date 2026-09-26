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
extern int fn_82F68CC0();
extern unsigned int lbl_820520E4;


void fn_829AAFE0(int param_1,int param_2,ulonglong param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = 4;
  iVar2 = 0;
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    bVar1 = *(byte *)(param_1 + 0x60c + iVar2);
    iVar2 = iVar2 + 1;
    if (((bVar1 < 0x29) || (0x7a < bVar1)) || ((0x5a < bVar1 && (bVar1 < 0x61)))) {
      *(undefined1 *)(iVar3 + param_2) = 0x5b;
      *(undefined *)(iVar3 + 1 + param_2) = (&lbl_820520E4)[(int)(uint)bVar1 >> 4];
      *(undefined *)(iVar3 + 2 + param_2) = (&lbl_820520E4)[bVar1 & 0xf];
      iVar3 = iVar3 + 3;
      *(undefined1 *)(iVar3 + param_2) = 0x5d;
    }
    else {
      *(byte *)(iVar3 + param_2) = bVar1;
    }
    iVar4 = iVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((param_3 & 0xffffffff) == 0) {
    *(undefined1 *)(iVar4 + param_2) = 0;
  }
  else {
    *(undefined1 *)(iVar4 + param_2) = 0x3a;
    *(undefined1 *)(iVar3 + 2 + param_2) = 0x20;
    param_2 = iVar3 + 3 + param_2;
    fn_82F68CC0(param_2,param_3,0x40);
    *(undefined1 *)(param_2 + 0x3f) = 0;
  }
  return;
}

