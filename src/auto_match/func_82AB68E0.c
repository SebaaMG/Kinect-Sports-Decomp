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
extern int fn_82AB15D0();
extern int fn_82AB5EC0();
extern int fn_82B6B008();


int fn_82AB68E0(undefined8 param_1,code *param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar2;
  longlong lVar1;
  
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d68b0,0xb2c);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d68b0,0xb2d);
  }
  iVar2 = (*param_2)(param_1,0x1c);
  if (iVar2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69c0,0xffffffff820d68b0,0xb33);
  }
  *(int *)(iVar2 + 4) = (int)param_1;
  *(code **)(iVar2 + 8) = param_2;
  *(int *)(iVar2 + 0xc) = (int)param_3;
  lVar1 = fn_82B6B008(param_4,0x10,param_2,param_3,param_1);
  if (lVar1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a64,0xffffffff820d68b0,0xb3e);
  }
  fn_82AB5EC0(iVar2,lVar1);
  *(undefined4 *)(iVar2 + 0x18) = 0;
  return iVar2;
}

