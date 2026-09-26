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
extern int fn_828FA548();


void fn_828FA828(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int aiStack_20 [2];
  
  iVar1 = fn_828FA548(param_1,param_2,aiStack_20);
  if (-1 < iVar1) {
    iVar1 = *(int *)(param_1 + 8);
    aiStack_20[0] = aiStack_20[0] * 4;
    if (param_3 == 0xff) {
      *(uint *)(iVar1 + aiStack_20[0]) = *(uint *)(iVar1 + aiStack_20[0]) & 0x20;
      iVar1 = *(int *)(param_1 + 8);
      uVar2 = *(uint *)(iVar1 + aiStack_20[0]) | 1;
    }
    else {
      if (param_3 == 0x10) {
        *(uint *)(aiStack_20[0] + iVar1) = *(uint *)(aiStack_20[0] + iVar1) | 0x10;
        return;
      }
      *(uint *)(iVar1 + aiStack_20[0]) = *(uint *)(iVar1 + aiStack_20[0]) & 0xfffffff0;
      iVar1 = *(int *)(param_1 + 8);
      uVar2 = param_3 & 0xf | *(uint *)(iVar1 + aiStack_20[0]);
    }
    *(uint *)(iVar1 + aiStack_20[0]) = uVar2;
  }
  return;
}

