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
extern int fn_82AB71F0();
extern int fn_82B69A00();
extern unsigned int lbl_820DD670;
extern unsigned int lbl_820DD674;
extern unsigned int lbl_820DD8B0;
extern unsigned int lbl_820DD8B4;
extern unsigned int lbl_8316E4F0;
extern unsigned int lbl_8316E60C;


undefined8
fn_82B9D5A8(ulonglong param_1,undefined8 param_2,uint *param_3,ulonglong param_4,code *param_5,
             ulonglong param_6)

{
  int iVar2;
  uint uVar3;
  ulonglong uVar1;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0xcc0);
  }
  if ((int)param_2 == -1) {
    iVar2 = 0x17;
    uVar3 = 1;
  }
  else {
    iVar2 = fn_82AB71F0(param_1,0x2b,param_2);
    uVar3 = fn_82AB71F0(param_1,0x2c,param_2);
  }
  if ((param_4 & 0xffffffff) < 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = fn_82B69A00(param_4,8);
  }
  if ((uVar1 & 0xffffffff) == 0) {
    *param_3 = (uint)*(ushort *)(&lbl_820DD8B4 + iVar2 * 0x18);
    iVar2 = *(int *)(&lbl_820DD8B0 + iVar2 * 0x18);
  }
  else {
    *param_3 = (uint)*(ushort *)(&lbl_820DD674 + iVar2 * 0x18);
    iVar2 = *(int *)(&lbl_820DD670 + iVar2 * 0x18);
  }
  if (iVar2 == 0) {
    if ((uVar1 & 0xffffffff) == 0) {
      *param_3 = uVar3;
    }
    else {
      *param_3 = 1;
    }
  }
  if ((param_5 != (code *)0x0) && ((param_6 & 0xffffffff) != 0)) {
    (*param_5)(param_6,0xffffffff820ddb70,lbl_8316E4F0,0x1c,param_2,
               *param_3);
    (*param_5)(param_6,0xffffffff820ddaf8,lbl_8316E60C,99,uVar1);
  }
  return 1;
}

