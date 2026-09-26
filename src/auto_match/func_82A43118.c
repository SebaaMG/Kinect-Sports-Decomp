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
extern int fn_82A3FE48();
extern int fn_82A3FEE0();
extern int fn_82A3FF60();
extern int fn_82A4D350();


undefined8 fn_82A43118(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  fn_82A3FE48(0xffffffff83219d50);
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    iVar1 = fn_82A3FF60(0xffffffff83219d50,0x74,0x2097000a,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_82A4D350();
    }
    if (iVar1 == 0) {
      uVar2 = 0xffffffff8007000e;
    }
    else {
      uVar2 = 0;
      *param_1 = iVar1;
    }
  }
  fn_82A3FEE0(0xffffffff83219d50);
  return uVar2;
}

