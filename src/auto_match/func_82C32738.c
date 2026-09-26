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
extern int fn_82A6BD48();
extern int fn_82A6CD50();
extern int fn_82A6D378();
extern int fn_82A75588();
extern int fn_82C30370();
extern int fn_82C306A8();
extern int fn_82C3B0B8();
extern unsigned int uStack_90;


undefined8 fn_82C32738(int *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  ulonglong uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uStack_90;
  int aiStack_8c [35];
  
  iVar1 = *param_1;
  uVar9 = 0;
  if ((*(int *)(iVar1 + 0xd8) == 0) || (1 < *(int *)(iVar1 + 0xe4))) {
    if (*(int *)(iVar1 + 0xb0) == 1) {
      *(undefined4 *)(iVar1 + 0x17c) = 0;
    }
    iVar2 = param_1[0xd];
    while (iVar2 != 0) {
      switch(param_1[0xd]) {
      case 1:
        if (*(int *)(iVar1 + 600) != 0) {
          uVar9 = fn_82C30370(param_1 + 0x38,*(undefined4 *)(iVar1 + 0x268),
                                (uint *)(iVar1 + 0x260));
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          if (param_1[0xb0] != 0) {
            fn_82A6CD50(param_1 + 0x38,
                         (ulonglong)*(uint *)(iVar1 + 0x260) - (ulonglong)*(uint *)(iVar1 + 0x268));
          }
        }
        param_1[0xd] = 3;
      case 3:
        if ((2 < *(int *)(iVar1 + 0x3c)) && (uVar9 = fn_82C306A8(param_1,0), (int)uVar9 < 0)) {
          return uVar9;
        }
        param_1[0x6d] = 0;
        param_1[0xd] = 4;
      case 4:
        uVar9 = fn_82C3B0B8(param_1);
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        param_1[0xd] = 5;
      case 5:
        if (*(int *)(iVar1 + 0x270) != 0) {
          uVar9 = fn_82C30370(param_1 + 0x38,8,&uStack_90);
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          *(char *)(iVar1 + 0xc9) = (char)uStack_90;
        }
        param_1[0xd] = 6;
        break;
      case 2:
        if ((*(int *)(iVar1 + 0xd8) == 0) || (2 < *(int *)(iVar1 + 0x3c))) {
          if (2 < *(int *)(iVar1 + 0x3c)) {
            param_1[0xd] = 1;
            fn_82A6D378(param_1,0);
            break;
          }
        }
        else {
          uVar6 = 0;
          uVar13 = *(uint *)(iVar1 + 0xe4);
          while (1 < uVar13) {
            uVar6 = uVar6 + 1;
            uVar13 = *(uint *)(iVar1 + 0xe4) >> (uVar6 & 0x3f);
          }
          lVar10 = 0;
          uVar13 = uVar6;
          while (1 < uVar13) {
            lVar10 = lVar10 + 1;
            uVar13 = uVar6 >> ((uint)lVar10 & 0x3f);
          }
          uVar12 = lVar10 + 1;
          piVar11 = param_1 + 0x38;
          uVar9 = fn_82A75588(piVar11,(uVar12 & 0x7fffffff) << 1);
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          uVar9 = fn_82C30370(piVar11,uVar12,&uStack_90);
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          uVar13 = *(uint *)(iVar1 + 0x100);
          uVar6 = 1 << (uStack_90 & 0x3f);
          uVar5 = (((ulonglong)uVar13 & 0x7fffffff) << 1 | (ulonglong)(uVar13 >> 0x1f)) - 1;
          trapWord(6,(ulonglong)uVar6,0);
          sVar4 = (short)((int)uVar13 / (int)uVar6);
          trapWord(5,(ulonglong)uVar6 & ~uVar5,0xffff);
          uVar9 = fn_82C30370(piVar11,uVar12,&uStack_90,(int)uVar13 / (int)uVar6,uVar5);
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          uVar13 = *(uint *)(iVar1 + 0x100);
          uVar6 = 1 << (uStack_90 & 0x3f);
          trapWord(6,(ulonglong)uVar6,0);
          sVar3 = (short)((int)uVar13 / (int)uVar6);
          trapWord(5,(ulonglong)uVar6 &
                     ~((((ulonglong)uVar13 & 0x7fffffff) << 1 | (ulonglong)(uVar13 >> 0x1f)) - 1),
                   0xffff);
          if (((((int)sVar4 < *(int *)(iVar1 + 0xec)) || ((int)uVar13 < (int)sVar4)) ||
              ((int)sVar3 < *(int *)(iVar1 + 0xec))) || ((int)uVar13 < (int)sVar3)) {
            return 0xffffffff80040002;
          }
          if (*(short *)(iVar1 + 0x22) != 0) {
            iVar2 = 0;
            do {
              iVar8 = iVar2 * 0x6f0 + *(int *)(iVar1 + 0x140);
              sVar7 = (short)iVar2 + 1;
              iVar2 = (int)sVar7;
              *(short *)(*(int *)(*(int *)(iVar8 + 0x1a8) + 8) + -2) = sVar4;
              **(undefined2 **)(iVar8 + 0x1a8) = 0;
              **(short **)(*(int *)(iVar8 + 0x1a8) + 8) = sVar3;
              **(undefined2 **)(*(int *)(iVar8 + 0x1a8) + 0xc) = 0;
              **(short **)(iVar8 + 0x1a8) = **(short **)(iVar8 + 0x1a8) + 1;
            } while ((int)sVar7 < (int)(uint)*(ushort *)(iVar1 + 0x22));
          }
        }
        param_1[0xd] = 0xb;
        break;
      case 6:
        uStack_90 = 0;
        if (2 < *(int *)(iVar1 + 0x3c)) {
          *(undefined4 *)(iVar1 + 0x174) = 0;
          uVar9 = fn_82C30370(param_1 + 0x38,1,&uStack_90);
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          if (uStack_90 != 0) {
            param_1[0xd] = 7;
            break;
          }
        }
        param_1[0xd] = 0xb;
        break;
      case 7:
        uVar9 = fn_82C30370(param_1 + 0x38,1,&uStack_90);
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        *(uint *)(iVar1 + 0x174) = uStack_90;
        param_1[0xd] = ((uint)LZCOUNT(uStack_90) >> 5) + 8;
        break;
      case 8:
        lVar10 = 0;
        uVar13 = *(uint *)(iVar1 + 0xfc);
        while (1 < uVar13) {
          lVar10 = lVar10 + 1;
          uVar13 = *(uint *)(iVar1 + 0xfc) >> ((uint)lVar10 & 0x3f);
        }
        uStack_90 = 0;
        uVar9 = fn_82C30370(param_1 + 0x38,lVar10,&uStack_90);
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        *(uint *)(iVar1 + 0x178) = uStack_90;
        param_1[0xd] = 9;
        break;
      case 9:
        uVar9 = fn_82C30370(param_1 + 0x38,1,&uStack_90);
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        param_1[0xd] = ((uint)LZCOUNT(uStack_90) >> 5) + 10;
        break;
      case 10:
        lVar10 = 0;
        uVar13 = *(uint *)(iVar1 + 0xfc);
        while (1 < uVar13) {
          lVar10 = lVar10 + 1;
          uVar13 = *(uint *)(iVar1 + 0xfc) >> ((uint)lVar10 & 0x3f);
        }
        uStack_90 = 0;
        uVar9 = fn_82C30370(param_1 + 0x38,lVar10,&uStack_90);
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        *(uint *)(iVar1 + 0x17c) = uStack_90;
        param_1[0xd] = 0xb;
        break;
      case 0xb:
        if (((2 < *(int *)(iVar1 + 0x3c)) && (param_1[0x28] != 0)) && (param_1[0x29] == 0)) {
          iVar2 = fn_82A6BD48(iVar1);
          lVar10 = (longlong)iVar2;
          if (*(longlong *)(param_1 + 0x2e) < lVar10) {
LAB_82c32cfc:
            param_1[0x2e] = 0;
            param_1[0x2f] = 0;
          }
          else {
            uVar13 = *(uint *)(iVar1 + 0x17c);
            if ((uVar13 == 0) || (*(int *)(iVar1 + 0xb0) == 1)) {
              *(longlong *)(param_1 + 0x2e) = *(longlong *)(param_1 + 0x2e) - lVar10;
            }
            else {
              if (*(int *)(iVar1 + 0x1bc) == 0) {
                if (*(int *)(iVar1 + 0x1c0) != 0) {
                  uVar13 = uVar13 << (*(uint *)(iVar1 + 0x1c8) & 0x3f);
                }
              }
              else {
                uVar13 = uVar13 >> (*(uint *)(iVar1 + 0x1c8) & 0x3f);
              }
              fn_82A69BD8(iVar1,aiStack_8c);
              if (*(int *)(iVar1 + 0x184) < *(int *)(iVar1 + 0x188)) {
                aiStack_8c[0] = (*(int *)(iVar1 + 0x184) - *(int *)(iVar1 + 0x188)) + aiStack_8c[0];
              }
              if ((int)uVar13 <= aiStack_8c[0]) {
                if ((int)(aiStack_8c[0] - uVar13) < iVar2) {
                  *(longlong *)(param_1 + 0x2e) =
                       *(longlong *)(param_1 + 0x2e) - (longlong)(int)(aiStack_8c[0] - uVar13);
                }
                else {
                  *(longlong *)(param_1 + 0x2e) = *(longlong *)(param_1 + 0x2e) - lVar10;
                }
              }
              if (*(longlong *)(param_1 + 0x2e) < 0) goto LAB_82c32cfc;
            }
          }
          param_1[0x28] = 0;
        }
        param_1[0xd] = 0;
      }
      iVar2 = param_1[0xd];
    }
    if (*(int *)(iVar1 + 0xb0) == 1) {
      *(int *)(iVar1 + 0x180) = *(int *)(iVar1 + 0x100) - *(int *)(iVar1 + 0x17c);
    }
  }
  else {
    uVar9 = 0xffffffff80040002;
  }
  return uVar9;
}

