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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F691F0();


undefined8
fn_82C12DD0(undefined8 param_1,longlong *param_2,ulonglong param_3,ushort *param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_4;
  if (param_3 < uVar3 + *param_2) {
    uVar1 = 6;
  }
  else {
    if (0x200 < uVar3) {
      uVar3 = 0x200;
    }
    uVar2 = fn_8265C940(uVar3 + 2,0x248c8000);
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,uVar3 + 2);
    }
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8265C990(uVar2,0x248c8000);
      uVar2 = 0;
    }
    uVar1 = 5;
    *param_2 = (ulonglong)*param_4 + *param_2;
    *param_4 = 0;
    *param_5 = (int)uVar2;
  }
  return uVar1;
}

