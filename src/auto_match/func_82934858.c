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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F691F0();


undefined8 fn_82934858(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (param_2 & 0x3fffffff) << 2;
  lVar1 = (uVar2 & 0x3fffffff) << 2;
  if (0x3fffffff < uVar2) {
    lVar1 = -1;
  }
  lVar1 = fn_8265C9E0(lVar1);
  if (lVar1 == 0) {
    fn_8265CA20(0);
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lVar1,0,(param_2 & 0xfffffff) << 4);
}

