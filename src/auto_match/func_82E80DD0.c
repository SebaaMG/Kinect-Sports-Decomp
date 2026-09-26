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
extern int fn_82E80A68();


undefined8
fn_82E80DD0(int param_1,int param_2,longlong param_3,undefined8 param_4,ulonglong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (param_5 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    if (param_2 != 0) {
      param_3 = (ulonglong)*(uint *)(param_1 + 8) + param_3;
    }
    if (param_3 < 0) {
      uVar2 = 0xffffffff80070057;
    }
    else {
      uVar3 = *(uint *)(param_1 + 4);
      if (param_3 <= (longlong)(ulonglong)uVar3) {
        uVar3 = (uint)param_3;
      }
      *(uint *)(param_1 + 8) = uVar3;
      iVar1 = fn_82E80A68();
      *param_5 = (ulonglong)*(uint *)(iVar1 + 8);
    }
  }
  return uVar2;
}

