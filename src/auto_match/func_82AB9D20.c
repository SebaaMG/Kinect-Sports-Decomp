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
extern int fn_82B69A00();
extern int fn_82B6BF80();
extern int fn_82B77EE0();
extern int fn_82B7C530();


longlong fn_82AB9D20(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7614,0xffffffff820d7628,0x10b);
  }
  iVar4 = fn_82B69A00(param_1[7],1);
  fn_82B6BF80(param_1[10]);
  fn_82B6BF80(param_1[0xb]);
  if (iVar4 == 0) {
    iVar4 = param_1[8];
    pcVar1 = *(code **)(iVar4 + 0x59c);
    uVar2 = *(undefined4 *)(iVar4 + 0x5a4);
    fn_82B7C530(iVar4,1);
    (*pcVar1)(uVar2,iVar4);
  }
  else if (param_1[6] != 0) {
    iVar4 = fn_82B77EE0();
    if (iVar4 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7600,0xffffffff820d7628,0x125);
    }
  }
  lVar3 = (*(code *)param_1[2])(*param_1,param_1);
  if (lVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7600,0xffffffff820d7628,300);
  }
  return lVar3;
}

