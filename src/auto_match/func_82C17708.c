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
extern int fn_82A69BD8();
extern int fn_82A69D38();
extern int fn_82A6D378();
extern int fn_82A6E1C0();
extern int fn_82C2C380();
extern int fn_82C30098();
extern int fn_82C30370();
extern int fn_82C30660();
extern int fn_82C31808();
extern int fn_82C32738();
extern int fn_82C34630();
extern int fn_82C36898();
extern unsigned int iStack_9c;


ulonglong fn_82C17708(int *param_1,ushort *param_2,short *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  short *psVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  ulonglong uVar13;
  short sStack_a0;
  short sStack_9e;
  int iStack_9c;
  int aiStack_98 [38];
  
  uVar13 = 0;
  if (((param_1 == (int *)0x0) || (param_2 == (ushort *)0x0)) || (iVar3 = *param_1, iVar3 == 0)) {
    uVar13 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    if (param_3 != (short *)0x0) {
      *param_3 = 0;
    }
switchD_82c177a0_caseD_1:
    switch(param_1[8]) {
    case 0:
      param_1[8] = 2;
      param_1[0xd] = 2;
      if (0 < param_1[0x29]) {
        param_1[0x29] = param_1[0x29] + -1;
      }
    default:
      goto switchD_82c177a0_caseD_1;
    case 2:
      *(int *)(*param_1 + 0x1b8) = *(int *)(*param_1 + 0x1b8) + 1;
      param_1[0x36] = 0;
      *(undefined2 *)(param_1 + 0x37) = 0;
      *(undefined4 *)(iVar3 + 0x17c) = 0;
      param_1[0x48] = 0;
      if (*(int *)(*param_1 + 0xb0) == 1) {
        *(undefined2 *)(iVar3 + 0xd2) = 0;
      }
      else {
        iVar10 = *(int *)(iVar3 + 0x184);
        if (iVar10 < *(int *)(iVar3 + 0x188)) {
          *param_2 = (short)*(int *)(iVar3 + 0x188) - (short)iVar10;
          goto switchD_82c177a0_caseD_1;
        }
        uVar9 = *(uint *)(iVar3 + 0x1d4);
        if ((int)(((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0)) <= iVar10) {
          *(undefined4 *)(iVar3 + 0x188) = 0;
          *(undefined4 *)(iVar3 + 0x184) = 0;
        }
      }
      if (*(short *)(iVar3 + 0x22) != 0) {
        iVar10 = 0;
        do {
          *(undefined2 *)(iVar10 * 0x6f0 + *(int *)(iVar3 + 0x140) + 0x72) = 0;
          if (*(int *)(iVar3 + 0xb0) == 1) {
            *(undefined4 *)(iVar10 * 4 + *(int *)(iVar3 + 0x164)) = 0;
          }
          sVar12 = (short)iVar10 + 1;
          iVar10 = (int)sVar12;
        } while ((int)sVar12 < (int)(uint)*(ushort *)(iVar3 + 0x22));
      }
      param_1[8] = 3;
      goto switchD_82c177a0_caseD_1;
    case 3:
      if (*(short *)(param_1 + 4) == 0) goto LAB_82c17f78;
      uVar13 = fn_82C32738(param_1);
      if ((int)uVar13 < 0) goto LAB_82c17f90;
      if (*(short *)(iVar3 + 0x22) != 0) {
        iVar10 = 0;
        do {
          iVar11 = iVar10 * 0x6f0;
          sVar12 = (short)iVar10 + 1;
          iVar10 = (int)sVar12;
          *(undefined2 *)(iVar11 + *(int *)(iVar3 + 0x140) + 0x74) = 0;
        } while ((int)sVar12 < (int)(uint)*(ushort *)(iVar3 + 0x22));
      }
      param_1[8] = 4;
      goto switchD_82c177a0_caseD_1;
    case 4:
      if (param_1[0x36] == 0) {
        if (0 < *(short *)(iVar3 + 0x244)) {
          iVar11 = 0;
          iVar10 = 0;
          do {
            sVar12 = (short)iVar11 + 1;
            iVar11 = (int)sVar12;
            psVar6 = (short *)(iVar10 + *(int *)(iVar3 + 0x248));
            iVar10 = iVar11 << 1;
            *(undefined2 *)(*psVar6 * 0x6f0 + *(int *)(iVar3 + 0x140) + 0x70) = 0x7fff;
          } while (sVar12 < *(short *)(iVar3 + 0x244));
        }
        param_1[8] = 5;
        param_1[9] = 0;
        param_1[10] = 0;
        *(undefined2 *)((int)param_1 + 0x96) = 0;
        *(undefined2 *)(param_1 + 0x26) = 0;
      }
      if (0 < *(short *)(iVar3 + 0x244)) {
        iVar11 = 0;
        iVar10 = 0;
        do {
          sVar12 = (short)iVar11 + 1;
          iVar11 = (int)sVar12;
          psVar6 = (short *)(iVar10 + *(int *)(iVar3 + 0x248));
          iVar10 = iVar11 << 1;
          *(undefined2 *)(*psVar6 * 0x6f0 + *(int *)(iVar3 + 0x140) + 0x1ea) = 1;
        } while (sVar12 < *(short *)(iVar3 + 0x244));
      }
      *(undefined2 *)(iVar3 + 0x2da) = 1;
      break;
    case 6:
      goto switchD_82c177a0_caseD_6;
    case 7:
      goto switchD_82c177a0_caseD_7;
    case 8:
      goto switchD_82c177a0_caseD_8;
    case 9:
      goto switchD_82c177a0_caseD_9;
    }
    if (*(int *)(*param_1 + 0xb0) != 1) {
      uVar13 = (*(code *)param_1[0x7e])(param_1);
      if ((uVar13 & 0xffffffff) != 0x80040004) goto LAB_82c178ac;
      iVar10 = fn_82C30098(param_1 + 0x38);
      if ((iVar10 == 0) || (param_1[0xb0] == 0)) goto LAB_82c17f90;
      param_1[8] = 8;
      uVar13 = 4;
      param_1[0x36] = 1;
      *(undefined2 *)(param_1 + 4) = 0;
      goto switchD_82c177a0_caseD_1;
    }
    uVar13 = fn_82C36898();
LAB_82c178ac:
    if ((int)uVar13 < 0) goto LAB_82c17f90;
    if (param_1[9] == 8) {
      if (param_1[0x36] != 0) {
        if (*(int *)(*param_1 + 0xb0) == 1) {
          param_1[8] = 7;
          goto switchD_82c177a0_caseD_1;
        }
        if (*(char *)(param_1 + 0x24) == '\0') {
          param_1[8] = 6;
          goto switchD_82c177a0_caseD_6;
        }
      }
      param_1[8] = 8;
      goto switchD_82c177a0_caseD_1;
    }
switchD_82c177a0_caseD_6:
    if (2 < *(int *)(iVar3 + 0x3c)) {
      iStack_9c = 0;
      do {
        uVar13 = fn_82C30370(param_1 + 0x38,1,&iStack_9c);
        if ((int)uVar13 < 0) goto LAB_82c17f90;
      } while (iStack_9c != 1);
    }
    param_1[8] = 7;
switchD_82c177a0_caseD_7:
    if (*(int *)(iVar3 + 0x3c) < 3) {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    }
    else {
      uVar13 = fn_82C30660(param_1);
    }
    if ((int)uVar13 < 0) goto LAB_82c17f90;
    if (param_1[0xb0] != 0) {
      *(undefined2 *)(param_1 + 4) = 0;
    }
    param_1[8] = 8;
switchD_82c177a0_caseD_8:
    if (param_3 == (short *)0x0) {
      param_3 = &sStack_a0;
    }
    if (*(int *)(*param_1 + 0xb0) == 1) {
      fn_82A69D38(iVar3,param_2,0,0,param_1[0xb1]);
      if (param_3 != (short *)0x0) {
        *param_3 = 0;
      }
    }
    else {
      fn_82C34630(iVar3);
    }
    *(short *)(param_1 + 0x37) = *(short *)(param_1 + 0x37) + 1;
    if (0 < *(short *)(iVar3 + 0x244)) {
      iVar11 = 0;
      iVar10 = 0;
      do {
        iVar10 = *(short *)(iVar10 + *(int *)(iVar3 + 0x248)) * 0x6f0 + *(int *)(iVar3 + 0x140);
        if (**(short **)(iVar10 + 0x1a8) <= *(short *)(iVar10 + 0x72)) goto LAB_82c17db4;
        sVar12 = (short)iVar11 + 1;
        *(short *)(iVar10 + 0x72) = *(short *)(iVar10 + 0x72) + 1;
        iVar11 = (int)sVar12;
        iVar10 = iVar11 << 1;
      } while (sVar12 < *(short *)(iVar3 + 0x244));
    }
switchD_82c177a0_caseD_9:
    if ((*(int *)(*param_1 + 0xb0) == 0) && (*(int *)(iVar3 + 0x48) == 3)) {
      if (*(char *)(param_1 + 0x24) != '\0') {
        *(undefined4 *)(*param_1 + 0x174) = 1;
      }
      fn_82C31808(iVar3,param_1[0xb1]);
    }
    if (param_1[0x36] == 0) {
      param_1[8] = 4;
      goto LAB_82c17f90;
    }
    if (*(int *)(*param_1 + 0xb0) == 0) {
      iVar10 = *(int *)(iVar3 + 0x184);
      if (iVar10 < *(int *)(iVar3 + 0x188)) {
        *param_2 = (short)*(int *)(iVar3 + 0x188) - (short)iVar10;
        goto switchD_82c177a0_caseD_1;
      }
      if ((iVar10 < 0) ||
         (uVar9 = *(uint *)(iVar3 + 0x1d4),
         (int)(((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0)) <= iVar10)) {
        uVar13 = 0xffffffff80004005;
        goto LAB_82c17f90;
      }
      if (param_1[0xb1] == 0) {
        fn_82A69BD8(iVar3,aiStack_98);
      }
      else {
        aiStack_98[0] = uVar9 - iVar10;
      }
      piVar4 = *(int **)(iVar3 + 0x168);
      *(int *)(iVar3 + 0x188) = *(int *)(iVar3 + 0x184) + aiStack_98[0];
      iVar10 = *piVar4;
      if ((0 < iVar10) && (param_1[0xb1] == 0)) {
        if (iVar10 < aiStack_98[0]) {
          *(int *)(iVar3 + 0x184) = *(int *)(iVar3 + 0x184) + *piVar4;
          *piVar4 = 0;
        }
        else {
          *piVar4 = iVar10 - aiStack_98[0];
          *(undefined4 *)(iVar3 + 0x184) = *(undefined4 *)(iVar3 + 0x188);
        }
        fn_82C2C380(iVar3);
        if ((2 < *(int *)(iVar3 + 0x3c)) && (uVar9 = *(uint *)(iVar3 + 0x17c), uVar9 != 0)) {
          if (*(int *)(iVar3 + 0x1bc) == 0) {
            if (*(int *)(iVar3 + 0x1c0) != 0) {
              uVar9 = uVar9 << (*(uint *)(iVar3 + 0x1c8) & 0x3f);
            }
          }
          else {
            uVar9 = uVar9 >> (*(uint *)(iVar3 + 0x1c8) & 0x3f);
          }
          if ((int)(*(int *)(iVar3 + 0x188) - uVar9) < *(int *)(iVar3 + 0x184)) {
            *(undefined4 *)(iVar3 + 0x184) = 0;
            *(undefined4 *)(iVar3 + 0x188) = 0;
            *(undefined4 *)(iVar3 + 0x17c) = 0;
          }
        }
      }
      if ((2 < *(int *)(iVar3 + 0x3c)) && (param_1[0xb1] == 0)) {
        if (*(int *)(iVar3 + 0x1bc) == 0) {
          uVar9 = *(uint *)(iVar3 + 0x17c);
          if (*(int *)(iVar3 + 0x1c0) != 0) {
            uVar9 = uVar9 << (*(uint *)(iVar3 + 0x1c8) & 0x3f);
          }
        }
        else {
          uVar9 = *(uint *)(iVar3 + 0x17c) >> (*(uint *)(iVar3 + 0x1c8) & 0x3f);
        }
        *(uint *)(iVar3 + 0x188) = *(int *)(iVar3 + 0x188) - uVar9;
      }
      if (*(int *)(iVar3 + 0x188) < *(int *)(iVar3 + 0x184)) {
LAB_82c17db4:
        uVar13 = 0xffffffff80040002;
        goto LAB_82c17f90;
      }
      *param_2 = (short)*(int *)(iVar3 + 0x188) - (short)*(int *)(iVar3 + 0x184);
      if (*(int *)(iVar3 + 0x4c) != 0) {
        if (param_3 == (short *)0x0) {
          param_3 = &sStack_a0;
        }
        *param_3 = 0;
        if (*(int *)(iVar3 + 0x3c) < 3) {
          puVar5 = *(ushort **)(*(int *)(*(int *)(iVar3 + 0x140) + 0x1a8) + 8);
          uVar1 = puVar5[-1];
          uVar7 = (ulonglong)uVar1;
          uVar2 = *puVar5;
          uVar8 = (ulonglong)uVar2;
          if (*(int *)(iVar3 + 0x1bc) == 0) {
            if (*(int *)(iVar3 + 0x1c0) != 0) {
              uVar9 = (uint)(short)*(undefined4 *)(iVar3 + 0x1c8);
              uVar8 = (ulonglong)(short)((int)(short)uVar2 << (uVar9 & 0x3f));
              uVar7 = (ulonglong)(short)((int)(short)uVar1 << (uVar9 & 0x3f));
            }
          }
          else {
            uVar9 = (uint)(short)*(undefined4 *)(iVar3 + 0x1c8);
            uVar8 = (ulonglong)((int)(short)uVar2 >> (uVar9 & 0x3f));
            uVar7 = (ulonglong)((int)(short)uVar1 >> (uVar9 & 0x3f));
          }
          fn_82A6E1C0(iVar3,1,uVar7,uVar8,&sStack_9e,&iStack_9c);
          *param_3 = (*param_3 - sStack_9e) + (((U64)(iStack_9c) >> 0) & 0xFFFF);
        }
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        *(longlong *)(param_1 + 0x2e) = (longlong)*param_3 + *(longlong *)(param_1 + 0x2e);
      }
    }
    if ((*(int *)(iVar3 + 0xd4) != 0) && (*(short *)(iVar3 + 0x22) != 0)) {
      iVar10 = 0;
      do {
        psVar6 = *(short **)(iVar10 * 0x6f0 + *(int *)(iVar3 + 0x140) + 0x1a8);
        iVar11 = (int)*psVar6;
        if (*(int *)(iVar3 + 0x3c) < 3) {
          *(undefined2 *)(*(int *)(psVar6 + 4) + -2) =
               *(undefined2 *)(*(int *)(psVar6 + 4) + iVar11 * 2 + -2);
          **(undefined2 **)(psVar6 + 4) = (*(undefined2 **)(psVar6 + 4))[iVar11];
          **(undefined2 **)(psVar6 + 6) = 0;
          *psVar6 = 1;
        }
        else {
          *(undefined2 *)(*(int *)(psVar6 + 4) + -2) =
               *(undefined2 *)(iVar11 * 2 + *(int *)(psVar6 + 4) + -2);
        }
        sVar12 = (short)iVar10 + 1;
        iVar10 = (int)sVar12;
      } while ((int)sVar12 < (int)(uint)*(ushort *)(iVar3 + 0x22));
    }
    param_1[0xd] = 1;
    param_1[8] = 2;
    if (2 < *(int *)(iVar3 + 0x3c)) {
      fn_82A6D378(param_1,0);
    }
    if (*(short *)(param_1 + 4) < 1) {
LAB_82c17f78:
      uVar13 = 4;
    }
  }
LAB_82c17f90:
  if ((param_2 == (ushort *)0x0) || (*param_2 == 0)) {
    param_1[0xad] = 2;
  }
  else {
    param_1[0xad] = 3;
    param_1[0xaf] = (uint)*param_2;
  }
  return uVar13;
}

