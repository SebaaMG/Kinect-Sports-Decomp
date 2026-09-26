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
extern unsigned int *auStack_250;
extern unsigned int *auStack_260;
extern unsigned int *auStack_26c;
extern char cRam8323e3e4;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_830B1CB0();
extern unsigned int iStack_270;
extern unsigned int iStack_274;
extern unsigned int iStack_278;
extern unsigned int iStack_27c;
extern unsigned int iStack_280;
extern unsigned int iStack_288;
extern unsigned int iStack_28c;
extern unsigned int iStack_290;
extern unsigned int iStack_298;
extern unsigned int iStack_29c;
extern unsigned int iStack_2a0;
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_2a8;


void fn_82DCA2F0(int *param_1,int *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulonglong in_r0;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  longlong lVar12;
  undefined8 uStack_2a8;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int iStack_270;
  uint auStack_26c [3];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [592];
  
  if ((cRam8323e3e4 == '\0') && (fn_830B1CB0(0xffffffff8323e3e4), cRam8323e3e4 == '\0')) {
switchD_82dca368_caseD_0:;}
  else {
LAB_82dca348:
    pbVar11 = param_3;
    bVar1 = *pbVar11;
    uVar9 = (ulonglong)bVar1;
    if (0x70 < uVar9) {
switchD_82dca368_caseD_8:
      fn_82CEE578(auStack_260,auStack_250,0x200);
      fn_82CEDB38(auStack_260,0xffffffff82142a88);
      iVar4 = (**(code **)(*lbl_8323B464 + 0xc))
                        (lbl_8323B464,3,0x1298fedd,auStack_250,0xffffffff82142b1c,0x1cb);
      if (iVar4 != 0) {
        trapWord(0x1f,in_r0,0x16);
      }
                    /* WARNING: Subroutine does not return */
      fn_82CED958(auStack_260);
    }
    in_r0 = (ulonglong)*(uint *)((uint)bVar1 * 4 + -0x7d235c94);
    switch(bVar1) {
    case 0:
      goto switchD_82dca368_caseD_0;
    case 1:
    case 2:
    case 3:
    case 4:
      iStack_280 = (uint)pbVar11[1] + param_2[8] << (bVar1 & 0x3f);
      iStack_27c = (uint)pbVar11[2] + param_2[9] << (bVar1 & 0x3f);
      iStack_278 = (uint)pbVar11[3] + param_2[10] << (bVar1 & 0x3f);
      iStack_270 = param_2[0xc] + (uint)bVar1;
      uVar10 = 0x10 - iStack_270;
      iStack_290 = (param_1[8] >> (uVar10 & 0x3f)) - iStack_280;
      iStack_28c = (param_1[9] >> (uVar10 & 0x3f)) - iStack_27c;
      iStack_288 = (param_1[10] >> (uVar10 & 0x3f)) - iStack_278;
      iStack_2a0 = ((param_1[4] >> (uVar10 & 0x3f)) - iStack_280) + 1;
      iStack_29c = ((param_1[5] >> (uVar10 & 0x3f)) - iStack_27c) + 1;
      iStack_298 = ((param_1[6] >> (uVar10 & 0x3f)) - iStack_278) + 1;
      auStack_26c[0] = param_2[0xd];
      iStack_274 = param_2[0xb];
      param_2 = &iStack_2a0;
      param_3 = pbVar11 + 4;
      goto LAB_82dca348;
    case 5:
      param_3 = pbVar11 + pbVar11[1] + 2;
      goto LAB_82dca348;
    case 6:
      param_3 = pbVar11 + (uint)pbVar11[1] * 0x100 + (uint)pbVar11[2] + 3;
      goto LAB_82dca348;
    case 7:
      param_3 = pbVar11 + ((uint)pbVar11[1] * 0x100 + (uint)pbVar11[2]) * 0x100 + (uint)pbVar11[3] +
                          4;
      goto LAB_82dca348;
    case 8:
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
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      goto switchD_82dca368_caseD_8;
    case 9:
      bVar1 = pbVar11[1];
      if (param_2 != &iStack_2a0) {
        puVar8 = &uStack_2a8;
        param_2 = param_2 + -2;
        lVar12 = 8;
        do {
          param_2 = param_2 + 2;
          puVar8 = puVar8 + 1;
          *puVar8 = *(undefined8 *)param_2;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        param_2 = &iStack_2a0;
      }
      iStack_274 = (uint)bVar1 + iStack_274;
      param_3 = pbVar11 + 2;
      goto LAB_82dca348;
    case 10:
      bVar1 = pbVar11[1];
      bVar2 = pbVar11[2];
      if (param_2 != &iStack_2a0) {
        puVar8 = &uStack_2a8;
        param_2 = param_2 + -2;
        lVar12 = 8;
        do {
          param_2 = param_2 + 2;
          puVar8 = puVar8 + 1;
          *puVar8 = *(undefined8 *)param_2;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        param_2 = &iStack_2a0;
      }
      iStack_274 = (uint)bVar1 * 0x100 + (uint)bVar2 + iStack_274;
      param_3 = pbVar11 + 3;
      goto LAB_82dca348;
    case 0xb:
      iStack_274 = (((uint)pbVar11[1] * 0x100 + (uint)pbVar11[2]) * 0x100 + (uint)pbVar11[3]) *
                   0x100 + (uint)pbVar11[4];
      if (param_2 != &iStack_2a0) {
        puVar8 = &uStack_2a8;
        param_2 = param_2 + -2;
        lVar12 = 8;
        do {
          param_2 = param_2 + 2;
          puVar8 = puVar8 + 1;
          *puVar8 = *(undefined8 *)param_2;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        param_2 = &iStack_2a0;
      }
    case 0xd:
      param_3 = pbVar11 + 5;
      goto LAB_82dca348;
    case 0xc:
      param_4 = (uint)*(ushort *)(pbVar11 + 1) * 0x200;
      param_3 = (byte *)(*(int *)(param_1[0xc] + 0x20) + param_4);
      goto LAB_82dca348;
    case 0x10:
    case 0x11:
    case 0x12:
      iVar4 = *(int *)((int)((uVar9 - 0xc & 0xffffffff) << 2) + (int)param_2);
      if ((int)(uint)pbVar11[2] < *(int *)((int)((uVar9 - 0x10 & 0xffffffff) << 2) + (int)param_2))
      {
        param_3 = pbVar11 + 4 + pbVar11[3];
        if (iVar4 < (int)(uint)pbVar11[1]) {
          fn_82DCA2F0(param_1,param_2,(int)param_3 - (uint)pbVar11[3],param_4);
        }
      }
      else {
        param_3 = pbVar11 + 4;
        if ((int)(uint)pbVar11[1] <= iVar4) {
          return;
        }
      }
      goto LAB_82dca348;
    case 0x13:
      iVar7 = param_2[6] + param_2[5];
      iVar4 = (uint)pbVar11[1] << 1;
      iVar5 = (uint)pbVar11[2] << 1;
      iVar6 = param_2[2] + param_2[1];
      break;
    case 0x14:
      iVar4 = (uint)pbVar11[1] * 2 + -0xff;
      iVar7 = param_2[5] - param_2[2];
      iVar5 = (uint)pbVar11[2] * 2 + -0xff;
      iVar6 = param_2[1] - param_2[6];
      break;
    case 0x15:
      iVar7 = param_2[6] + param_2[4];
      iVar4 = (uint)pbVar11[1] << 1;
      iVar5 = (uint)pbVar11[2] << 1;
      iVar6 = param_2[2] + *param_2;
      break;
    case 0x16:
      iVar4 = (uint)pbVar11[1] * 2 + -0xff;
      iVar7 = param_2[4] - param_2[2];
      iVar5 = (uint)pbVar11[2] * 2 + -0xff;
      iVar6 = *param_2 - param_2[6];
      break;
    case 0x17:
      iVar7 = param_2[5] + param_2[4];
      iVar4 = (uint)pbVar11[1] << 1;
      iVar5 = (uint)pbVar11[2] << 1;
      iVar6 = param_2[1] + *param_2;
      break;
    case 0x18:
      iVar4 = (uint)pbVar11[1] * 2 + -0xff;
      iVar7 = param_2[4] - param_2[1];
      iVar5 = (uint)pbVar11[2] * 2 + -0xff;
      iVar6 = *param_2 - param_2[5];
      break;
    case 0x19:
      iVar4 = (uint)pbVar11[1] + (uint)pbVar11[1] * 2;
      iVar5 = (uint)pbVar11[2] * 3;
      iVar7 = param_2[6] + param_2[5] + param_2[4];
      iVar6 = param_2[2] + param_2[1] + *param_2;
      break;
    case 0x1a:
      iVar7 = (param_2[5] - param_2[2]) + param_2[4];
      iVar6 = (param_2[1] - param_2[6]) + *param_2;
      iVar4 = pbVar11[1] - 0x55;
      iVar5 = pbVar11[2] - 0x55;
      goto LAB_82dca744;
    case 0x1b:
      iVar7 = (param_2[6] - param_2[1]) + param_2[4];
      iVar6 = (param_2[2] - param_2[5]) + *param_2;
      iVar4 = pbVar11[1] - 0x55;
      iVar5 = pbVar11[2] - 0x55;
      goto LAB_82dca744;
    case 0x1c:
      iVar4 = pbVar11[1] - 0xaa;
      iVar5 = pbVar11[2] - 0xaa;
      iVar7 = (param_2[4] - param_2[2]) - param_2[1];
      iVar6 = (*param_2 - param_2[6]) - param_2[5];
LAB_82dca744:
      iVar4 = iVar4 * 3;
      iVar5 = iVar5 * 3;
      break;
    case 0x20:
    case 0x21:
    case 0x22:
      param_3 = pbVar11 + 3;
      if ((int)(uint)pbVar11[1] < *(int *)((int)((uVar9 - 0x20 & 0xffffffff) << 2) + (int)param_2))
      {
        param_3 = pbVar11 + 3 + pbVar11[2];
        if (*(int *)((int)((uVar9 - 0x1c & 0xffffffff) << 2) + (int)param_2) <=
            (int)(uint)pbVar11[1]) {
          fn_82DCA2F0(param_1,param_2,(int)param_3 - (uint)pbVar11[2],param_4);
        }
      }
      goto LAB_82dca348;
    case 0x23:
    case 0x24:
    case 0x25:
      iVar5 = (uint)pbVar11[3] * 0x100 + (uint)pbVar11[4];
      iVar4 = *(int *)((int)((uVar9 - 0x1f & 0xffffffff) << 2) + (int)param_2);
      if ((int)(uint)pbVar11[2] < *(int *)((int)((uVar9 - 0x23 & 0xffffffff) << 2) + (int)param_2))
      {
        iVar6 = (uint)pbVar11[5] * 0x100 + (uint)pbVar11[6];
        param_3 = pbVar11 + iVar6 + 7;
        if (iVar4 < (int)(uint)pbVar11[1]) {
          fn_82DCA2F0(param_1,param_2,param_3 + (iVar5 - iVar6),param_4);
        }
      }
      else {
        if ((int)(uint)pbVar11[1] <= iVar4) goto switchD_82dca368_caseD_0;
        param_3 = pbVar11 + iVar5 + 7;
      }
      goto LAB_82dca348;
    case 0x26:
    case 0x27:
    case 0x28:
      if ((*(int *)((int)((uVar9 - 0x26 & 0xffffffff) << 2) + (int)param_2) < (int)(uint)pbVar11[1])
         || ((int)(uint)pbVar11[2] <=
             *(int *)((int)((uVar9 - 0x22 & 0xffffffff) << 2) + (int)param_2)))
      goto switchD_82dca368_caseD_0;
      param_3 = pbVar11 + 3;
      goto LAB_82dca348;
    case 0x29:
    case 0x2a:
    case 0x2b:
      if ((*(int *)((int)((uVar9 - 0x25 & 0xffffffff) << 2) + (int)param_1) <
           (int)(((uint)pbVar11[1] * 0x100 + (uint)pbVar11[2]) * 0x100 + (uint)pbVar11[3])) ||
         ((int)(((uint)pbVar11[4] * 0x100 + (uint)pbVar11[5]) * 0x100 + (uint)pbVar11[6]) <
          *(int *)((int)((uVar9 - 0x21 & 0xffffffff) << 2) + (int)param_1)))
      goto switchD_82dca368_caseD_0;
      param_3 = pbVar11 + 7;
      goto LAB_82dca348;
    default:
      uVar10 = bVar1 - 0x30;
      goto LAB_82dcad90;
    case 0x50:
      uVar10 = (uint)pbVar11[1];
      goto LAB_82dcad90;
    case 0x51:
      uVar10 = (uint)pbVar11[1] * 0x100 + (uint)pbVar11[2];
      goto LAB_82dcad90;
    case 0x52:
      uVar10 = ((uint)pbVar11[1] * 0x100 + (uint)pbVar11[2]) * 0x100 + (uint)pbVar11[3];
      goto LAB_82dcad90;
    case 0x53:
      uVar10 = (((uint)pbVar11[1] * 0x100 + (uint)pbVar11[2]) * 0x100 + (uint)pbVar11[3]) * 0x100 +
               (uint)pbVar11[4];
LAB_82dcad90:
      iVar4 = param_2[0xb];
      uVar3 = param_1[0xd];
      param_1 = (int *)*param_1;
      iVar5 = fn_82CE5410();
      if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_1,4);
      }
      iVar5 = param_1[1];
      param_1[1] = iVar5 + 1;
      *(uint *)(iVar5 * 4 + *param_1) = (param_4 >> 9) << 8 & uVar3 | iVar4 + uVar10;
      goto switchD_82dca368_caseD_0;
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
      param_3 = pbVar11 + 2;
      *(uint *)((int)auStack_26c + (int)((uVar9 - 0x60 & 0xffffffff) << 2)) = (uint)pbVar11[1];
      goto LAB_82dcac8c;
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
      param_3 = pbVar11 + 3;
      *(uint *)((int)auStack_26c + (int)((uVar9 - 100 & 0xffffffff) << 2)) =
           (uint)pbVar11[1] * 0x100 + (uint)pbVar11[2];
      goto LAB_82dcac8c;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      param_3 = pbVar11 + 5;
      *(uint *)((int)auStack_26c + (int)((uVar9 - 0x68 & 0xffffffff) << 2)) =
           (((uint)pbVar11[1] * 0x100 + (uint)pbVar11[2]) * 0x100 + (uint)pbVar11[3]) * 0x100 +
           (uint)pbVar11[4];
LAB_82dcac8c:
      if (param_2 != &iStack_2a0) {
        puVar8 = &uStack_2a8;
        param_2 = param_2 + -2;
        lVar12 = 8;
        do {
          param_2 = param_2 + 2;
          puVar8 = puVar8 + 1;
          *puVar8 = *(undefined8 *)param_2;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        param_2 = &iStack_2a0;
      }
      goto LAB_82dca348;
    case 0x70:
      param_4 = (((uint)pbVar11[1] * 0x100 + (uint)pbVar11[2]) * 0x100 + (uint)pbVar11[3]) * 0x100 +
                (uint)pbVar11[4];
      param_3 = (byte *)(*(int *)(param_1[0xc] + 0x20) + param_4);
      goto LAB_82dca348;
    }
    param_3 = pbVar11 + 4;
    if (iVar5 < iVar6) {
      bVar1 = pbVar11[3];
      if (iVar7 < iVar4) {
        fn_82DCA2F0(param_1,param_2,param_3,param_4);
        param_3 = param_3 + bVar1;
      }
      else {
        param_3 = param_3 + bVar1;
      }
      goto LAB_82dca348;
    }
    if (iVar7 < iVar4) goto LAB_82dca348;
  }
  return;
}

