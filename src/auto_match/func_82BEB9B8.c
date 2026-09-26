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
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE56B0();
extern int fn_82BE56C0();
extern int fn_82BEB628();
extern int fn_82BEB640();


undefined8 fn_82BEB9B8(int param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = fn_82BE56B0(0xc);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82BEB628(uVar1,param_2);
  }
  if ((uVar1 & 0xffffffff) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar2 = fn_82BE5240(param_1,0x65,0xffffffff820eaf20);
  }
  else {
    iVar3 = fn_82BE52B8(param_1 + 0x14,uVar1);
    if (iVar3 == 0) {
      fn_82BEB640(uVar1);
      fn_82BE56C0(uVar1);
      uVar2 = 1000;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

