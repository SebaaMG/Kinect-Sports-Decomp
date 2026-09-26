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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_828FC450();
extern int fn_828FCDE0();
extern int fn_82958E08();
extern int fn_829641F8();
extern int fn_82964BB0();
extern int fn_82975B00();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8202C57C;
extern unsigned int lbl_8202C57E;
extern unsigned int stack0x00000000;


undefined8 fn_8295CD90(int *param_1,uint *param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar7;
  undefined8 uVar6;
  int iVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  uVar5 = ZEXT48(&stack0x00000000);
  uVar7 = param_2[0x1a];
  bVar1 = false;
  if (uVar7 == 0) {
    *param_2 = *param_2 | 0x40000000;
    uVar7 = (**(code **)(*param_1 + 0x6c))(param_1,0,0);
    param_2[0x1b] = uVar7;
    goto LAB_8295cddc;
  }
  pbVar4 = *(byte **)(uVar7 + 0x18);
  pbVar10 = pbVar4;
  if (param_1[0x57] != 0) {
    do {
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
    if (pbVar10 + (-1 - (int)pbVar4) < (byte *)0x3) goto LAB_8295cf18;
    pbVar11 = &lbl_8202C57C;
    pbVar10 = pbVar4;
    do {
      bVar2 = *pbVar11;
      bVar3 = *pbVar10;
      if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
      pbVar11 = pbVar11 + 1;
      pbVar10 = pbVar10 + 1;
    } while (pbVar11 != &lbl_8202C57E);
    if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) != 0) goto LAB_8295cf18;
    bVar1 = 4 < param_2[0x1c];
    if (bVar1) {
      fn_82975B00(param_1,uVar7,0x11bf,0xffffffff820382f4,pbVar4);
    }
    iVar8 = fn_828FC450(param_1 + 0x6e,pbVar4);
    if (iVar8 == 0) {
      uVar6 = fn_828FCDE0(param_1 + 0x6e,pbVar4,param_1[0x75],1);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      iVar8 = param_1[0x75];
      param_1[0x75] = iVar8 + 1;
    }
    else {
      iVar8 = *(int *)(iVar8 + 4);
    }
    uVar7 = (**(code **)(*param_1 + 0x6c))(param_1,0xffff,iVar8);
    param_2[0x1b] = uVar7;
    goto LAB_8295cf00;
  }
LAB_8295cf18:
  if (((param_2[0x1b] == 0xffffffff) || ((*param_2 & 0x40000000) == 0)) || (param_3 != 0)) {
    uVar7 = *(uint *)(*(int *)(param_2[1] * 4 + param_1[4]) + 4);
    if ((param_1[0x1c] & 0x1000000U) == 0) {
      if (((uVar7 & 0x10) != 0) && ((uVar7 & 0x200) == 0)) {
        uVar6 = fn_82958E08(param_1,param_2,param_1[0x3e],1,uVar5 - 0x240);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        if ((param_1[10] == 2) &&
           (iVar8 = (**(code **)(*param_1 + 0x70))(param_1,param_2[0x1b]), iVar8 == 0xb)) {
          *param_2 = *param_2 | 0x114;
          uVar6 = lbl_82005758;
          *(undefined8 *)(param_2 + 8) = lbl_82005710;
          *(undefined8 *)(param_2 + 10) = uVar6;
        }
        goto LAB_8295cf00;
      }
      if ((uVar7 & 0x20) != 0) {
        iVar8 = param_1[0x3f];
        uVar6 = 1;
        goto LAB_8295cff0;
      }
    }
    else {
      if (((uVar7 & 0x10) == 0) || ((uVar7 & 0x200) != 0)) {
        if ((uVar7 & 0x20) == 0) goto LAB_8295cddc;
        iVar8 = param_1[0x3e];
        uVar6 = 2;
LAB_8295cff0:
        uVar6 = fn_82958E08(param_1,param_2,iVar8,uVar6,uVar5 - 0x240);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
      }
      else {
        uVar6 = fn_82958E08(param_1,param_2,param_1[0x3d],2,uVar5 - 0x240);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        if ((param_2[0x1b] == 10) && (param_2[4] == 0)) {
          lVar9 = fn_829641F8(param_1,param_2);
          uVar6 = 0xffffffff820382c4;
          goto LAB_8295cf58;
        }
      }
LAB_8295cf00:
      if (bVar1) goto LAB_8295cf0c;
    }
LAB_8295cddc:
    uVar6 = 0;
  }
  else {
    fn_82964BB0(param_1,param_2,uVar5 - 0x230,0x200);
    lVar9 = uVar5 - 0x230;
    uVar6 = 0xffffffff820382e8;
LAB_8295cf58:
    fn_82975B00(param_1,param_2[0x1a],0x1196,uVar6,lVar9);
LAB_8295cf0c:
    uVar6 = 0xffffffff80004005;
  }
  return uVar6;
}

