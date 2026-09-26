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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_25e;
extern unsigned int *auStack_45e;
extern int fn_8225C590();
extern int fn_8225CD18();
extern int fn_8225CF60();
extern int fn_8225DB68();
extern int fn_82266230();
extern int fn_82267460();
extern int fn_82269440();
extern int fn_82269B00();
extern int fn_822847A8();
extern int fn_82359C18();
extern int fn_8251F720();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_82196288;
extern unsigned int lbl_821A7D94;
extern unsigned int lbl_821A7DAC;
extern unsigned int lbl_821A7DC4;
extern unsigned int lbl_821A7DDC;
extern unsigned int lbl_821A7DF4;
extern unsigned int lbl_821A7E0C;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832766F6;
extern unsigned int uStack_260;
extern unsigned int uStack_460;
extern unsigned int uStack_468;


undefined4 *
fn_82268ED8(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 *param_7,undefined4 param_8)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined **ppuStack_4a0;
  undefined4 *puStack_49c;
  undefined ***pppuStack_490;
  undefined **ppuStack_480;
  undefined4 *puStack_47c;
  undefined ***pppuStack_470;
  ulonglong uStack_468;
  undefined2 uStack_460;
  undefined1 auStack_45e [510];
  undefined2 uStack_260;
  undefined1 auStack_25e [606];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xad] = 1;
  param_1[0xae] = 1;
  param_1[0xb3] = 0;
  param_1[0xb4] = &lbl_821A8C90;
  fn_82F68CC0(param_1 + 0xbc,param_2,0x90);
  param_1[0xe3] = param_8;
  param_1[0xe2] = (int)param_5;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  iVar2 = fn_8225C590();
  param_1[0xb5] = param_1;
  param_1[0xb6] = fn_82269B00;
  param_1[0xb7] = fn_82BA02A8;
  param_1[0xb8] = fn_82BA02A8;
  uVar1 = fn_8265C9E0(0x78);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82267460(uVar1,param_1 + 0xb4,1,param_1 + 0xcf,param_1 + 0xd1,param_3,param_5);
  }
  param_1[0xb3] = uVar3;
  uVar3 = fn_8251F720(param_2 + 0x58,0);
  param_1[0xaf] = uVar3;
  uVar3 = fn_8251F720(param_2 + 0x5c,0);
  piVar6 = (int *)param_1[0xaf];
  param_1[0xb0] = uVar3;
  iVar5 = 0;
  for (; (piVar6 != (int *)0x0 && (*piVar6 != 0));
      piVar6 = (int *)(-(uint)(piVar6[1] != 0) & (uint)(piVar6 + 1))) {
    iVar5 = iVar5 + 1;
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uStack_468 = CONCAT44(lbl_83265A28,iVar5) & 0x7fffffffffffff | 0x3f80000000000000;
  param_1[0xe4] = (int)(((((U64)(uStack_468) >> 0) & 0xFFFFFFFF) - lbl_821CA460) * (float)(longlong)iVar5);
  if (param_6 == (undefined4 *)0x0) {
    param_6 = &lbl_82196288;
  }
  param_1[0xb1] = *param_6;
  puVar7 = &lbl_82196288;
  if (param_7 != (undefined4 *)0x0) {
    puVar7 = param_7;
  }
  iVar8 = param_2 + 0x48;
  iVar5 = param_2 + 0x44;
  param_1[0xb2] = *puVar7;
  fn_82266230((double)*(float *)(param_2 + 0x30),(double)*(float *)(param_2 + 0x3c),
                    param_1 + 4,0xffffffff821a7d58,0,0,iVar5,iVar8);
  fn_82266230((double)*(float *)(param_2 + 0x34),(double)*(float *)(param_2 + 0x3c),
                    param_1 + 0x3c,0xffffffff821a7d64,5,5,iVar5,iVar8);
  fn_82266230((double)*(float *)(param_2 + 0x38),(double)*(float *)(param_2 + 0x3c),
                    param_1 + 0x74,0xffffffff821a7d70,6,6,iVar5,iVar8);
  pppuStack_490 = &ppuStack_4a0;
  param_1[0x39] = 0;
  param_1[0x71] = 0;
  ppuStack_4a0 = &lbl_821A7D94;
  param_1[0xa9] = 0;
  param_1[0xa8] = param_1[0xd4];
  puStack_49c = param_1;
  fn_8225DB68(iVar2,&ppuStack_4a0);
  fn_82269440(param_1);
  if (param_1[0xd9] != 0) {
    *(undefined4 *)(iVar2 + 0x6c) = 1;
    fn_8225CD18(iVar2);
    *(undefined4 *)(iVar2 + 0x6c) = 0;
  }
  ppuStack_4a0 = &lbl_821A7DC4;
  pppuStack_490 = &ppuStack_4a0;
  pppuStack_470 = &ppuStack_480;
  ppuStack_480 = &lbl_821A7DAC;
  puStack_49c = param_1;
  puStack_47c = param_1;
  uVar3 = fn_8225CF60(iVar2,&ppuStack_480,&ppuStack_4a0);
  param_1[0xe1] = uVar3;
  uStack_460 = lbl_820E975C;
  fn_82F691F0(auStack_45e,0,0x1fe);
  fn_82528BF8(param_1[0xe2],0xffffffff821a7d80,&uStack_460,0x100,0,1);
  if (param_1[0xdc] == 0) {
    pppuStack_490 = (undefined ***)0x0;
    puVar4 = (undefined2 *)0x0;
    ppuStack_480 = &lbl_821A7E0C;
  }
  else {
    uStack_260 = lbl_820E975C;
    fn_82F691F0(auStack_25e,0,0x1fe);
    fn_82528BF8(param_1[0xe2],0xffffffff821a7d8c,&uStack_260,0x100,0,1);
    ppuStack_480 = &lbl_821A7DF4;
    pppuStack_490 = &ppuStack_4a0;
    ppuStack_4a0 = &lbl_821A7DDC;
    puVar4 = &uStack_260;
    puStack_49c = param_1;
  }
  pppuStack_470 = &ppuStack_480;
  puStack_47c = param_1;
  uVar3 = fn_822847A8(puVar4,&ppuStack_4a0,&uStack_460,pppuStack_470,1,1);
  param_1[0xe0] = uVar3;
  lbl_832766F6 = 1;
  fn_82359C18(param_4);
  return param_1;
}

