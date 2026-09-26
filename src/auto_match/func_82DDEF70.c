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
extern unsigned int *auStack_240;
extern unsigned int *auStack_258;
extern char cRam8323e419;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_830B1CB0();
extern unsigned int iStack_264;
extern unsigned int iStack_268;
extern unsigned int iStack_26c;
extern unsigned int iStack_270;
extern unsigned int iStack_274;
extern unsigned int iStack_278;
extern unsigned int iStack_27c;
extern unsigned int iStack_280;
extern unsigned int iStack_284;
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;


void fn_82DDEF70(int *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong in_r0;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  byte *pbVar10;
  longlong lVar11;
  int iStack_284;
  int iStack_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  uint uStack_260;
  uint uStack_25c;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [576];
  
  if ((cRam8323e419 == '\0') && (fn_830B1CB0(0xffffffff8323e419), cRam8323e419 == '\0')) {
switchD_82ddefe4_caseD_0:
    return;
  }
LAB_82ddefc4:
  pbVar10 = param_3;
  bVar1 = *pbVar10;
  uVar8 = (ulonglong)bVar1;
  if (0x6b < uVar8) {
switchD_82ddefe4_caseD_8:
    fn_82CEE578(auStack_258,auStack_240,0x200);
    fn_82CEDB38(auStack_258,0xffffffff82142a88);
    iVar3 = (**(code **)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x1298fedd,auStack_240,0xffffffff82142d64,0x124);
    if (iVar3 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_258);
  }
  in_r0 = (ulonglong)*(uint *)((uint)bVar1 * 4 + -0x7d221018);
  switch(bVar1) {
  case 0:
    goto switchD_82ddefe4_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    uStack_260 = param_2[8] - (uint)bVar1;
    iStack_274 = (param_1[7] >> (uStack_260 & 0x3f)) + 1;
    iStack_270 = (uint)pbVar10[1] + param_2[4] << (bVar1 & 0x3f);
    iStack_280 = (param_1[4] >> (uStack_260 & 0x3f)) - iStack_270;
    iStack_26c = (uint)pbVar10[2] + param_2[5] << (bVar1 & 0x3f);
    iStack_27c = (param_1[5] >> (uStack_260 & 0x3f)) - iStack_26c;
    iStack_268 = (uint)pbVar10[3] + param_2[6] << (bVar1 & 0x3f);
    iStack_278 = (param_1[6] >> (uStack_260 & 0x3f)) - iStack_268;
    iStack_264 = param_2[7];
    uStack_25c = param_2[9];
    param_2 = &iStack_280;
    param_3 = pbVar10 + 4;
    goto LAB_82ddefc4;
  case 5:
    param_3 = pbVar10 + pbVar10[1] + 2;
    goto LAB_82ddefc4;
  case 6:
    param_3 = pbVar10 + (uint)pbVar10[1] * 0x100 + (uint)pbVar10[2] + 3;
    goto LAB_82ddefc4;
  case 7:
    param_3 = pbVar10 + ((uint)pbVar10[1] * 0x100 + (uint)pbVar10[2]) * 0x100 + (uint)pbVar10[3] + 4
    ;
    goto LAB_82ddefc4;
  case 8:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    goto switchD_82ddefe4_caseD_8;
  case 9:
    bVar1 = pbVar10[1];
    if (param_2 != &iStack_280) {
      piVar7 = &iStack_284;
      param_2 = param_2 + -1;
      lVar11 = 10;
      do {
        param_2 = param_2 + 1;
        piVar7 = piVar7 + 1;
        *piVar7 = *param_2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      param_2 = &iStack_280;
    }
    iStack_264 = (uint)bVar1 + iStack_264;
    param_3 = pbVar10 + 2;
    goto LAB_82ddefc4;
  case 10:
    bVar1 = pbVar10[1];
    bVar2 = pbVar10[2];
    if (param_2 != &iStack_280) {
      piVar7 = &iStack_284;
      param_2 = param_2 + -1;
      lVar11 = 10;
      do {
        param_2 = param_2 + 1;
        piVar7 = piVar7 + 1;
        *piVar7 = *param_2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      param_2 = &iStack_280;
    }
    iStack_264 = (uint)bVar1 * 0x100 + (uint)bVar2 + iStack_264;
    param_3 = pbVar10 + 3;
    goto LAB_82ddefc4;
  case 0xb:
    iStack_264 = (((uint)pbVar10[1] * 0x100 + (uint)pbVar10[2]) * 0x100 + (uint)pbVar10[3]) * 0x100
                 + (uint)pbVar10[4];
    if (param_2 != &iStack_280) {
      piVar7 = &iStack_284;
      param_2 = param_2 + -1;
      lVar11 = 10;
      do {
        param_2 = param_2 + 1;
        piVar7 = piVar7 + 1;
        *piVar7 = *param_2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      param_2 = &iStack_280;
    }
    param_3 = pbVar10 + 5;
    goto LAB_82ddefc4;
  case 0x10:
  case 0x11:
  case 0x12:
    uVar5 = (uint)pbVar10[1];
    uVar9 = (uint)pbVar10[2];
    iVar3 = param_2[3];
    iVar4 = *(int *)((int)((uVar8 - 0x10 & 0xffffffff) << 2) + (int)param_2);
    break;
  case 0x13:
    uVar5 = (uint)pbVar10[1] << 1;
    uVar9 = (uint)pbVar10[2] << 1;
    iVar4 = param_2[2] + param_2[1];
    iVar3 = (param_2[3] >> 1) + param_2[3] + 1;
    break;
  case 0x14:
    uVar5 = (uint)pbVar10[1] << 1;
    uVar9 = (uint)pbVar10[2] << 1;
    iVar4 = (param_2[1] - param_2[2]) + 0xff;
    iVar3 = (param_2[3] >> 1) + param_2[3] + 1;
    break;
  case 0x15:
    uVar5 = (uint)pbVar10[1] << 1;
    uVar9 = (uint)pbVar10[2] << 1;
    iVar4 = param_2[2] + *param_2;
    iVar3 = (param_2[3] >> 1) + param_2[3] + 1;
    break;
  case 0x16:
    uVar5 = (uint)pbVar10[1] << 1;
    uVar9 = (uint)pbVar10[2] << 1;
    iVar4 = (*param_2 - param_2[2]) + 0xff;
    iVar3 = (param_2[3] >> 1) + param_2[3] + 1;
    break;
  case 0x17:
    uVar5 = (uint)pbVar10[1] << 1;
    uVar9 = (uint)pbVar10[2] << 1;
    iVar4 = param_2[1] + *param_2;
    iVar3 = (param_2[3] >> 1) + param_2[3] + 1;
    break;
  case 0x18:
    uVar5 = (uint)pbVar10[1] << 1;
    uVar9 = (uint)pbVar10[2] << 1;
    iVar4 = (*param_2 - param_2[1]) + 0xff;
    iVar3 = (param_2[3] >> 1) + param_2[3] + 1;
    break;
  case 0x19:
    uVar5 = (uint)pbVar10[1] * 3;
    uVar9 = (uint)pbVar10[2] + (uint)pbVar10[2] * 2;
    iVar4 = param_2[2] + param_2[1] + *param_2;
    iVar3 = param_2[3] << 2;
    break;
  case 0x1a:
    uVar5 = (uint)pbVar10[1] * 3;
    uVar9 = (uint)pbVar10[2] + (uint)pbVar10[2] * 2;
    iVar4 = (param_2[1] - param_2[2]) + *param_2 + 0xff;
    iVar3 = param_2[3] << 2;
    break;
  case 0x1b:
    uVar5 = (uint)pbVar10[1] * 3;
    uVar9 = (uint)pbVar10[2] + (uint)pbVar10[2] * 2;
    iVar4 = (param_2[2] - param_2[1]) + *param_2 + 0xff;
    iVar3 = param_2[3] << 2;
    break;
  case 0x1c:
    uVar5 = (uint)pbVar10[1] * 3;
    uVar9 = (uint)pbVar10[2] + (uint)pbVar10[2] * 2;
    iVar4 = ((*param_2 - param_2[2]) - param_2[1]) + 0x1fe;
    iVar3 = param_2[3] << 2;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    iVar3 = *(int *)((int)((uVar8 - 0x20 & 0xffffffff) << 2) + (int)param_2);
    param_3 = pbVar10 + 3;
    if ((int)(uint)pbVar10[1] <= param_2[3] + iVar3) {
      param_3 = pbVar10 + 3 + pbVar10[2];
      if (iVar3 <= (int)(param_2[3] + (uint)pbVar10[1] + 1)) {
        fn_82DDEF70(param_1,param_2,(int)param_3 - (uint)pbVar10[2]);
      }
    }
    goto LAB_82ddefc4;
  case 0x23:
  case 0x24:
  case 0x25:
    iVar4 = (uint)pbVar10[3] * 0x100 + (uint)pbVar10[4];
    iVar3 = *(int *)((int)((uVar8 - 0x23 & 0xffffffff) << 2) + (int)param_2);
    if (param_2[3] + iVar3 < (int)(uint)pbVar10[2]) {
      param_3 = pbVar10 + iVar4 + 7;
    }
    else {
      iVar6 = (uint)pbVar10[5] * 0x100 + (uint)pbVar10[6];
      param_3 = pbVar10 + iVar6 + 7;
      if (iVar3 <= (int)(param_2[3] + (uint)pbVar10[1])) {
        fn_82DDEF70(param_1,param_2,param_3 + (iVar4 - iVar6));
      }
    }
    goto LAB_82ddefc4;
  case 0x26:
  case 0x27:
  case 0x28:
    iVar3 = *(int *)((int)((uVar8 - 0x26 & 0xffffffff) << 2) + (int)param_2);
    if (param_2[3] + iVar3 < (int)(uint)pbVar10[1]) {
      return;
    }
    if ((int)((uint)pbVar10[2] + param_2[3]) < iVar3) {
      return;
    }
    param_3 = pbVar10 + 3;
    goto LAB_82ddefc4;
  case 0x29:
  case 0x2a:
  case 0x2b:
    iVar3 = *(int *)((int)((uVar8 - 0x25 & 0xffffffff) << 2) + (int)param_1);
    if (param_1[7] + iVar3 <
        (int)(((uint)pbVar10[1] * 0x100 + (uint)pbVar10[2]) * 0x100 + (uint)pbVar10[3])) {
      return;
    }
    if ((int)(((uint)pbVar10[4] * 0x100 + (uint)pbVar10[5]) * 0x100 + (uint)pbVar10[6] + param_1[7])
        < iVar3) {
      return;
    }
    param_3 = pbVar10 + 7;
    goto LAB_82ddefc4;
  default:
    uVar9 = bVar1 - 0x30;
    goto LAB_82ddf8d8;
  case 0x50:
    uVar9 = (uint)pbVar10[1];
    goto LAB_82ddf8d8;
  case 0x51:
    uVar9 = (uint)pbVar10[1] * 0x100 + (uint)pbVar10[2];
    goto LAB_82ddf8d8;
  case 0x52:
    uVar9 = ((uint)pbVar10[1] * 0x100 + (uint)pbVar10[2]) * 0x100 + (uint)pbVar10[3];
    goto LAB_82ddf8d8;
  case 0x53:
    uVar9 = (((uint)pbVar10[1] * 0x100 + (uint)pbVar10[2]) * 0x100 + (uint)pbVar10[3]) * 0x100 +
            (uint)pbVar10[4];
LAB_82ddf8d8:
    iVar3 = param_2[7];
    param_1 = (int *)*param_1;
    iVar4 = fn_82CE5410();
    if (param_1[1] != (param_1[2] & 0x3fffffffU)) {
      iVar4 = param_1[1];
      param_1[1] = iVar4 + 1;
      *(uint *)(iVar4 * 4 + *param_1) = iVar3 + uVar9;
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_1,4);
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    param_3 = pbVar10 + 2;
    *(uint *)(auStack_258 + (int)((uVar8 - 0x60 & 0xffffffff) << 2) + -4) = (uint)pbVar10[1];
    goto LAB_82ddf7d4;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    param_3 = pbVar10 + 3;
    *(uint *)(auStack_258 + (int)((uVar8 - 100 & 0xffffffff) << 2) + -4) =
         (uint)pbVar10[1] * 0x100 + (uint)pbVar10[2];
    goto LAB_82ddf7d4;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    param_3 = pbVar10 + 5;
    *(uint *)(auStack_258 + (int)((uVar8 - 0x68 & 0xffffffff) << 2) + -4) =
         (((uint)pbVar10[1] * 0x100 + (uint)pbVar10[2]) * 0x100 + (uint)pbVar10[3]) * 0x100 +
         (uint)pbVar10[4];
LAB_82ddf7d4:
    if (param_2 != &iStack_280) {
      piVar7 = &iStack_284;
      param_2 = param_2 + -1;
      lVar11 = 10;
      do {
        param_2 = param_2 + 1;
        piVar7 = piVar7 + 1;
        *piVar7 = *param_2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      param_2 = &iStack_280;
    }
    goto LAB_82ddefc4;
  }
  param_3 = pbVar10 + 4;
  if ((int)uVar9 <= iVar3 + iVar4) {
    param_3 = pbVar10 + 4 + pbVar10[3];
    if (iVar4 <= (int)(iVar3 + uVar5)) {
      fn_82DDEF70(param_1,param_2,(int)param_3 - (uint)pbVar10[3]);
    }
  }
  goto LAB_82ddefc4;
}

