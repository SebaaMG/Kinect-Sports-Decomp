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
extern int fn_82A3F678();
extern int fn_82A3FE48();
extern int fn_82A3FEE0();
extern int fn_82A3FF60();
extern int fn_82A42038();


longlong fn_82A427B0(undefined4 *param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (param_1 == (undefined4 *)0x0) {
    lVar3 = -0x7769ffff;
  }
  if ((param_2 & 0xfffffffe) != 0) {
    lVar3 = -0x7769ffff;
  }
  if ((-1 < (int)lVar3) && (lVar3 = fn_82A3FE48(0xffffffff83219d50), -1 < lVar3)) {
    iVar1 = fn_82A3FF60(0xffffffff83219d50,0x3f8c,0x20970001,0);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_82A42038();
    }
    if (piVar2 == (int *)0x0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      lVar3 = fn_82A3F678(piVar2);
      if ((lVar3 < 0) || (lVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,param_2,param_3), lVar3 < 0))
      {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      else {
        *param_1 = piVar2;
      }
    }
    fn_82A3FEE0(0xffffffff83219d50);
  }
  return lVar3;
}

