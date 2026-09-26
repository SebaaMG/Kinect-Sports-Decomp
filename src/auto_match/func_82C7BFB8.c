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
extern int fn_82C562F0();
extern int fn_82C563B0();
extern int fn_82F68CC0();


undefined8 fn_82C7BFB8(int param_1,ulonglong param_2,int param_3)

{
  int iVar2;
  ulonglong uVar1;
  ulonglong uVar3;
  longlong lVar4;
  
  *(int *)(param_1 + 0x560c) = param_3 + 0x1000;
  uVar3 = 0;
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  if ((param_2 & 0xffffffff) != 0) {
    uVar3 = fn_82C562F0(lVar4,param_2,0xffffffff82196582);
    if ((uVar3 & 0xffffffff) == 0) {
      return 0xfffffffffffffff7;
    }
    fn_82F68CC0(uVar3,*(undefined4 *)(param_1 + 0x5608),param_2);
  }
  if (*(int *)(param_1 + 0x5608) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x5608) = 0;
  }
  if (*(int *)(param_1 + 0x5604) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x5604) = 0;
  }
  iVar2 = fn_82C562F0(lVar4,*(undefined4 *)(param_1 + 0x560c),0xffffffff82196582);
  *(int *)(param_1 + 0x5604) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x560c) = 0;
    if ((uVar3 & 0xffffffff) != 0) {
      fn_82C563B0(lVar4,uVar3);
    }
    return 0xfffffffffffffff7;
  }
  uVar1 = fn_82C562F0(lVar4,*(undefined4 *)(param_1 + 0x560c),0xffffffff82196582);
  *(int *)(param_1 + 0x5608) = (int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    if ((param_2 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar1,uVar3,param_2);
    }
    if ((uVar3 & 0xffffffff) != 0) {
      fn_82C563B0(lVar4,uVar3);
    }
    return 0;
  }
  if (*(int *)(param_1 + 0x5604) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x5604) = 0;
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82C563B0(lVar4,uVar3);
  }
  *(undefined4 *)(param_1 + 0x560c) = 0;
  return 0xfffffffffffffff7;
}

