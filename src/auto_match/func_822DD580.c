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


void fn_822DD580(int param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = (param_2 + 1) * 2;
  iVar3 = param_2;
  if (iVar2 < param_3) {
    iVar1 = param_2;
    do {
      iVar3 = iVar2;
      if (*(char *)(iVar2 + param_1) < *(char *)(param_1 + -1 + iVar2)) {
        iVar3 = iVar2 + -1;
      }
      *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(iVar3 + param_1);
      iVar2 = (iVar3 + 1) * 2;
      iVar1 = iVar3;
    } while (iVar2 < param_3);
  }
  if (iVar2 == param_3) {
    *(undefined1 *)(param_1 + iVar3) = *(undefined1 *)(param_1 + param_3 + -1);
    iVar3 = param_3 + -1;
  }
  uVar4 = iVar3 - 1;
  bVar5 = (int)uVar4 < 0 && (uVar4 & 1) != 0;
  while ((iVar2 = ((int)uVar4 >> 1) + (uint)bVar5, param_2 < iVar3 &&
         (*(char *)(iVar2 + param_1) < *param_4))) {
    *(char *)(iVar3 + param_1) = *(char *)(iVar2 + param_1);
    uVar4 = iVar2 - 1;
    bVar5 = (int)uVar4 < 0 && (uVar4 & 1) != 0;
    iVar3 = iVar2;
  }
  *(char *)(iVar3 + param_1) = *param_4;
  return;
}

