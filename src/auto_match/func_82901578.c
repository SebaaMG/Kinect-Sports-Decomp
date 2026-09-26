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
extern unsigned int *auStack_c40;
extern unsigned int *auStack_c58;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82897B18();
extern int fn_828F0170();
extern int fn_828F48A8();
extern int fn_828F48D8();
extern int fn_828F5D48();
extern int fn_828F8E78();
extern int fn_828FA8D8();
extern int fn_828FAB00();
extern int fn_828FC7D8();
extern int fn_828FCEB8();
extern int fn_828FCF88();
extern int fn_828FDF18();
extern int fn_828FE958();
extern int fn_828FED80();
extern int fn_828FF198();
extern int fn_828FFA80();
extern int fn_82900D80();
extern int fn_8293F7D8();
extern int fn_82F691F0();
extern unsigned int iStack_c54;
extern unsigned int iStack_c5c;
extern unsigned int uStack_c60;


longlong fn_82901578(int *param_1,undefined8 param_2,ulonglong param_3,int param_4,
                      undefined4 *param_5,undefined8 param_6)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar10;
  char *pcVar11;
  ulonglong uVar9;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  int *piVar15;
  uint uStack_c60;
  int iStack_c5c;
  undefined1 auStack_c58 [4];
  int iStack_c54;
  undefined1 auStack_c40 [3136];
  
  if (((param_3 & 0xffffffffffe5ff3c) != 0) || (param_5 == (undefined4 *)0x0)) {
    return -0x7789f794;
  }
  *param_5 = 0;
  fn_8265C990(param_1[0x17],0x24810000);
  iVar4 = param_1[0x1f];
  if (iVar4 != 0) {
    fn_828FCF88(iVar4);
    fn_8265C990(iVar4,0x24810000);
  }
  param_1[1] = (int)param_2;
  param_1[0xf] = (int)param_3;
  param_1[2] = 0;
  param_1[0xc] = 0;
  *param_1 = (int)param_2 + 0x18;
  param_1[0xd] = 0;
  puVar14 = (uint *)(param_1 + 0x1c);
  param_1[0x17] = 0;
  piVar13 = param_1 + 0x1d;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xe] = -1;
  param_1[0x1e] = 0;
  fn_828F48A8(param_2,&iStack_c5c,0);
  if (iStack_c5c == 0) {
    fn_828F48D8(param_1[1],puVar14,piVar13);
  }
  lVar3 = fn_828F5D48(param_1[1],2);
  if ((int)lVar3 < 0) {
    return lVar3;
  }
  fn_82900D80(param_1);
  piVar15 = param_1 + 4;
  if ((param_1[4] == 9) && (iVar4 = fn_828F0170(param_1[6],1,auStack_c58), -1 < iVar4)) {
    *piVar15 = 0;
    param_1[6] = iStack_c54;
  }
  if (*piVar15 == 9) {
    pcVar11 = (char *)param_1[6];
    pcVar8 = "xvs_3_0";
    pcVar10 = pcVar11;
    do {
      cVar1 = *pcVar10;
      cVar2 = *pcVar8;
      if (cVar1 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      pcVar10 = "xps_3_0";
      do {
        cVar1 = *pcVar11;
        cVar2 = *pcVar10;
        if (cVar1 == '\0') break;
        pcVar11 = pcVar11 + 1;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) goto LAB_82901798;
    }
    if ((param_3 & 0x100000) == 0) {
      lVar3 = fn_8293F7D8(param_1[1],piVar15,param_3,*param_1,param_5,param_6);
      if (-1 < lVar3) goto LAB_82901d9c;
    }
    else {
      fn_828FFA80(param_1,0xffffffff8202d540);
      lVar3 = -0x7fffbffb;
    }
  }
  else {
LAB_82901798:
    if (*piVar15 == 0) {
      if (param_1[6] == -0x1ff00) {
        fn_828FAB00(*param_1,piVar15,0x7df,0xffffffff8202d4f8);
        param_1[6] = -0x1feff;
      }
      if (param_1[6] == -0xff00) {
        fn_828FAB00(*param_1,piVar15,0x7df,0xffffffff8202d4cc);
        param_1[6] = -0xfeff;
      }
      if (param_1[6] == -0xfdfe) {
        param_1[6] = -0xfdff;
      }
      if ((((param_3 & 0x40) != 0) && ((param_1[6] & 0xffff0000U) == 0xfffe0000)) ||
         (((param_3 & 0x80) != 0 && ((param_1[6] & 0xffff0000U) == 0xffff0000)))) {
        param_1[0xf] = param_1[0xf] | 1;
      }
      uVar9 = (ulonglong)(uint)param_1[6];
      if (uVar9 < 0xffff0104) {
        if (uVar9 == 0xffff0103) {
          iVar4 = 8;
          goto LAB_829019c8;
        }
        if (0xfffe0300 < uVar9) {
          uVar9 = uVar9 + 0x1fc01;
          if (uVar9 == 0) {
            iVar4 = 5;
          }
          else if ((uVar9 & 0xffffffff) == 0xfd02) {
            iVar4 = 6;
          }
          else {
            if ((uVar9 & 0xffffffff) != 0xfd03) {
LAB_82901978:
              uVar5 = 0x7d2;
              uVar7 = 0xffffffff8202d4b0;
              goto LAB_82901984;
            }
            iVar4 = 7;
          }
          goto LAB_829019c8;
        }
        if (uVar9 == 0xfffe0300) {
          iVar4 = 4;
          goto LAB_829019c8;
        }
        uVar9 = uVar9 + 0x1feff;
        if (uVar9 == 0) {
          param_1[0xe] = 0;
        }
        else {
          if ((uVar9 & 0xffffffff) != 0xff) {
            if ((uVar9 & 0xffffffff) == 0x100) {
              iVar4 = 2;
            }
            else {
              if ((uVar9 & 0xffffffff) != 0x1fe) goto LAB_82901978;
              iVar4 = 3;
            }
            goto LAB_829019c8;
          }
          param_1[0xe] = 1;
        }
      }
      else {
        uVar9 = uVar9 + 0xfefc;
        if (uVar9 == 0) {
          iVar4 = 9;
        }
        else if ((uVar9 & 0xffffffff) == 0xfc) {
          iVar4 = 10;
        }
        else if ((uVar9 & 0xffffffff) == 0xfd) {
          iVar4 = 0xc;
        }
        else if ((uVar9 & 0xffffffff) == 0x160) {
          iVar4 = 0xb;
        }
        else if ((uVar9 & 0xffffffff) == 0x1fb) {
          iVar4 = 0xd;
        }
        else if ((uVar9 & 0xffffffff) == 0x1fc) {
          iVar4 = 0xe;
        }
        else {
          if ((uVar9 & 0xffffffff) != 0x2fb) goto LAB_82901978;
          iVar4 = 0xf;
        }
LAB_829019c8:
        param_1[0xe] = iVar4;
      }
      if (param_4 != 0) {
        param_1[0x20] = param_4;
        param_1[0xf] = param_1[0xf] | 2;
        uVar9 = fn_8265C940(0xb8,0x24810000);
        if ((uVar9 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_828FCEB8(uVar9,param_1[0xe]);
        }
        param_1[0x1f] = iVar4;
        if (iVar4 == 0) {
          return -0x7ff8fff2;
        }
        iVar4 = param_1[0xe];
        if ((iVar4 < 0) || (5 < iVar4)) {
          if ((iVar4 < 10) || (0xf < iVar4)) {
            fn_828FA8D8(*param_1,piVar15,0x7d1,0xffffffff8202d448);
            goto LAB_82901a88;
          }
          uVar12 = (uint)*(byte *)((int)param_1 + 0x1a) << 8 | 0x7fff0000;
        }
        else {
          uVar12 = (uint)*(byte *)((int)param_1 + 0x1a) << 8 | 0x7ffe0000;
        }
        param_1[6] = uVar12 | *(byte *)((int)param_1 + 0x1b);
      }
LAB_82901a88:
      if ((param_1[0xf] & 2U) == 0) {
        param_1[2] = 0;
      }
      lVar3 = fn_828FDF18(param_1,param_1[6]);
      if ((-1 < lVar3) && (lVar3 = fn_828FC7D8(param_1,piVar15), -1 < lVar3)) {
        if (param_1[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(auStack_c40,0,0xbdc);
        }
        if (param_1[0x13] != 0) goto LAB_82901bdc;
        if (*puVar14 != 0) {
          fn_828F48D8(param_1[1],&uStack_c60,0);
          uVar12 = *puVar14;
          if ((uVar12 < uStack_c60) && (uStack_c60 < uVar12 + *piVar13)) {
            *piVar13 = uStack_c60 - uVar12;
          }
        }
        if (((((param_1[0x1f] == 0) || (lVar3 = fn_828FE958(param_1), -1 < lVar3)) &&
             (((param_1[0xf] & 1U) == 0 || (lVar3 = fn_828FED80(param_1), -1 < lVar3)))) &&
            ((lVar3 = fn_828FDF18(param_1,0xffff), -1 < lVar3 &&
             (lVar3 = fn_828FC7D8(param_1,piVar15), -1 < lVar3)))) &&
           (((int *)param_1[2] == (int *)0x0 ||
            (lVar3 = (**(code **)(*(int *)param_1[2] + 0x10))(), -1 < lVar3)))) {
          iVar4 = fn_82897B18(*param_1);
          if (iVar4 != 0) goto LAB_82901bdc;
          lVar3 = fn_828FF198(param_1,param_5,param_6);
          if (-1 < lVar3) {
            lVar3 = 0;
            goto LAB_82901d9c;
          }
          switch((int)lVar3 + 0x7789f498) {
          case 0:
            lVar6 = 0x1b5b;
            uVar5 = 0xffffffff8202d3ec;
            break;
          case 1:
            lVar6 = 0x1b59;
            uVar5 = 0xffffffff8202d428;
            break;
          case 2:
            lVar6 = 0x1b5a;
            uVar5 = 0xffffffff8202d3a8;
            break;
          case 3:
            lVar6 = 7000;
            uVar5 = 0xffffffff8202d380;
            break;
          case 4:
            lVar6 = 0x1b5c;
            uVar5 = 0xffffffff8202d320;
            break;
          case 5:
            lVar6 = 0x1b5d;
            uVar5 = 0xffffffff8202d2f0;
            break;
          case 6:
            lVar6 = 0x1b5e;
            uVar5 = 0xffffffff8202d2c0;
            break;
          case 7:
            lVar6 = 0x1b5f;
            uVar5 = 0xffffffff8202d28c;
            break;
          case 8:
            lVar6 = 0x1b60;
            uVar5 = 0xffffffff8202d250;
            break;
          case 9:
            lVar6 = 0x1b61;
            uVar5 = 0xffffffff8202d218;
            break;
          case 10:
            lVar6 = 0x1b62;
            uVar5 = 0xffffffff8202d1e4;
            break;
          case 0xb:
            lVar6 = 0x1b63;
            uVar5 = 0xffffffff8202d1ac;
            break;
          default:
            uVar5 = 0xffffffff8202cfac;
            lVar6 = lVar3;
            break;
          case 0xd:
            lVar6 = 0x1b64;
            uVar5 = 0xffffffff8202d170;
            break;
          case 0xe:
          case 0x11:
          case 0x14:
            lVar6 = 0x1b65;
            uVar5 = 0xffffffff8202d134;
            break;
          case 0xf:
          case 0x15:
            lVar6 = 0x1b66;
            uVar5 = 0xffffffff8202d0f0;
            break;
          case 0x10:
          case 0x13:
            lVar6 = 0x1b64;
            uVar5 = 0xffffffff8202d0b0;
            break;
          case 0x12:
            lVar6 = 0x1b66;
            uVar5 = 0xffffffff8202d070;
            break;
          case 0x16:
            lVar6 = 0x1b67;
            uVar5 = 0xffffffff8202d040;
            break;
          case 0x17:
            lVar6 = 0x1b68;
            uVar5 = 0xffffffff8202d010;
            break;
          case 0x18:
            lVar6 = 0x1b69;
            uVar5 = 0xffffffff8202cfd8;
          }
          fn_828FA8D8(*param_1,piVar15,lVar6,uVar5);
        }
      }
    }
    else {
      uVar5 = 0x7d1;
      uVar7 = 0xffffffff8202d524;
LAB_82901984:
      fn_828FA8D8(*param_1,piVar15,uVar5,uVar7);
LAB_82901bdc:
      lVar3 = -0x7789f4a7;
    }
  }
  param_1[0x13] = 1;
LAB_82901d9c:
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  fn_828F8E78(param_1[1]);
  return lVar3;
}

