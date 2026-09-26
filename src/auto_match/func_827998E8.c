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
extern int fn_8267B890();
extern int fn_82794B88();
extern int fn_82797870();
extern int fn_827979F8();


undefined8 fn_827998E8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  
  iVar3 = fn_82794B88();
  uVar1 = fn_8267B890(*(undefined4 *)(iVar3 + 0x1c),0x24,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82797870(uVar1,iVar3);
  }
  fn_827979F8(param_1,uVar2,param_2,param_3);
  return uVar2;
}

