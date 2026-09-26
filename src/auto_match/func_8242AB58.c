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
extern unsigned int *auStack_50;
extern int fn_82230040();
extern int fn_8225C590();
extern int fn_8225DBF8();
extern int fn_8225F160();
extern int fn_8227CB30();
extern int fn_82357D28();
extern int fn_82359C18();
extern int fn_8242A830();
extern int fn_8242E3E0();
extern int fn_8242E460();
extern int fn_8242E940();
extern int fn_82439488();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82528E38();
extern int fn_8252CAF8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821B8F30;
extern unsigned int lbl_821B904C;
extern unsigned int lbl_821B9064;
extern unsigned int lbl_8242F308;
extern unsigned int uRam8326b47c;
extern unsigned int uStack_64;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_8242AB58(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined4 uStack_7c;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 *puStack_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  undefined1 auStack_50 [16];
  undefined4 *puStack_40;
  
  uVar1 = (((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
  fn_82357D28();
  *param_1 = &lbl_821B8F30;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  fn_82520158(0xffffffff821b2700,&puStack_80,0);
  uVar2 = fn_8265C9E0(0x994);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_8242A830(uVar2,param_1,param_2);
  }
  puStack_80 = (undefined *)param_1[0x5d];
  param_1[0x5d] = uVar4;
  fn_8242E940(&puStack_80);
  iVar5 = fn_8242E3E0(param_1);
  if (iVar5 == 0) {
    iVar5 = fn_8242E460(param_1);
    if (iVar5 == 0) goto LAB_8242ac38;
  }
  iVar5 = fn_8225F160();
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  **(undefined4 **)(*(int *)(param_1[0x5d] + 0x5c) + 0x208) = 0;
  iVar5 = fn_8225F160();
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
LAB_8242ac38:
  iVar5 = fn_8225F160();
  *(undefined4 *)(iVar5 + 8) = 1;
  *(undefined4 *)(param_1[0x5d] + 0xa0) = *(undefined4 *)(*(int *)(param_2 + 0x30) + 0x3e4);
  iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_1[0x5d] + 0xa0) + 0x7c0) + 0x10) + 0x34);
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0xe4) = lbl_82193CC0;
  }
  fn_8252CAF8(*(undefined4 *)(param_1[0x5d] + 0xa0),3,0);
  fn_8252CAF8(*(undefined4 *)(param_1[0x5d] + 0xa0),2,0);
  fn_8252CAF8(*(undefined4 *)(param_1[0x5d] + 0xa0),1,1);
  fn_8252CAF8(*(undefined4 *)(param_1[0x5d] + 0xa0),5,0);
  iVar5 = *(int *)(*(int *)(*(int *)(param_1[0x5d] + 0x9c) + 0xd54) + 0x20);
  if ((*(int *)(param_2 + 0x54) != 0) && (iVar5 != 0)) {
    uVar4 = fn_8251F720(param_2 + 0x54,0);
    if (*(int *)(iVar5 + 0x40) != 0) {
      fn_8251FA58();
      *(undefined4 *)(iVar5 + 0x40) = 0;
    }
    *(undefined4 *)(iVar5 + 0x40) = uVar4;
  }
  if ((*(int *)(param_2 + 0x58) != 0) && (iVar5 != 0)) {
    uVar4 = fn_8251F720(param_2 + 0x58,0);
    if (*(int *)(iVar5 + 0x44) != 0) {
      fn_8251FA58();
      *(undefined4 *)(iVar5 + 0x44) = 0;
    }
    *(undefined4 *)(iVar5 + 0x44) = uVar4;
  }
  *(undefined4 *)(param_1[0x5d] + 0xa4) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1[0x5d] + 0xa8) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1[0x5d] + 0xac) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1[0x5d] + 0xb0) = *(undefined4 *)(param_2 + 100);
  uRam8326b47c = 0;
  fn_82439488((ulonglong)(uint)param_1[0x5d] + 0x1c);
  uStack_7c = 0;
  puStack_80 = &lbl_8242F308;
  uStack_70 = 0x8242f30800000000;
  puStack_68 = param_1;
  puStack_40 = (undefined4 *)fn_8265C9E0(0x18);
  if (puStack_40 != (undefined4 *)0x0) {
    *puStack_40 = &lbl_821B904C;
    puStack_40[2] = uVar1;
    puStack_40[3] = (((U64)(uStack_70) >> 32) & 0xFFFFFFFF);
    puStack_40[4] = puStack_68;
    puStack_40[5] = uStack_64;
    fn_8227CB30(0xffffffff8328cf70,auStack_50);
    fn_82528E38(0xffffffff8327657c,9,0xffffffff8242a7f0,0);
    fn_82359C18(auStack_50);
    if (param_1[0x25] != 0) {
      *(undefined4 *)(param_1[0x25] + 0x50) = 1;
    }
    puStack_60 = &uStack_70;
    uStack_70 = CONCAT44(&lbl_821B9064,(((U64)(uStack_70) >> 32) & 0xFFFFFFFF));
    uVar3 = fn_8225C590();
    fn_8225DBF8(uVar3,&uStack_70);
    return param_1;
  }
  uStack_74 = 0;
  ppuStack_78 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_78);
}

