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
extern int fn_82511350();
extern int fn_8251F720();
extern int fn_82554260();
extern int fn_827F2DD0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_824C7738;


undefined4 *
fn_824C73C0(undefined4 *param_1,int *param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (**(code **)(*param_2 + 0x4c))(param_2);
  *param_1 = (int)uVar2;
  fn_82554260(param_1 + 1,uVar2,1);
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)((int)param_1 + 0x1b5) = 0;
  *(undefined1 *)((int)param_1 + 0x1b6) = 0;
  fn_82511350(param_1 + 0x6e);
  uVar3 = fn_8251F720(param_3,0);
  param_1[0x72] = uVar3;
  param_1[0x73] = param_2;
  puVar4 = param_1 + 0x74;
  if (*(int *)(param_4 + 0x10) == 0) {
    param_1[0x78] = 0;
  }
  else {
    if (*(int *)(param_4 + 0x10) != param_4) {
      puVar4 = (undefined4 *)0x0;
    }
    uVar3 = (**(code **)**(undefined4 **)(param_4 + 0x10))(*(undefined4 **)(param_4 + 0x10),puVar4);
    param_1[0x78] = uVar3;
  }
  param_1[0x7a] = param_5;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0xffffffff;
  fn_827F2DD0((double)lbl_821CC160,*param_1,param_1 + 1);
  uVar6 = 0;
  if (param_1[100] != 0) {
    iVar5 = 0;
    do {
      uVar6 = uVar6 + 1;
      iVar1 = *(int *)(iVar5 + param_1[0x65]);
      iVar5 = iVar5 + 4;
      *(undefined **)(iVar1 + 0x170) = &lbl_824C7738;
      *(undefined4 *)(iVar1 + 0x174) = 0;
      *(undefined4 **)(iVar1 + 0x178) = param_1;
    } while (uVar6 < (uint)param_1[100]);
  }
  return param_1;
}

