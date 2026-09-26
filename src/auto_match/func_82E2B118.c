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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82E2B118(int param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  RtlEnterCriticalSection(param_1 + 8);
  if ((ulonglong)*(uint *)(param_1 + 0x28) < (param_2 & 0xffffffff)) {
    lVar1 = (param_2 & 0x7ffffff) << 5;
    if (0x7ffffff < (param_2 & 0xffffffff)) {
      lVar1 = -1;
    }
    lVar1 = fn_82E50BE8(lVar1,0,0,0,0);
    if (lVar1 != 0) {
      fn_82F68CC0(lVar1,*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x2c) << 5);
      if (*(int *)(param_1 + 0x24) != 0) {
        fn_82E4FE40();
      }
      *(int *)(param_1 + 0x24) = (int)lVar1;
      *(int *)(param_1 + 0x28) = (int)param_2;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(((ulonglong)*(uint *)(param_1 + 0x2c) & 0x7ffffff) * 0x20 + lVar1,0,
                   (param_2 - *(uint *)(param_1 + 0x2c) & 0x7ffffff) << 5);
    }
    uVar2 = 0xffffffff8007000e;
  }
  RtlLeaveCriticalSection(param_1 + 8);
  return uVar2;
}

