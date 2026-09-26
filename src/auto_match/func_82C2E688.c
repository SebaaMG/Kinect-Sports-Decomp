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
extern int fn_82C2B580();
extern int fn_82F691F0();


undefined8 fn_82C2E688(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x3c) < 3) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  else {
    lVar1 = ((ulonglong)*(ushort *)(param_1 + 0x22) + 1) * 4;
    uVar3 = fn_82C2B580(lVar1);
    *(int *)(param_1 + 0x224) = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3,0,lVar1);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

