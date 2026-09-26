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
extern int fn_8265C940();
extern int fn_82E871A0();
extern int fn_82F691F0();


undefined8 fn_82E88988(int param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  *(int *)(param_1 + 0x4a90) = *(int *)(param_1 + 0x564) * 8 + -8;
  uVar3 = ((ulonglong)*(uint *)(param_1 + 0x2d8) +
           ((ulonglong)*(uint *)(param_1 + 0x2d8) & 0x7fffffff) * 2 & 0xfffffff) << 4;
  lVar1 = (uVar3 & 0x7fffffff) << 1;
  if (0x7fffffff < uVar3) {
    lVar1 = -1;
  }
  iVar2 = fn_8265C940(lVar1,0x248c8000);
  *(int *)(param_1 + 0xd48) = iVar2;
  if (iVar2 != 0) {
    uVar3 = ((ulonglong)*(uint *)(param_1 + 0x2d8) +
             ((ulonglong)*(uint *)(param_1 + 0x2d8) & 0x7fffffff) * 2 & 0xffffff) << 8;
    lVar1 = (uVar3 & 0x7fffffff) << 1;
    if (0x7fffffff < uVar3) {
      lVar1 = -1;
    }
    iVar2 = fn_8265C940(lVar1,0x248c8000);
    *(int *)(param_1 + 0xd4c) = iVar2;
    if (iVar2 != 0) {
      uVar3 = ((ulonglong)*(uint *)(param_1 + 0x2d0) +
               ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 & 0x1fffff) << 0xb;
      lVar1 = (uVar3 & 0x7fffffff) << 1;
      if (0x7fffffff < uVar3) {
        lVar1 = -1;
      }
      iVar2 = fn_8265C940(lVar1,0x248c8000);
      *(int *)(param_1 + 0x2e8) = iVar2;
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(param_1 + 0xd4c),0,
                     ((ulonglong)*(uint *)(param_1 + 0x2d8) +
                      ((ulonglong)*(uint *)(param_1 + 0x2d8) & 0x7fffffff) * 2 & 0x7fffff) << 9);
      }
    }
  }
  fn_82E871A0(param_1);
  return 0xfffffffffffffffd;
}

