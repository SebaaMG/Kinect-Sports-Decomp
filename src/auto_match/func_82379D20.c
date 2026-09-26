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
extern unsigned int *auStack_80;
extern int fn_822CEE40();
extern int fn_822CEFA0();
extern int fn_82379FC0();
extern int fn_8237A078();
extern int fn_8237A158();
extern int fn_8237A2E0();
extern int fn_8237B3E0();
extern int fn_8237C768();
extern int fn_8237C838();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_831D1C54;
extern unsigned int lbl_831D1C58;


void fn_82379D20(double param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  int param_10)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [128];
  
  *(undefined1 *)(param_3 + 0x2195) = 1;
  iVar1 = (int)param_6;
  if ((param_10 == 0) || (*(int *)(param_3 + 0xb0) != 0)) {
    if ((*(int *)(param_3 + 0x20ec) == iVar1) && (*(int *)(param_3 + 0x20f0) == (int)param_7)) {
      if (((((float)(param_1 - (double)lbl_8218EC10) <= *(float *)(param_3 + 0x20f4)) &&
           (*(float *)(param_3 + 0x20f4) <= (float)(param_1 + (double)lbl_8218EC10))) &&
          (*(int *)(param_3 + 0x20e0) == param_4)) && (*(int *)(param_3 + 0x20e4) == param_5))
      goto LAB_82379e28;
    }
    uVar3 = fn_8237A158(param_1,auStack_80,param_3,param_5,param_6);
    fn_8237A2E0(uVar3,(double)*(float *)(param_4 + 0x344),auStack_80,param_3,param_6);
  }
LAB_82379e28:
  *(undefined4 *)(param_3 + 0x20ec) = 0x18;
  fn_8237A078(param_1,param_2,param_3,param_6,param_7);
  if (((*(int *)(param_4 + 0x24) == 0) && (*(int *)(param_3 + 0xb4) != 0)) &&
     ((((iVar1 == 10 || ((iVar1 == 0xb || (iVar1 == 0x10)))) ||
       ((iVar1 == 9 && (param_1 < (double)lbl_8218E8E8)))) &&
      (fn_82379FC0((double)lbl_831D1C54,param_1,param_2,param_3),
      *(int *)(param_3 + 0xb4) != 0)))) {
    fn_82379FC0((double)lbl_831D1C58,param_1,param_2,param_3);
  }
  *(undefined4 *)(param_3 + 0xb8) = 0;
  if (*(int *)(param_3 + 0xb4) != 0) {
    *(undefined4 *)(param_3 + 0xb0) = 1;
  }
  *(int *)(param_3 + 0x2130) = param_4;
  *(int *)(param_3 + 0x2134) = param_5;
  *(int *)(param_3 + 0x2148) = iVar1;
  *(undefined4 *)(param_3 + 0x214c) = *(undefined4 *)(*(int *)(param_3 + 0x20d0) + 0x1f68);
  iVar1 = fn_822CEE40(param_5);
  if ((((iVar1 != 0) && (iVar2 = fn_822CEFA0(iVar1), iVar2 != 0)) &&
      (*(int *)(param_4 + 0x2c) != *(int *)(param_5 + 0x2c))) &&
     (((fn_8237B3E0(param_3,iVar1), *(int *)(iVar1 + 0x340) != 0 ||
       (*(int *)(iVar1 + 0x24) == 0)) || (iVar2 = fn_8237C768(iVar1), iVar2 != 0)))) {
    *(int *)(param_3 + 0x2138) = iVar1;
    *(undefined4 *)(iVar1 + 0x340) = 1;
    *(undefined4 *)(param_3 + 0xb8) = 0;
    *(undefined4 *)(param_3 + 0xb0) = 0;
  }
  fn_8237C838(param_3,param_5);
  return;
}

