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
extern int fn_8223C258();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F63CA0();


void fn_8223C2D0(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (0xffffffff < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if (((ulonglong)param_1[2] - (ulonglong)*param_1 & 0xffffffff) < (param_2 & 0xffffffff)) {
    uVar4 = fn_8223C258(param_2,0);
    fn_82F63CA0(uVar4,(ulonglong)*param_1,(ulonglong)param_1[1] - (ulonglong)*param_1);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (uVar1 != 0) {
      fn_8265CA20();
    }
    uVar3 = (uint)uVar4;
    *param_1 = uVar3;
    param_1[2] = uVar3 + (int)param_2;
    param_1[1] = (uVar2 - uVar1) + uVar3;
  }
  return;
}

