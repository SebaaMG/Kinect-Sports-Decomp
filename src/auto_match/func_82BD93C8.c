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
extern int fn_82BD8FE0();


undefined8 fn_82BD93C8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    iVar1 = fn_8265C940(0x844,0x608a2002);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_82BD8FE0();
    }
    if (iVar1 == 0) {
      uVar2 = 0xffffffff8007000e;
    }
    else {
      *(undefined4 *)(iVar1 + 0x20) = param_2;
      *param_1 = iVar1;
    }
  }
  return uVar2;
}

