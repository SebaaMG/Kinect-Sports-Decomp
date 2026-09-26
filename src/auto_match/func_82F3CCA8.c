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
extern unsigned int *auStack_230;
extern unsigned int *auStack_238;
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82f3ce84) */

longlong fn_82F3CCA8(int param_1)

{
  longlong lVar1;
  uint auStack_238 [2];
  undefined1 auStack_230 [560];
  
  lVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))
                    (*(int **)(param_1 + 0x54),0xffffffff82154b18,auStack_238);
  if (-1 < lVar1) {
    if (auStack_238[0] < 0x80) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_230,0,0x200);
    }
    lVar1 = -0x3ff2c174;
  }
  return lVar1;
}

