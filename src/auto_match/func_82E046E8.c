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
extern int fn_82CFBC28();


int fn_82E046E8(int param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((param_2 & 0xffffffff) != 0) && (iVar4 = 0, 0 < *(int *)(param_1 + 0xc))) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(param_1 + 8);
      uVar2 = *(uint *)(iVar1 + iVar5);
      if (((uVar2 & 0xfffffffe) != 0) &&
         (iVar3 = fn_82CFBC28(uVar2 & 0xfffffffe,param_2), iVar3 == 0)) {
        return iVar1 + iVar5;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  return 0;
}

