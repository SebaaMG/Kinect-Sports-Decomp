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
extern int fn_826543B0();
extern int fn_82A1BB18();


undefined8 fn_82646F48(int *param_1)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  int in_r13;
  longlong lVar5;
  
  iVar4 = *param_1;
  lVar5 = 4;
  do {
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((*(byte *)(iVar4 + 0x2abd) & 2) == 0) {
    iVar1 = *(int *)(*(int *)(in_r13 + 0x100) + 0x58);
    if (param_1[2] != **(int **)(iVar4 + 0x2a90)) {
      iVar3 = **(int **)(iVar4 + 0x2a90);
      param_1[3] = iVar1;
      param_1[2] = iVar3;
    }
    iVar3 = fn_82A1BB18();
    if ((*(int *)(iVar4 + 0x2a88) == iVar3) && (*(int *)(iVar4 + 0x2b00) != 0)) {
      param_1[3] = iVar1;
    }
    if (4999 < (uint)(iVar1 - param_1[3])) {
      iVar4 = fn_826543B0(iVar4);
      if (iVar4 != 0) goto LAB_82647014;
      param_1[3] = iVar1;
    }
    uVar2 = 1;
  }
  else {
LAB_82647014:
    uVar2 = 0;
  }
  return uVar2;
}

