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
extern int fn_82ADEDB8();
extern int fn_82AE5040();
extern int fn_82AE5400();


void fn_82AE7180(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar2 = fn_82AE5040(param_2 + 8,uVar4 << 2);
    if (uVar2 == 0xffffffff) {
      return;
    }
    uVar2 = uVar2 >> 2;
    if (uVar2 == 0xffffffff) break;
    uVar3 = fn_82AE5400(param_2,(ulonglong)uVar2,1,4);
    uVar4 = 0x100;
    if (uVar3 != 0xffffffff) {
      uVar4 = (ulonglong)(uVar3 >> 4);
    }
    uVar1 = (ulonglong)uVar2 & 0x3ffffffc;
    fn_82ADEDB8(param_2,uVar1,(uVar4 + 3 & 0xfffffffc) - uVar1);
    if (0xff < uVar4) {
      return;
    }
  }
  return;
}

