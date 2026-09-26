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
extern int fn_82807DA8();


void fn_82807EC8(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  int aiStack_30 [6];
  
  iVar1 = *(int *)(param_2 + 0x10);
  uVar4 = 0;
  piVar3 = aiStack_30;
  lVar5 = 4;
  do {
    if ((param_4 & 0xff & 1 << (uVar4 & 0x3f)) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((param_3 - (int)aiStack_30) + (int)piVar3) *
              (uint)*(ushort *)(param_2 + 0x1c) + (uint)*(ushort *)(param_2 + 0x1a) +
              (uint)*(ushort *)(param_2 + 0x18) + iVar1;
    }
    *piVar3 = iVar2;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fn_82807DA8(param_1,aiStack_30);
  return;
}

