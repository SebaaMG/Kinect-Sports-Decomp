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
extern int fn_82AB50D0();
extern int fn_82AB5180();


void fn_82AB9130(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6858,0xffffffff820d7400,0x12d);
  }
  if (param_2 != 0) {
    do {
      if ((ulonglong)*(uint *)(param_1 + 0x28) < (uVar2 & 0xffffffff)) break;
      uVar2 = uVar2 + 1;
      iVar1 = fn_82AB50D0(*(undefined4 *)(param_1 + 0x24),uVar2);
    } while (iVar1 != param_2);
    if (((iVar1 == param_2) && ((uVar2 & 0xffffffff) != 0)) &&
       ((uVar2 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0x28))) goto LAB_82ab91e8;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7460,0xffffffff820d7400,0x13c);
LAB_82ab91e8:
  fn_82AB5180(*(undefined4 *)(param_1 + 0x24),uVar2);
  return;
}

