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
extern int fn_82E2E068();
extern int fn_82E50CB8();
extern int fn_82E50F10();


undefined8 fn_82E2EB60(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = 0;
    fn_82E50CB8(param_1 + 0x54);
    iVar2 = fn_82E2E068(param_1 + 0x16c,param_2,0);
    if (iVar2 == 0) {
      uVar1 = 0xffffffff8007000e;
    }
    else {
      (**(code **)(*param_2 + 4))(param_2);
    }
    fn_82E50F10(param_1 + 0x54);
  }
  return uVar1;
}

