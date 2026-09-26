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
extern int fn_82A6D090();
extern int fn_82A6D378();
extern int fn_82A6D3D0();
extern int fn_82A73F70();
extern int fn_82A75588();
extern unsigned int uStack_90;


undefined8 fn_82A6E738(int *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uStack_90;
  int aiStack_8c [35];
  
  iVar1 = *param_1;
  uVar8 = 0;
  if ((*(int *)(iVar1 + 0xd8) == 0) || (1 < *(int *)(iVar1 + 0xe4))) {
    if (*(int *)(iVar1 + 0xb0) == 1) {
      *(undefined4 *)(iVar1 + 0x17c) = 0;
    }
    iVar2 = param_1[0xd];
    while (iVar2 != 0) {
      switch(param_1[0xd]) {
      case 1:
        if (*(int *)(iVar1 + 600) != 0) {
          uVar8 = fn_82A6D090(param_1 + 0x38,*(undefined4 *)(iVar1 + 0x268),
                                (uint *)(iVar1 + 0x260));
          if ((int)uVar8 < 0) {
            return uVar8;
          }
          if (param_1[0xb0] != 0) {
            fn_82A6CD50(param_1 + 0x38,
                          (ulonglong)*(uint *)(iVar1 + 0x260) - (ulonglong)*(uint *)(iVar1 + 0x268))
            ;
          }
        }
        param_1[0xd] = 3;
      case 3:
        if ((2 < *(int *)(iVar1 + 0x3c)) && (uVar8 = fn_82A6D3D0(param_1,0), (int)uVar8 < 0)) {
          return uVar8;
        }
        param_1[0x6d] = 0;
        param_1[0xd] = 4;
      case 4:
        uVar8 = fn_82A73F70(param_1);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        param_1[0xd] = 5;
      case 5:
        if (*(int *)(iVar1 + 0x270) != 0) {
          uVar8 = fn_82A6D090(param_1 + 0x38,8,&uStack_90);
          if ((int)uVar8 < 0) {
            return uVar8;
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
          uVar5 = 0;
          uVar12 = *(uint *)(iVar1 + 0xe4);
          while (1 < uVar12) {
            uVar5 = uVar5 + 1;
            uVar12 = *(uint *)(iVar1 + 0xe4) >> (uVar5 & 0x3f);
          }
          lVar9 = 0;
          uVar12 = uVar5;
          while (1 < uVar12) {
            lVar9 = lVar9 + 1;
            uVar12 = uVar5 >> ((uint)lVar9 & 0x3f);
          }
          uVar11 = lVar9 + 1;
          piVar10 = param_1 + 0x38;
          uVar8 = fn_82A75588(piVar10,(uVar11 & 0x7fffffff) << 1);
          if ((int)uVar8 < 0) {
            return uVar8;
          }
          uVar8 = fn_82A6D090(piVar10,uVar11,&uStack_90);
          if ((int)uVar8 < 0) {
            return uVar8;
          }
          sVar4 = (short)(*(int *)(iVar1 + 0x100) / (1 << (uStack_90 & 0x3f)));
          uVar8 = fn_82A6D090(piVar10,uVar11,&uStack_90);
          if ((int)uVar8 < 0) {
            return uVar8;
          }
          iVar2 = *(int *)(iVar1 + 0x100);
          sVar3 = (short)(iVar2 / (1 << (uStack_90 & 0x3f)));
          if (((((int)sVar4 < *(int *)(iVar1 + 0xec)) || (iVar2 < sVar4)) ||
              ((int)sVar3 < *(int *)(iVar1 + 0xec))) || (iVar2 < sVar3)) {
            return 0xffffffff80040002;
          }
          if (*(short *)(iVar1 + 0x22) != 0) {
            iVar2 = 0;
            do {
              iVar7 = iVar2 * 0x6f0 + *(int *)(iVar1 + 0x140);
              sVar6 = (short)iVar2 + 1;
              iVar2 = (int)sVar6;
              *(short *)(*(int *)(*(int *)(iVar7 + 0x1a8) + 8) + -2) = sVar4;
              **(undefined2 **)(iVar7 + 0x1a8) = 0;
              **(short **)(*(int *)(iVar7 + 0x1a8) + 8) = sVar3;
              **(undefined2 **)(*(int *)(iVar7 + 0x1a8) + 0xc) = 0;
              **(short **)(iVar7 + 0x1a8) = **(short **)(iVar7 + 0x1a8) + 1;
            } while ((int)sVar6 < (int)(uint)*(ushort *)(iVar1 + 0x22));
          }
        }
        param_1[0xd] = 0xb;
        break;
      case 6:
        uStack_90 = 0;
        if (2 < *(int *)(iVar1 + 0x3c)) {
          *(undefined4 *)(iVar1 + 0x174) = 0;
          uVar8 = fn_82A6D090(param_1 + 0x38,1,&uStack_90);
          if ((int)uVar8 < 0) {
            return uVar8;
          }
          if (uStack_90 != 0) {
            param_1[0xd] = 7;
            break;
          }
        }
        param_1[0xd] = 0xb;
        break;
      case 7:
        uVar8 = fn_82A6D090(param_1 + 0x38,1,&uStack_90);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        *(uint *)(iVar1 + 0x174) = uStack_90;
        param_1[0xd] = ((uint)LZCOUNT(uStack_90) >> 5) + 8;
        break;
      case 8:
        lVar9 = 0;
        uVar12 = *(uint *)(iVar1 + 0xfc);
        while (1 < uVar12) {
          lVar9 = lVar9 + 1;
          uVar12 = *(uint *)(iVar1 + 0xfc) >> ((uint)lVar9 & 0x3f);
        }
        uStack_90 = 0;
        uVar8 = fn_82A6D090(param_1 + 0x38,lVar9,&uStack_90);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        *(uint *)(iVar1 + 0x178) = uStack_90;
        param_1[0xd] = 9;
        break;
      case 9:
        uVar8 = fn_82A6D090(param_1 + 0x38,1,&uStack_90);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        param_1[0xd] = ((uint)LZCOUNT(uStack_90) >> 5) + 10;
        break;
      case 10:
        lVar9 = 0;
        uVar12 = *(uint *)(iVar1 + 0xfc);
        while (1 < uVar12) {
          lVar9 = lVar9 + 1;
          uVar12 = *(uint *)(iVar1 + 0xfc) >> ((uint)lVar9 & 0x3f);
        }
        uStack_90 = 0;
        uVar8 = fn_82A6D090(param_1 + 0x38,lVar9,&uStack_90);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        *(uint *)(iVar1 + 0x17c) = uStack_90;
        param_1[0xd] = 0xb;
        break;
      case 0xb:
        if (((2 < *(int *)(iVar1 + 0x3c)) && (param_1[0x28] != 0)) && (param_1[0x29] == 0)) {
          iVar2 = fn_82A6BD48(iVar1);
          lVar9 = (longlong)iVar2;
          if (*(longlong *)(param_1 + 0x2e) < lVar9) {
LAB_82a6ecd4:
            param_1[0x2e] = 0;
            param_1[0x2f] = 0;
          }
          else {
            uVar12 = *(uint *)(iVar1 + 0x17c);
            if ((uVar12 == 0) || (*(int *)(iVar1 + 0xb0) == 1)) {
              *(longlong *)(param_1 + 0x2e) = *(longlong *)(param_1 + 0x2e) - lVar9;
            }
            else {
              if (*(int *)(iVar1 + 0x1bc) == 0) {
                if (*(int *)(iVar1 + 0x1c0) != 0) {
                  uVar12 = uVar12 << (*(uint *)(iVar1 + 0x1c8) & 0x3f);
                }
              }
              else {
                uVar12 = uVar12 >> (*(uint *)(iVar1 + 0x1c8) & 0x3f);
              }
              fn_82A69BD8(iVar1,aiStack_8c);
              if (*(int *)(iVar1 + 0x184) < *(int *)(iVar1 + 0x188)) {
                aiStack_8c[0] = (*(int *)(iVar1 + 0x184) - *(int *)(iVar1 + 0x188)) + aiStack_8c[0];
              }
              if ((int)uVar12 <= aiStack_8c[0]) {
                if ((int)(aiStack_8c[0] - uVar12) < iVar2) {
                  *(longlong *)(param_1 + 0x2e) =
                       *(longlong *)(param_1 + 0x2e) - (longlong)(int)(aiStack_8c[0] - uVar12);
                }
                else {
                  *(longlong *)(param_1 + 0x2e) = *(longlong *)(param_1 + 0x2e) - lVar9;
                }
              }
              if (*(longlong *)(param_1 + 0x2e) < 0) goto LAB_82a6ecd4;
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
    uVar8 = 0xffffffff80040002;
  }
  return uVar8;
}

