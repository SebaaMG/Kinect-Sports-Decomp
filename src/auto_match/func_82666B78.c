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
extern int fn_8265CF70();
extern int fn_8265D3F0();
extern int fn_8265FE68();
extern int fn_82660870();
extern int fn_826660E8();
extern int fn_82666F40();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;


void fn_82666B78(undefined4 param_1,int param_2)

{
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar1;
  undefined4 uStack00000014;
  int iStack0000001c;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uVar2 = fn_8265CF70(param_1);
  iVar3 = fn_8265FE68(uStack00000014);
  if ((uint)(iVar3 - iStack0000001c) < uVar2) {
    fn_82660870(uStack00000014);
  }
  else {
    uVar2 = uVar2 + iStack0000001c;
    uVar4 = fn_8265D3F0(uStack00000014);
    if (uVar4 < uVar2) {
      uVar1 = fn_82666F40(uStack00000014,uVar2);
      fn_826660E8(uStack00000014,uVar1);
    }
  }
  return;
}

