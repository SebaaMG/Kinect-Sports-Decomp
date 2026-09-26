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
extern unsigned int *auStack_30;
extern int fn_82AE5110();
extern int fn_82AE5188();


ulonglong fn_82AE5400(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint auStack_30 [12];
  
  uVar1 = (param_2 & 0x3fffffff) << 2;
  while( true ) {
    if ((int)param_4 < 1) {
      uVar1 = fn_82AE5188(param_1 + 8,uVar1 + 3,auStack_30);
    }
    else {
      uVar1 = fn_82AE5110();
    }
    if ((uint)uVar1 == 0xffffffff) {
      return 0xffffffffffffffff;
    }
    if ((param_3 & 0xffffffff) == 1) break;
    uVar2 = (ulonglong)auStack_30[0];
    if ((param_3 & 0xffffffff) <=
        (((0x4a2932934dcU >> (uVar2 & 0x7f)) >> (uVar2 & 0x7f)) >> (uVar2 & 0x7f) & 7)) {
      uVar2 = ~uVar2;
      goto LAB_82ae54b0;
    }
    uVar1 = uVar1 + param_4 & 0xfffffffc;
    if (0x400 < (uVar1 + param_3 & 0xffffffff)) {
      return 0xffffffffffffffff;
    }
  }
  uVar2 = (ulonglong)(uint)(1 << ((uint)uVar1 & 3));
LAB_82ae54b0:
  return (uVar1 & 0x3ffffffc) << 2 | uVar2 & 0xffffffff0000000f;
}

