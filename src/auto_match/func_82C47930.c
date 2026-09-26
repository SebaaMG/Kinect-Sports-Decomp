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
extern int fn_82F691F0();


undefined8 fn_82C47930(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2e0);
    if (*(int *)(iVar1 + 0x10) == 0) {
      *(undefined4 *)(iVar1 + 0xe8c) = 0;
      *(undefined2 *)(iVar1 + 0xe9c) = 0;
      *(undefined4 *)(iVar1 + 0x3d00) = 0;
      if (*(int *)(iVar1 + 0x3cb0) == 6) {
        *(undefined8 *)(iVar1 + 0xe30) = 0;
        *(undefined4 *)(iVar1 + 0x120) = 0;
        *(undefined4 *)(iVar1 + 0xd54) = 0xfffffffd;
        *(undefined4 *)(iVar1 + 0xd58) = 0;
        *(undefined4 *)(iVar1 + 0xd68) = 0;
        *(undefined4 *)(iVar1 + 0x3a04) = 1;
        *(undefined4 *)(iVar1 + 0xd5c) = 0;
        *(undefined4 *)(iVar1 + 0xd6c) = 0;
        *(undefined4 *)(iVar1 + 0xda4) = 0;
        if (*(int *)(iVar1 + 0x3c04) != 0) {
          lVar4 = ((ulonglong)*(uint *)(iVar1 + 0x4fb0) & 0x7fffffff) * 2;
          lVar3 = (ulonglong)*(uint *)(iVar1 + 0xbc) + lVar4;
          lVar5 = ((ulonglong)*(uint *)(iVar1 + 0x4fb4) & 0x7fffffff) * 2;
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(iVar1 + 0xec0),0,
                       (longlong)(int)lVar3 * (longlong)(*(int *)(iVar1 + 0xb4) + (int)lVar4),lVar3,
                       *(uint *)(iVar1 + 0x4fb4),(ulonglong)*(uint *)(iVar1 + 0xc0) + lVar5,
                       (ulonglong)*(uint *)(iVar1 + 200) + lVar5);
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffffffffffc;
    }
  }
  return uVar2;
}

