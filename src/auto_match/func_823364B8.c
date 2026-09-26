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
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822C72E0();
extern int fn_8260D428();
extern int fn_82809CB0();
extern unsigned int lbl_821929B0;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_823364B8(int param_1,float *param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined8 uVar5;
  undefined4 ****ppppuVar6;
  undefined8 uVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float afStack_80 [4];
  undefined4 ***apppuStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 ***apppuStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  
  fVar1 = *param_2;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x230) + 0x80U & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  puVar3 = (undefined4 *)((int)afStack_80 + in_r0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  dVar8 = (double)fn_82809CB0((double)(afStack_80[0] - fVar1));
  if (dVar8 < (double)lbl_821929B0) {
    return 1;
  }
  fn_82230300(apppuStack_50,0,0);
  fn_82230300(apppuStack_70,0,0);
  if (param_3 == 0) {
    fn_82230360(apppuStack_50,0xffffffff821aca9c,8);
    uVar7 = 9;
    uVar5 = 0xffffffff821acaa8;
  }
  else if (*(int *)(param_1 + 0x184) == 0) {
    fn_82230360(apppuStack_50,0xffffffff821b09fc,0x15);
    uVar7 = 0x16;
    uVar5 = 0xffffffff821b0a2c;
  }
  else {
    fn_82230360(apppuStack_50,0xffffffff821b09e4,0x14);
    uVar7 = 0x15;
    uVar5 = 0xffffffff821b0a14;
  }
  fn_82230360(apppuStack_70,uVar5,uVar7);
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x20);
  ppppuVar6 = (undefined4 ****)apppuStack_70[0];
  if (uStack_5c < 0x10) {
    ppppuVar6 = apppuStack_70;
  }
  iVar4 = fn_8260D428(iVar4 + 4,0,*(undefined4 *)(iVar4 + 0x14),ppppuVar6,uStack_60);
  if (iVar4 != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x20);
    ppppuVar6 = (undefined4 ****)apppuStack_50[0];
    if (uStack_3c < 0x10) {
      ppppuVar6 = apppuStack_50;
    }
    iVar4 = fn_8260D428(iVar4 + 4,0,*(undefined4 *)(iVar4 + 0x14),ppppuVar6,uStack_40);
    if (iVar4 != 0) {
      fVar1 = *param_2;
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x230) + 0x80U & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      iVar4 = *(int *)(param_1 + 8);
      puVar3 = (undefined4 *)((int)afStack_80 + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      if (fVar1 <= afStack_80[0]) {
        ppppuVar6 = (undefined4 ****)apppuStack_50[0];
        if (uStack_3c < 0x10) {
          ppppuVar6 = apppuStack_50;
        }
      }
      else {
        ppppuVar6 = (undefined4 ****)apppuStack_70[0];
        if (uStack_5c < 0x10) {
          ppppuVar6 = apppuStack_70;
        }
      }
      fn_822C72E0(*(undefined4 *)(iVar4 + 0x20),ppppuVar6);
    }
  }
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x20);
  if (uStack_5c < 0x10) {
    apppuStack_70[0] = apppuStack_70;
  }
  iVar4 = fn_8260D428(iVar4 + 4,0,*(undefined4 *)(iVar4 + 0x14),apppuStack_70[0],uStack_60);
  if (iVar4 == 0) {
    fVar1 = *param_2;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x230) + 0x80U & 0xfffffff0);
    uVar9 = puVar2[1];
    uVar10 = puVar2[2];
    uVar11 = puVar2[3];
    puVar3 = (undefined4 *)((int)afStack_80 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    if (afStack_80[0] <= fVar1) goto LAB_823366cc;
LAB_82336724:
    uVar5 = 1;
  }
  else {
LAB_823366cc:
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x20);
    if (uStack_3c < 0x10) {
      apppuStack_50[0] = apppuStack_50;
    }
    iVar4 = fn_8260D428(iVar4 + 4,0,*(undefined4 *)(iVar4 + 0x14),apppuStack_50[0],uStack_40);
    if (iVar4 == 0) {
      fVar1 = *param_2;
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x230) + 0x80U & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)((int)afStack_80 + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      if (afStack_80[0] < fVar1) goto LAB_82336724;
    }
    uVar5 = 0;
  }
  fn_82230300(apppuStack_70,1,0);
  fn_82230300(apppuStack_50,1,0);
  return uVar5;
}

