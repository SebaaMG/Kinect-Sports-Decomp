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
extern int fn_829EA3B0();
extern int fn_82A28568();
extern int fn_82F691F0();
extern unsigned int lbl_832179FC;


longlong fn_829EAB30(int param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = fn_829EA3B0(param_1 + 4);
  if (lVar1 == 0) {
    lVar1 = (param_3 & 0x3fffffff) << 2;
    if (0x3fffffff < (param_3 & 0xffffffff)) {
      lVar1 = -1;
    }
    uVar2 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,lVar1);
    *(int *)(param_1 + 0x14) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,(param_3 & 0x3fffffff) << 2);
    }
    lVar1 = -0x7ff8fff2;
  }
  return lVar1;
}

