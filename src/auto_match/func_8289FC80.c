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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82230218();
extern int fn_825089A0();
extern int fn_82880A10();
extern int fn_8289EBC0();
extern int fn_8289EE00();
extern int fn_828A0AD0();
extern unsigned int lbl_82023C48;


undefined4 *
fn_8289FC80(undefined4 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [56];
  
  param_1[2] = param_4;
  param_1[10] = param_3;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *(undefined1 *)((int)param_1 + 0x26) = param_8;
  *param_1 = &lbl_82023C48;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  fn_82230218(param_1 + 0xb,param_7,0,0xffffffffffffffff);
  param_1[0x14] = (int)param_2;
  param_1[0x13] = 0;
  fn_8289EBC0(param_1 + 0x15,auStack_40,auStack_40);
  uVar1 = param_1[3];
  iVar2 = fn_8289EE00(param_2 + 0x21c);
  if ((undefined4 *)(iVar2 + 0xc) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
    *(undefined4 **)(iVar2 + 0x10) = param_1;
  }
  fn_82880A10(auStack_38,param_2 + 0x21c,iVar2,0);
  if (param_1[10] != -1) {
    fn_828A0AD0(param_1[10],param_2);
  }
  piVar3 = (int *)fn_825089A0();
  dVar4 = (double)(**(code **)(*piVar3 + 8))();
  param_1[6] = (float)dVar4;
  param_1[7] = (float)dVar4;
  param_1[5] = (float)dVar4;
  param_1[8] = (float)dVar4;
  return param_1;
}

