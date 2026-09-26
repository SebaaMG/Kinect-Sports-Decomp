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
extern int fn_82CE86F0();
extern int fn_82CE8758();
extern int fn_82CE9810();
extern int fn_82CE98C8();
extern int fn_82CFBB08();


void fn_82CE8A48(int param_1,longlong param_2,undefined8 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = fn_82CE86F0(param_1,param_3);
  if (param_4 == 0) {
    fn_82CE98C8();
  }
  else {
    fn_82CE9810((uVar3 + (uVar3 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + param_2 + 0x2c);
  }
  if ((int)uVar3 < *(int *)(param_1 + 0x88)) {
    iVar2 = (int)((uVar3 + 0x11 & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar2 + (int)param_2);
    if (sVar1 != 0) {
      *(short *)(iVar2 + (int)param_2) = sVar1 + -1;
      fn_82CFBB08(*(undefined4 *)((int)((uVar3 + 0x1e & 0xffffffff) << 2) + param_1),1);
      return;
    }
  }
  fn_82CE8758(param_1,param_2);
  return;
}

