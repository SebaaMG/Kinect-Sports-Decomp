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
extern unsigned int *auStack_1030;
extern int fn_82F68CC0();


void fn_82F0F630(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_1030 [4144];
  
  uVar1 = *(uint *)(param_1 + 0x31c);
  iVar2 = 0;
  lVar3 = (longlong)(int)*(uint *)(param_2 + 0xc0) * (longlong)(int)uVar1 +
          (ulonglong)*(uint *)(param_1 + 0x1abc);
  if (0 < (longlong)((ulonglong)*(uint *)(param_2 + 0xc4) - (ulonglong)*(uint *)(param_2 + 0xc0))) {
    do {
      (**(code **)(param_1 + 0x52a0))(param_1,lVar3,auStack_1030,*(undefined4 *)(param_1 + 0x31c));
      fn_82F68CC0(lVar3,auStack_1030,(ulonglong)uVar1);
      iVar2 = iVar2 + 1;
      lVar3 = (ulonglong)uVar1 + lVar3;
    } while (iVar2 < *(int *)(param_2 + 0xc4) - *(int *)(param_2 + 0xc0));
  }
  return;
}

