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
extern int fn_82A6D200();
extern int fn_82A74488();
extern int fn_82A74760();
extern int fn_82A75410();
extern int fn_82A75DF8();
extern unsigned int iStack_a8;
extern unsigned int lbl_820AA320;
extern unsigned int lbl_820AA420;
extern unsigned int lbl_820AA8B8;
extern unsigned int lbl_820AA8C0;
extern unsigned int lbl_820AA8C8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82A74B48(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  
  uVar2 = *(uint *)(param_2 + 0x24);
  iVar3 = *param_1;
  iStack_a8 = ((int)uVar2 >> 8) + (uint)((int)uVar2 < 0 && (uVar2 & 0xff) != 0);
  piVar10 = param_1 + 0x38;
  uVar4 = 0;
  piVar11 = param_1 + 0x81;
switchD_82a74be4_caseD_6:
  switch(*piVar11) {
  case 1:
    param_1[0x83] = 0;
    if ((*(int *)(iVar3 + 0x250) != 0) && (param_1[0x8f] == *(int *)(param_2 + 0x1e4))) {
      *piVar11 = 0xf;
      *(code **)(iVar3 + 0x1e4) = fn_82A74760;
      uVar4 = fn_82A74760(param_1,param_2);
      return uVar4;
    }
    iVar8 = param_1[0x84];
    if ((int)uVar2 <= *(short *)(iVar3 + 0xca) + iVar8 + 1) {
LAB_82a74ff4:
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(int *)(iVar3 + 0x10) = (int)(short)iVar8;
      return uVar4;
    }
    uVar4 = fn_82A75DF8(0xffffffff820a8d98,piVar10,&uStack_ac,&uStack_b0,0);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = fn_82A6D200(piVar10,uStack_ac);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    if (uStack_b0 == lbl_820AA8B8) {
      *piVar11 = 2;
      param_1[0x8f] = param_1[0x8f] + 1;
    }
    else {
      iVar8 = uStack_b0 * 2;
      param_1[0x86] = (uint)(*(ushort *)(&lbl_820AA320 + iVar8) >> 0xc);
      param_1[0x87] = (byte)(&lbl_820AA320)[iVar8] & 0xf;
      param_1[0x88] = *(ushort *)(&lbl_820AA320 + iVar8) >> 4 & 0xf;
      param_1[0x89] = *(ushort *)(&lbl_820AA320 + iVar8) & 0xf;
      *piVar11 = 5;
      param_1[0x8f] = param_1[0x8f] + 1;
    }
    goto switchD_82a74be4_caseD_6;
  case 2:
    uVar4 = fn_82A75DF8(0xffffffff820a8f78,piVar10,&uStack_ac,&uStack_b0,0);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = fn_82A6D200(piVar10,uStack_ac);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    if (uStack_b0 != lbl_820AA8C0) {
      piVar11[param_1[0x83] + 5] = (uint)((byte)(&lbl_820AA420)[uStack_b0] >> 4);
      piVar11[param_1[0x83] + 6] = (byte)(&lbl_820AA420)[uStack_b0] & 0xf;
      iVar8 = param_1[0x83] + 2;
      param_1[0x83] = iVar8;
      goto LAB_82a74d8c;
    }
    break;
  case 3:
    uVar4 = fn_82A75DF8(0xffffffff820a9198,piVar10,&uStack_ac,&uStack_b0,0);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = fn_82A6D200(piVar10,uStack_ac);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    if (uStack_b0 == lbl_820AA8C8) {
      *piVar11 = 4;
    }
    else {
      piVar11[param_1[0x83] + 5] = uStack_b0;
      iVar8 = param_1[0x83] + 1;
      param_1[0x83] = iVar8;
      if (iVar8 == 2) {
        *piVar11 = 2;
      }
      else {
LAB_82a74d8c:
        if (iVar8 == 4) {
          *piVar11 = 5;
        }
      }
    }
    goto switchD_82a74be4_caseD_6;
  case 4:
    uVar4 = fn_82A74488(&uStack_b0,lbl_820AA8C8,piVar10,param_1,piVar11);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    piVar11[param_1[0x83] + 5] = uStack_b0;
    iVar8 = param_1[0x83] + 1;
    param_1[0x83] = iVar8;
    if (iVar8 == 2) {
      *piVar11 = 2;
      goto switchD_82a74be4_caseD_6;
    }
    if (iVar8 == 4) {
      *piVar11 = 5;
      goto switchD_82a74be4_caseD_6;
    }
    break;
  case 5:
    uVar4 = fn_82A75410(piVar10,4,&uStack_b0);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar9 = 0x80000000;
    bVar1 = param_1[0x86] != 0;
    if (bVar1) {
      uVar9 = 0x40000000;
      param_1[0x8a] = uStack_b0 >> 0x1f;
    }
    uVar5 = (uint)bVar1;
    if (param_1[0x87] != 0) {
      uVar6 = uVar9 & uStack_b0;
      uVar9 = uVar9 >> 1;
      param_1[0x8b] = uVar6 >> (0x1f - bVar1 & 0x3f);
      uVar5 = uVar5 + 1;
    }
    if (param_1[0x88] != 0) {
      uVar6 = uVar9 & uStack_b0;
      uVar9 = uVar9 >> 1;
      param_1[0x8c] = uVar6 >> (0x1f - uVar5 & 0x3f);
      uVar5 = uVar5 + 1;
    }
    if (param_1[0x89] != 0) {
      uVar6 = 0x1f - uVar5;
      uVar5 = uVar5 + 1;
      param_1[0x8d] = (uVar9 & uStack_b0) >> (uVar6 & 0x3f);
    }
    uVar4 = fn_82A6D200(piVar10,uVar5);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    param_1[0x83] = 0;
    *piVar11 = 0xe;
  default:
    goto switchD_82a74be4_caseD_6;
  case 0xe:
    if (piVar11[param_1[0x83] + 5] != 0) {
      if ((*(int *)(iVar3 + 0x250) == 0) && (iStack_a8 < param_1[0x84])) {
        param_1[0x85] = 1;
      }
      *(int *)(iVar3 + 0x10) = (int)(short)param_1[0x84];
      param_1[0x84] = 0;
      *(int *)(iVar3 + 0x14) = piVar11[param_1[0x83] + 5];
      *(int *)(iVar3 + 0x18) = piVar11[param_1[0x83] + 9] + -1;
      iVar3 = param_1[0x83];
      param_1[0x83] = iVar3 + 1;
      if (iVar3 + 1 != 4) {
        return uVar4;
      }
      if (param_1[0x85] != 0) {
        *piVar11 = 0xf;
        return uVar4;
      }
      *piVar11 = 1;
      return uVar4;
    }
    iVar7 = param_1[0x83] + 1;
    iVar8 = param_1[0x84];
    param_1[0x83] = iVar7;
    param_1[0x84] = iVar8 + 1;
    if ((*(int *)(iVar3 + 0x250) == 0) && (iStack_a8 < iVar8 + 1)) {
      param_1[0x85] = 1;
    }
    iVar8 = param_1[0x84];
    if ((int)uVar2 <= *(short *)(iVar3 + 0xca) + iVar8 + 1) goto LAB_82a74ff4;
    if (iVar7 == 4) {
      *piVar11 = (-(uint)(param_1[0x85] != 0) & 0xe) + 1;
    }
    goto switchD_82a74be4_caseD_6;
  case 0xf:
    goto switchD_82a74be4_caseD_f;
  }
  *piVar11 = 3;
  goto switchD_82a74be4_caseD_6;
switchD_82a74be4_caseD_f:
  *(code **)(iVar3 + 0x1e4) = fn_82A74760;
  uVar4 = fn_82A74760(param_1,param_2);
  return uVar4;
}

