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
extern int fn_826605D8();
extern int fn_82660720();
extern int fn_82660740();
extern int fn_82660760();
extern int fn_826607D0();
extern int fn_82660870();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;


void fn_82660140(undefined4 param_1,int param_2)

{
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar1;
  undefined4 uStack00000014;
  int iStack0000001c;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uVar2 = fn_82660740(param_1);
  iVar3 = fn_82660760(uStack00000014);
  if ((uint)(iVar3 - iStack0000001c) < uVar2) {
    fn_82660870(uStack00000014);
  }
  else {
    uVar2 = uVar2 + iStack0000001c;
    uVar4 = fn_82660720(uStack00000014);
    if (uVar4 < uVar2) {
      uVar1 = fn_826607D0(uStack00000014,uVar2);
      fn_826605D8(uStack00000014,uVar1);
    }
  }
  return;
}

