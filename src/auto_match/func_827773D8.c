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
extern int fn_8267B890();
extern int fn_826D6630();
extern int fn_82760448();
extern int fn_82761DE8();
extern int fn_82762AE0();
extern int fn_8276CAF8();
extern int fn_827742D0();
extern int fn_82774538();
extern int fn_82774BD0();
extern int fn_82774D50();
extern int fn_82774DB8();
extern int fn_827751C0();
extern int fn_82776370();
extern int fn_82777378();
extern unsigned int iStack0000001c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a8;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_9a;
extern unsigned int uStack_9c;
extern unsigned int uStack_a2;
extern unsigned int uStack_a4;


int fn_827773D8(undefined4 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                 ulonglong param_5,ulonglong param_6,ulonglong param_7)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  int iVar7;
  char cVar9;
  int *piVar8;
  ulonglong uVar6;
  int iVar10;
  byte bVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iStack0000001c;
  int *apiStack_b0 [2];
  int iStack_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  byte bStack_a1;
  int iStack_a0;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  byte bStack_99;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar10 = (int)param_2;
  puVar13 = param_1 + 0x238;
  iStack0000001c = iVar10;
  iVar7 = fn_82774D50(puVar13,&stack0x0000001c);
  if (iVar7 == 0) {
    fn_82774538(puVar13,puVar13,&stack0x0000001c,(param_2 & 0xffffffff) >> 6 ^ param_2);
    fn_8276CAF8(param_2,param_1 + 2);
  }
  piVar12 = *(int **)(iVar10 + 0xc);
  if ((((uint)piVar12[5] >> 5 & 1) == 0) ||
     (cVar9 = (**(code **)(*piVar12 + 0x10))(piVar12,param_3,param_4), cVar9 == '\0')) {
    param_4 = 0;
  }
  bVar11 = -((param_5 & 0xff) != 0) & 2;
  bVar3 = 1 - ((param_6 & 0xff) == 0);
  uVar4 = (undefined2)param_3;
  uVar5 = (undefined1)param_4;
  bVar2 = bVar11 | bVar3 & 3;
  piVar12 = param_1 + 0x240;
  iStack_a8 = iVar10;
  uStack_a4 = uVar4;
  uStack_a2 = uVar5;
  bStack_a1 = bVar2;
  iVar7 = fn_827751C0(piVar12,&iStack_a8);
  piVar8 = (int *)(-(uint)(iVar7 != 0) & iVar7 + 8U);
  if (piVar8 != (int *)0x0) {
    piVar12 = (int *)*piVar8;
    *(int *)(*piVar12 + 4) = piVar12[1];
    *(int *)piVar12[1] = *piVar12;
    *piVar12 = param_1[0x23e];
    piVar12[1] = (int)(param_1 + 0x23e);
    *(int **)(param_1[0x23e] + 4) = piVar12;
    param_1[0x23e] = piVar12;
    if (*(char *)(param_1 + 6) != '\0') {
      *(byte *)(*piVar8 + 0xf) = *(byte *)(*piVar8 + 0xf) | 0x80;
    }
    fn_82760448(*(undefined4 *)(*piVar8 + 0x10));
    return *(int *)(*piVar8 + 0x10);
  }
  piVar8 = (int *)(**(code **)(**(int **)(iVar10 + 0xc) + 0x18))
                            (*(int **)(iVar10 + 0xc),param_3,param_4);
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  uVar1 = 0;
  if ((uint *)*piVar12 != (uint *)0x0) {
    uVar1 = *(uint *)*piVar12;
  }
  if ((uint)param_1[0x270] <= uVar1) {
    apiStack_b0[0] = (int *)param_1[0x23f];
    if ((*(byte *)((int)apiStack_b0[0] + 0xf) & 0x80) != 0) {
      if (((param_7 & 0xffffffff) != 0) && (*(char *)((int)param_1 + 0x1a) != '\0')) {
        fn_826D6630(param_7 + 0xc,0xffffffff820153a0);
      }
      iVar7 = 0;
      *(undefined1 *)((int)param_1 + 0x1a) = 0;
      goto LAB_827775d4;
    }
    iStack_a8 = apiStack_b0[0][2];
    bStack_a1 = *(byte *)((int)apiStack_b0[0] + 0xf) & 3;
    uStack_a4 = *(undefined2 *)(apiStack_b0[0] + 3);
    uStack_a2 = *(undefined1 *)((int)apiStack_b0[0] + 0xe);
    fn_82774DB8(piVar12,&iStack_a8);
    piVar14 = apiStack_b0[0];
    *(int *)(*apiStack_b0[0] + 4) = apiStack_b0[0][1];
    *(int *)apiStack_b0[0][1] = *apiStack_b0[0];
    fn_827742D0(apiStack_b0[0],0);
    *piVar14 = param_1[0x23c];
    param_1[0x23c] = piVar14;
  }
  apiStack_b0[0] = (int *)fn_82774BD0(param_1 + 0x239);
  apiStack_b0[0][2] = iVar10;
  *(undefined2 *)(apiStack_b0[0] + 3) = uVar4;
  *(undefined1 *)((int)apiStack_b0[0] + 0xe) = uVar5;
  *(byte *)((int)apiStack_b0[0] + 0xf) = bVar11 | bVar3;
  uVar6 = fn_8267B890(*param_1,0x44,0);
  if ((uVar6 & 0xffffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_82762AE0(uVar6,0xf2);
  }
  piVar14 = apiStack_b0[0] + 4;
  if (*piVar14 != 0) {
    fn_82761DE8();
  }
  *piVar14 = iVar7;
  uStack_8c = lbl_821AAD20;
  uStack_88 = lbl_821AAD20;
  uStack_84 = lbl_821AAD20;
  uStack_90 = lbl_821AAD20;
  if (*(char *)((int)piVar8 + 0x25) == '\0') {
    (**(code **)(**(int **)(iVar10 + 0xc) + 0x30))(*(int **)(iVar10 + 0xc),param_3,&uStack_90);
  }
  else {
    (**(code **)(*piVar8 + 0x14))(piVar8,&uStack_90);
  }
  fn_82776370(param_1,apiStack_b0[0][4],piVar8,&uStack_90,param_5,param_6);
  iVar7 = apiStack_b0[0][4];
  *(undefined4 *)(iVar7 + 4) = uStack_90;
  *(undefined4 *)(iVar7 + 8) = uStack_8c;
  *(undefined4 *)(iVar7 + 0xc) = uStack_88;
  *(undefined4 *)(iVar7 + 0x10) = uStack_84;
  *(byte *)(apiStack_b0[0][4] + 0x24) = *(byte *)(apiStack_b0[0][4] + 0x24) | 0x10;
  *(byte *)(apiStack_b0[0][4] + 0x24) = *(byte *)(apiStack_b0[0][4] + 0x24) | 8;
  *(undefined1 *)(apiStack_b0[0][4] + 0x25) = *(undefined1 *)((int)piVar8 + 0x25);
  *apiStack_b0[0] = param_1[0x23e];
  apiStack_b0[0][1] = (int)(param_1 + 0x23e);
  *(int **)(param_1[0x23e] + 4) = apiStack_b0[0];
  param_1[0x23e] = apiStack_b0[0];
  iStack_a0 = iVar10;
  uStack_9c = uVar4;
  uStack_9a = uVar5;
  bStack_99 = bVar2;
  fn_82777378(piVar12,&iStack_a0,apiStack_b0);
  if (*(char *)(param_1 + 6) != '\0') {
    *(byte *)((int)apiStack_b0[0] + 0xf) = *(byte *)((int)apiStack_b0[0] + 0xf) | 0x80;
  }
  fn_82760448(apiStack_b0[0][4]);
  iVar7 = apiStack_b0[0][4];
LAB_827775d4:
  fn_82761DE8(piVar8);
  return iVar7;
}

