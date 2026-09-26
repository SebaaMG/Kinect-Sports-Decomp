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
extern unsigned int *auStack_40;
extern int fn_82AB15D0();
extern int fn_82BD3510();
extern unsigned int lbl_820E4F24;
extern unsigned int uStack_3c;


void fn_82BC6E18(undefined8 param_1,uint *param_2,uint *param_3,int param_4,int *param_5)

{
  uint uVar1;
  undefined1 auStack_40 [4];
  uint uStack_3c;
  
  uStack_3c = *param_2;
  auStack_40[1] = 1;
  auStack_40[2] = 2;
  auStack_40[0] = 0;
  auStack_40[3] = 3;
  if ((param_4 == 0) || (param_5 == (int *)0x0)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e75b0,0xffffffff820e74a8,0x10df);
  }
  if (param_3 != (uint *)0x0) {
    if ((*param_3 & 0x400000) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3[1];
      uVar1 = uVar1 >> 0xf & uVar1 >> 0xb & uVar1 >> 7 & uVar1 >> 3 & 1;
    }
    if (uVar1 != 0) {
      *(bool *)((int)param_5 + param_4 + 0x98) = *(char *)((int)param_5 + param_4 + 0x98) == '\0';
    }
    if ((*param_3 & 0x400000) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3[1] >> 0x14 & 1;
    }
    if (uVar1 != 0) {
      *(undefined1 *)((int)param_5 + param_4 + 0x9e) = 1;
    }
    auStack_40[0] = fn_82BD3510(param_3,0);
    auStack_40[1] = fn_82BD3510(param_3,1);
    auStack_40[2] = fn_82BD3510(param_3,2);
    auStack_40[3] = fn_82BD3510(param_3,3);
  }
  (**(code **)(*param_5 + 0x58))(param_5,param_4,0,auStack_40[uStack_3c >> 0x18]);
  (**(code **)(*param_5 + 0x58))(param_5,param_4,1,auStack_40[uStack_3c >> 0x10 & 0xff]);
  (**(code **)(*param_5 + 0x58))(param_5,param_4,2,auStack_40[uStack_3c >> 8 & 0xff]);
  (**(code **)(*param_5 + 0x58))(param_5,param_4,3,auStack_40[uStack_3c & 0xff]);
  *param_2 = lbl_820E4F24;
  return;
}

