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
extern int fn_82C53960();
extern int fn_82C562F0();
extern int fn_82F691F0();


undefined8 fn_82C74220(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  if (*(int *)(param_1 + 0x3c4c) == 0) {
    uVar1 = fn_82C53960(0x48,0);
    if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,0x48);
    }
    *(int *)(param_1 + 0x3c4c) = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) goto LAB_82c74280;
LAB_82c74274:
    uVar2 = 0xfffffffffffffff7;
  }
  else {
LAB_82c74280:
    if (*(int *)(param_1 + 0x3c58) == 0) {
      iVar3 = fn_82C562F0(lVar4,0x38,0xffffffff82196582);
      *(int *)(param_1 + 0x3c58) = iVar3;
      if (iVar3 == 0) goto LAB_82c74274;
    }
    if (*(int *)(param_1 + 0x3c60) == 0) {
      iVar3 = fn_82C562F0(lVar4,400,0xffffffff82196582);
      *(int *)(param_1 + 0x3c60) = iVar3;
      if (iVar3 == 0) {
        return 0xfffffffffffffff7;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

