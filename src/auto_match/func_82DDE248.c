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
extern unsigned int *auStack_270;
extern unsigned int *auStack_288;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82F68CC0();
extern unsigned int iStack_290;
extern unsigned int iStack_294;
extern unsigned int iStack_298;
extern unsigned int iStack_29c;
extern unsigned int iStack_2a0;
extern unsigned int iStack_2a4;
extern unsigned int iStack_2a8;
extern unsigned int iStack_2ac;
extern unsigned int iStack_2b0;
extern unsigned int iStack_2b8;
extern unsigned int iStack_2bc;
extern unsigned int iStack_2c0;
extern unsigned int iStack_2c8;
extern unsigned int iStack_2cc;
extern unsigned int iStack_2d0;
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_28c;


void fn_82DDE248(int param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  ulonglong in_r0;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iStack_2d0;
  int iStack_2cc;
  int iStack_2c8;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  uint uStack_28c;
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [624];
  
  bVar1 = *param_3;
  if (*(char *)(param_1 + 0x40) == '\0') {
    do {
      uVar11 = uStack_28c;
      uVar9 = (ulonglong)bVar1;
      if (0x6b < uVar9) {
switchD_82dde2a0_caseD_8:
        fn_82CEE578(auStack_288,auStack_270,0x200);
        fn_82CEDB38(auStack_288,0xffffffff82142a88);
        iVar6 = (**(code **)(*lbl_8323B464 + 0xc))
                          (lbl_8323B464,3,0x1298fedd,auStack_270,0xffffffff82142d24,0x156);
        if (iVar6 != 0) {
          trapWord(0x1f,in_r0,0x16);
        }
                    /* WARNING: Subroutine does not return */
        fn_82CED958(auStack_288);
      }
      in_r0 = (ulonglong)*(uint *)((uint)bVar1 * 4 + -0x7d221d5c);
      switch(bVar1) {
      case 0:
        goto switchD_82dde2a0_caseD_0;
      case 1:
      case 2:
      case 3:
      case 4:
        iStack_2a0 = (uint)param_3[1] + param_2[0xc] << (bVar1 & 0x3f);
        iStack_29c = (uint)param_3[2] + param_2[0xd] << (bVar1 & 0x3f);
        iStack_298 = (uint)param_3[3] + param_2[0xe] << (bVar1 & 0x3f);
        pbVar12 = param_3 + 4;
        iStack_290 = param_2[0x10] + (uint)bVar1;
        uVar11 = 0x10 - iStack_290;
        iStack_2c0 = (*(int *)(param_1 + 0x20) >> (uVar11 & 0x3f)) - iStack_2a0;
        iStack_2d0 = ((*(int *)(param_1 + 0x10) >> (uVar11 & 0x3f)) + 1) - iStack_2a0;
        iStack_2bc = (*(int *)(param_1 + 0x24) >> (uVar11 & 0x3f)) - iStack_29c;
        iStack_2b8 = (*(int *)(param_1 + 0x28) >> (uVar11 & 0x3f)) - iStack_298;
        iStack_2cc = ((*(int *)(param_1 + 0x14) >> (uVar11 & 0x3f)) + 1) - iStack_29c;
        iStack_2b0 = (*(int *)(param_1 + 0x30) >> (uVar11 & 0x3f)) - iStack_2a0;
        iStack_2a4 = (*(int *)(param_1 + 0x3c) >> (uVar11 & 0x3f)) + 1;
        iStack_2c8 = ((*(int *)(param_1 + 0x18) >> (uVar11 & 0x3f)) + 1) - iStack_298;
        iStack_2ac = (*(int *)(param_1 + 0x34) >> (uVar11 & 0x3f)) - iStack_29c;
        iStack_2a8 = (*(int *)(param_1 + 0x38) >> (uVar11 & 0x3f)) - iStack_298;
        piVar5 = param_2 + 0x11;
        iStack_294 = param_2[0xf];
        param_2 = &iStack_2d0;
        uStack_28c = *piVar5;
        break;
      case 5:
        pbVar12 = param_3 + param_3[1] + 2;
        uStack_28c = uVar11;
        break;
      case 6:
        pbVar12 = param_3 + (uint)param_3[1] * 0x100 + (uint)param_3[2] + 3;
        uStack_28c = uVar11;
        break;
      case 7:
        pbVar12 = param_3 + ((uint)param_3[1] * 0x100 + (uint)param_3[2]) * 0x100 + (uint)param_3[3]
                            + 4;
        uStack_28c = uVar11;
        break;
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
        goto switchD_82dde2a0_caseD_8;
      case 9:
        bVar1 = param_3[1];
        if (param_2 != &iStack_2d0) {
          fn_82F68CC0(&iStack_2d0,param_2,0x48);
          param_2 = &iStack_2d0;
        }
        pbVar12 = param_3 + 2;
        iStack_294 = (uint)bVar1 + iStack_294;
        break;
      case 10:
        bVar1 = param_3[1];
        bVar2 = param_3[2];
        if (param_2 != &iStack_2d0) {
          fn_82F68CC0(&iStack_2d0,param_2,0x48);
          param_2 = &iStack_2d0;
        }
        pbVar12 = param_3 + 3;
        iStack_294 = (uint)bVar1 * 0x100 + (uint)bVar2 + iStack_294;
        break;
      case 0xb:
        bVar1 = param_3[1];
        bVar2 = param_3[2];
        bVar3 = param_3[3];
        bVar4 = param_3[4];
        if (param_2 != &iStack_2d0) {
          fn_82F68CC0(&iStack_2d0,param_2,0x48);
          param_2 = &iStack_2d0;
        }
        pbVar12 = param_3 + 5;
        iStack_294 = (((uint)bVar1 * 0x100 + (uint)bVar2) * 0x100 + (uint)bVar3) * 0x100 +
                     (uint)bVar4;
        break;
      case 0x10:
      case 0x11:
      case 0x12:
        pbVar12 = param_3 + 4;
        uStack_28c = uVar11;
        if ((int)(uint)param_3[2] < *(int *)((int)((uVar9 - 0x10 & 0xffffffff) << 2) + (int)param_2)
           ) {
          pbVar12 = pbVar12 + param_3[3];
          if (*(int *)((int)((uVar9 - 0xc & 0xffffffff) << 2) + (int)param_2) <
              (int)(uint)param_3[1]) {
            fn_82DDE248(param_1,param_2,(int)pbVar12 - (uint)param_3[3]);
          }
        }
        break;
      case 0x13:
        iVar7 = (uint)param_3[1] << 1;
        iVar6 = (uint)param_3[2] << 1;
        iVar10 = param_2[10] + param_2[9];
        iVar8 = (param_2[0xb] >> 1) + param_2[0xb] + 1;
        goto LAB_82dde640;
      case 0x14:
        iVar7 = (uint)param_3[1] << 1;
        iVar6 = (uint)param_3[2] << 1;
        iVar10 = (param_2[9] - param_2[10]) + 0xff;
        iVar8 = (param_2[0xb] >> 1) + param_2[0xb] + 1;
        goto LAB_82dde640;
      case 0x15:
        iVar7 = (uint)param_3[1] << 1;
        iVar6 = (uint)param_3[2] << 1;
        iVar10 = param_2[10] + param_2[8];
        iVar8 = (param_2[0xb] >> 1) + param_2[0xb] + 1;
        goto LAB_82dde640;
      case 0x16:
        iVar7 = (uint)param_3[1] << 1;
        iVar6 = (uint)param_3[2] << 1;
        iVar10 = (param_2[8] - param_2[10]) + 0xff;
        iVar8 = (param_2[0xb] >> 1) + param_2[0xb] + 1;
        goto LAB_82dde640;
      case 0x17:
        iVar7 = (uint)param_3[1] << 1;
        iVar6 = (uint)param_3[2] << 1;
        iVar10 = param_2[9] + param_2[8];
        iVar8 = (param_2[0xb] >> 1) + param_2[0xb] + 1;
        goto LAB_82dde640;
      case 0x18:
        iVar7 = (uint)param_3[1] << 1;
        iVar6 = (uint)param_3[2] << 1;
        iVar10 = (param_2[8] - param_2[9]) + 0xff;
        iVar8 = (param_2[0xb] >> 1) + param_2[0xb] + 1;
        goto LAB_82dde640;
      case 0x19:
        iVar7 = (uint)param_3[1] * 3;
        iVar6 = (uint)param_3[2] + (uint)param_3[2] * 2;
        iVar10 = param_2[10] + param_2[9] + param_2[8];
        iVar8 = param_2[0xb] << 2;
        goto LAB_82dde640;
      case 0x1a:
        iVar6 = (uint)param_3[2] + (uint)param_3[2] * 2;
        iVar10 = (param_2[9] - param_2[10]) + param_2[8] + 0xff;
        goto LAB_82dde62c;
      case 0x1b:
        iVar6 = (uint)param_3[2] + (uint)param_3[2] * 2;
        iVar10 = (param_2[10] - param_2[9]) + param_2[8] + 0xff;
        goto LAB_82dde62c;
      case 0x1c:
        iVar6 = (uint)param_3[2] + (uint)param_3[2] * 2;
        iVar10 = ((param_2[8] - param_2[10]) - param_2[9]) + 0x1fe;
LAB_82dde62c:
        iVar7 = (uint)param_3[1] * 3;
        iVar8 = param_2[0xb] << 2;
LAB_82dde640:
        pbVar12 = param_3 + 4;
        uStack_28c = uVar11;
        if (iVar6 < iVar8 + iVar10) {
          pbVar12 = pbVar12 + param_3[3];
          if (iVar10 < iVar8 + iVar7) {
            fn_82DDE248(param_1,param_2,(int)pbVar12 - (uint)param_3[3]);
          }
        }
        break;
      case 0x20:
      case 0x21:
      case 0x22:
        pbVar12 = param_3 + 3;
        uStack_28c = uVar11;
        if ((int)(uint)param_3[1] < *(int *)((int)((uVar9 - 0x20 & 0xffffffff) << 2) + (int)param_2)
           ) {
          pbVar12 = pbVar12 + param_3[2];
          if (*(int *)((int)((uVar9 - 0x1c & 0xffffffff) << 2) + (int)param_2) <=
              (int)(uint)param_3[1]) {
            fn_82DDE248(param_1,param_2,(int)pbVar12 - (uint)param_3[2]);
          }
        }
        break;
      case 0x23:
      case 0x24:
      case 0x25:
        iVar6 = (uint)param_3[3] * 0x100 + (uint)param_3[4];
        if ((int)(uint)param_3[2] < *(int *)((int)((uVar9 - 0x23 & 0xffffffff) << 2) + (int)param_2)
           ) {
          iVar10 = (uint)param_3[5] * 0x100 + (uint)param_3[6];
          pbVar12 = param_3 + iVar10 + 7;
          uStack_28c = uVar11;
          if (*(int *)((int)((uVar9 - 0x1f & 0xffffffff) << 2) + (int)param_2) <
              (int)(uint)param_3[1]) {
            fn_82DDE248(param_1,param_2,pbVar12 + (iVar6 - iVar10));
          }
        }
        else {
          pbVar12 = param_3 + iVar6 + 7;
          uStack_28c = uVar11;
        }
        break;
      case 0x26:
      case 0x27:
      case 0x28:
        if ((*(int *)((int)((uVar9 - 0x26 & 0xffffffff) << 2) + (int)param_2) <
             (int)(uint)param_3[1]) ||
           ((int)(uint)param_3[2] <=
            *(int *)((int)((uVar9 - 0x22 & 0xffffffff) << 2) + (int)param_2)))
        goto switchD_82dde2a0_caseD_0;
        pbVar12 = param_3 + 3;
        uStack_28c = uVar11;
        break;
      case 0x29:
      case 0x2a:
      case 0x2b:
        if ((*(int *)((int)((uVar9 - 0x25 & 0xffffffff) << 2) + param_1) <
             (int)(((uint)param_3[2] + (uint)param_3[1] * 0x100) * 0x100 + (uint)param_3[3])) ||
           ((int)(((uint)param_3[5] + (uint)param_3[4] * 0x100) * 0x100 + (uint)param_3[6]) <
            *(int *)((int)((uVar9 - 0x21 & 0xffffffff) << 2) + param_1)))
        goto switchD_82dde2a0_caseD_0;
        pbVar12 = param_3 + 7;
        uStack_28c = uVar11;
        break;
      default:
        *(undefined1 *)(param_1 + 0x40) = 1;
        goto switchD_82dde2a0_caseD_0;
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
        pbVar12 = param_3 + 2;
        *(uint *)(auStack_288 + (int)((uVar9 - 0x60 & 0xffffffff) << 2) + -4) = (uint)param_3[1];
        goto LAB_82ddeae4;
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
        pbVar12 = param_3 + 3;
        *(uint *)(auStack_288 + (int)((uVar9 - 100 & 0xffffffff) << 2) + -4) =
             (uint)param_3[1] * 0x100 + (uint)param_3[2];
        goto LAB_82ddeae4;
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
        pbVar12 = param_3 + 5;
        *(uint *)(auStack_288 + (int)((uVar9 - 0x68 & 0xffffffff) << 2) + -4) =
             (((uint)param_3[1] * 0x100 + (uint)param_3[2]) * 0x100 + (uint)param_3[3]) * 0x100 +
             (uint)param_3[4];
LAB_82ddeae4:
        uStack_28c = uVar11;
        if (param_2 != &iStack_2d0) {
          fn_82F68CC0(&iStack_2d0,param_2,0x48);
          param_2 = &iStack_2d0;
          uStack_28c = uVar11;
        }
      }
      bVar1 = *pbVar12;
      param_3 = pbVar12;
    } while (*(char *)(param_1 + 0x40) == '\0');
  }
  else {
switchD_82dde2a0_caseD_0:;}
  return;
}

