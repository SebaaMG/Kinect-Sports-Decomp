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
extern int fn_822315A0();
extern int fn_822CDC98();
extern int fn_822CEE40();
extern unsigned int lbl_831DCD58;


void fn_82372550(int param_1,int param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1f0) == 8) goto LAB_823726e0;
  if (param_5 < 0x18) {
    iVar3 = *(int *)(&lbl_831DCD58 + param_5 * 4);
  }
  else {
    iVar3 = 6;
  }
  uVar1 = fn_822CEE40(param_3);
  if (*(int *)(param_1 + 0x220) != 0) {
    (**(code **)(*param_3 + 0x14))(param_3,0xffffffff821b34dc);
  }
  if (param_3[0xb] == param_4[0xb]) {
    if (iVar3 == 2) {
      fn_822CDC98(param_3,0xffffffff821b34f0);
      fn_822CDC98(param_3,0xffffffff821b3504);
    }
    fn_822CDC98(param_3,0xffffffff821b3518);
    if (param_5 == 4) {
      fn_822CDC98(param_4,0xffffffff821b3524);
      fn_822CDC98(param_4,0xffffffff821b3538);
      uVar2 = 0xffffffff821b354c;
      goto LAB_82372680;
    }
    if ((5 < param_5) && (param_5 < 8)) {
      uVar2 = 0xffffffff821b355c;
      goto LAB_82372680;
    }
  }
  else {
    uVar2 = 0xffffffff821b356c;
    param_4 = param_3;
LAB_82372680:
    fn_822CDC98(param_4,uVar2);
  }
  if ((iVar3 == 4) && ((uVar1 & 0xffffffff) != 0)) {
    fn_822CDC98(uVar1,0xffffffff821b357c);
  }
  if (((param_6 != 0) && (fn_822CDC98(param_3,0xffffffff821b3590), (uVar1 & 0xffffffff) != 0))
     && (param_3[0xd5] != 0)) {
    fn_822CDC98(uVar1,0xffffffff821b35a0);
  }
LAB_823726e0:
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

