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
#define TBLr 0
extern int fn_8307DF10();
extern int fn_8307E3C8();
extern unsigned int lbl_7FEA1804;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_8307E6E0(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar4;
  ulonglong uVar3;
  
  lVar1 = TBLr;
  iVar4 = fn_8307DF10();
  while( true ) {
    if (iVar4 != 0) {
      return 0;
    }
    lVar2 = TBLr;
    uVar3 = KeQueryPerformanceFrequency();
    if (uVar3 >> 3 < (ulonglong)(lVar2 - lVar1)) break;
    iVar4 = fn_8307DF10(param_1);
  }
  uVar3 = 0;
  enforceInOrderExecutionIO();
  lbl_7FEA1804 = 0x3000000;
  enforceInOrderExecutionIO();
  fn_8307DF10(param_1);
  if (*param_1 != 0) {
    do {
      fn_8307E3C8(param_1,uVar3);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)*param_1);
  }
  param_1[1] = param_1[1] | 0x80000;
  return 1;
}

