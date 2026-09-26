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
extern int fn_82C44B80();
extern int fn_82C44BE0();
extern int fn_82C47A68();
extern int fn_82C47AC8();
extern int fn_82C48040();
extern int fn_82C487A0();
extern int fn_82C5E168();
extern int fn_82C5E340();
extern int fn_82C74C30();
extern int fn_82C74D98();
extern int fn_82C751C0();
extern int fn_82C8F060();
extern int fn_82CA0B70();
extern int fn_82CA0C90();
extern int fn_82CA1080();
extern int fn_82CA2458();
extern int fn_82CA2488();
extern int fn_82CA2900();
extern int fn_82CA3A50();
extern int fn_82CA4C20();
extern int fn_82CA6768();
extern int fn_82CA8498();
extern int fn_82CA9338();
extern int fn_82CAAA10();
extern unsigned int iStack_4b0;
extern unsigned int iStack_4b8;
extern unsigned int iStack_4dc;
extern unsigned int iStack_4e8;
extern unsigned int iStack_4ec;
extern unsigned int uRam83175d40;
extern unsigned int uStack_490;
extern unsigned int uStack_494;
extern unsigned int uStack_498;
extern unsigned int uStack_49c;
extern unsigned int uStack_4a0;
extern unsigned int uStack_4a4;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4ac;
extern unsigned int uStack_4b2;
extern unsigned int uStack_4b4;
extern unsigned int uStack_4bc;
extern unsigned int uStack_4c0;
extern unsigned int uStack_4e0;
extern unsigned int uStack_4e2;
extern unsigned int uStack_4e4;
extern unsigned int uStack_4f0;
extern unsigned int uStack_500;


ulonglong fn_82C4C448(int param_1,int param_2,ushort param_3,uint param_4,int param_5,
                       ulonglong param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar9;
  undefined8 uVar8;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar10;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uStack_500;
  int aiStack_4fc [3];
  undefined4 uStack_4f0;
  int iStack_4ec;
  int iStack_4e8;
  undefined2 uStack_4e4;
  undefined2 uStack_4e2;
  undefined4 uStack_4e0;
  int iStack_4dc;
  undefined4 uStack_4c0;
  uint uStack_4bc;
  int iStack_4b8;
  undefined2 uStack_4b4;
  ushort uStack_4b2;
  int iStack_4b0;
  uint uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  
  if (param_1 == 0) {
    return 0xfffffffffffffffd;
  }
  iVar1 = *(int *)(param_1 + 0x2e0);
  if (*(int *)(iVar1 + 0xe8c) == 0) {
    return 5;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0xea0) + 0x20) = 0;
  if (*(int *)(iVar1 + 0xf8c) != 0) {
    if (((param_2 == 0x32595559) || (param_2 == 0x59565955)) || (param_2 == 0x55595659)) {
LAB_82c4c500:
      if (param_2 == 0) goto LAB_82c4c508;
    }
    else {
      if (param_2 != 0) {
        if (param_2 != 3) {
          return 0xfffffffffffffffb;
        }
        goto LAB_82c4c500;
      }
LAB_82c4c508:
      if (param_3 == 8) {
        return 0xfffffffffffffffb;
      }
    }
    if ((param_2 == 3) && (param_3 == 4)) {
      return 0xfffffffffffffffb;
    }
  }
  if (*(int *)(iVar1 + 0x5674) == 1) {
    fn_82C47A68(iVar1);
LAB_82c4ce8c:
    fn_82C48040(param_1,aiStack_4fc,&uStack_500);
    if (((*(int *)(iVar1 + 0x3cb0) == 7) || (*(int *)(iVar1 + 0x3cb0) == 6)) &&
       (*(int *)(iVar1 + 0x18) == 0)) {
      puVar3 = *(uint **)(iVar1 + 0xebc);
      iVar6 = 0x40;
      uStack_500 = 0;
      uVar16 = (ulonglong)puVar3[1];
      uVar15 = (ulonglong)puVar3[2];
      uVar17 = (ulonglong)*puVar3;
      if (((*(int *)(iVar1 + 0x5580) == 1) && (0 < *(int *)(iVar1 + 0x39f4))) &&
         (1 < *(longlong *)(iVar1 + 0xe30))) {
        uVar11 = *(uint *)(iVar1 + 0x5644);
        iVar12 = *(int *)(iVar1 + 0x5648);
      }
      else {
        uVar11 = *(uint *)(iVar1 + 0x9c);
        iVar12 = *(int *)(iVar1 + 0xa0);
      }
      uStack_4bc = param_4;
      if (param_4 == 0) {
        uStack_4bc = uVar11;
      }
      *(uint *)(iVar1 + 0x3cc8) = uStack_4bc;
      iStack_4e8 = aiStack_4fc[0];
      if (*(int *)(iVar1 + 0x3c04) == 0) {
        uVar13 = uVar11 + 0xf;
        uVar9 = iVar12 + 0xf;
        aiStack_4fc[0] =
             (((int)uVar13 >> 4) + (uint)((int)uVar13 < 0 && (uVar13 & 0xf) != 0)) * 0x10;
        iStack_4e8 = (((int)uVar9 >> 4) + (uint)((int)uVar9 < 0 && (uVar9 & 0xf) != 0)) * 0x10;
      }
      iVar4 = *(int *)(iVar1 + 0xf8c);
      if (iVar4 == 0) {
        lVar18 = 0;
        iVar14 = 0;
        uVar7 = 0x20;
        uVar8 = 0x20;
      }
      else {
        lVar18 = (ulonglong)uVar11 + 0x40;
        uVar7 = 0;
        iVar14 = ((int)uVar11 >> 2) + (uint)((int)uVar11 < 0 && (uVar11 & 3) != 0) + 0x20;
        uVar8 = 0;
      }
      if ((*(int *)(iVar1 + 0x3c04) != 0) || (*(int *)(iVar1 + 0x3c48) != 0)) {
        uVar7 = 0;
        uVar8 = 0;
        iVar6 = 0;
      }
      if (param_2 == 3) {
        if (param_3 == 0x10) {
          uStack_490 = 0x1f;
          uStack_494 = 0x7e0;
          uStack_498 = 0xf800;
        }
        if (param_3 == 0xf) {
          uStack_490 = 0x1f;
          uStack_498 = 0x7c00;
          param_3 = 0x10;
          uStack_494 = 0x3e0;
        }
        if (param_3 == 0x20) {
          uStack_498 = 0xff0000;
          uStack_494 = 0xff00;
          uStack_490 = 0xff;
        }
      }
      uStack_4c0 = 0x28;
      iStack_4b8 = iVar12;
      if (*(int *)(iVar1 + 0x5618) == 0) {
        iStack_4b8 = *(int *)(iVar1 + 0x5668);
      }
      uStack_4b4 = 1;
      uStack_4a8 = 0;
      uStack_4a4 = 0;
      uStack_4a0 = 0;
      uStack_49c = 0;
      uStack_4ac = param_3 * uStack_4bc * iVar12 >> 3;
      if (*(int *)(iVar1 + 0x3cd0) == 2) {
        iStack_4b8 = -iStack_4b8;
      }
      uStack_4f0 = 0x28;
      iStack_4ec = aiStack_4fc[0] + iVar6;
      iStack_4e8 = iStack_4e8 + iVar6;
      uStack_4e4 = 1;
      uStack_4e2 = 0xc;
      uStack_4b2 = param_3;
      iStack_4b0 = param_2;
      if (*(int *)(iVar1 + 0x5498) == 0) {
        if (iVar4 == 0) {
          uStack_4e0 = uRam83175d40;
        }
        else {
          uStack_4e0 = 0x31313450;
        }
        uVar11 = iStack_4e8 * iStack_4ec * 3;
        iStack_4dc = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
        uVar5 = fn_82CA2900(&uStack_500,&uStack_4f0,&uStack_4c0,uVar7,uVar8,0,0);
        uVar10 = (ulonglong)uStack_500;
        *(undefined4 *)(iVar1 + 0x5498) = uVar5;
      }
      else {
        if (iVar4 == 0) {
          uStack_4e0 = 0x30323449;
        }
        else {
          uStack_4e0 = 0x31313450;
        }
        uVar11 = iStack_4e8 * iStack_4ec * 3;
        iStack_4dc = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
        uVar10 = fn_82CA2488(*(int *)(iVar1 + 0x5498),&uStack_4f0,&uStack_4c0,uVar7,uVar8,0,0);
        uStack_500 = (uint)uVar10;
      }
      if (uStack_500 != 0) {
        return uVar10;
      }
      iVar6 = *(int *)(iVar1 + 0x5498);
      if (iVar6 == 0) {
        return 0xfffffffffffffffb;
      }
      if (*(int *)(iVar1 + 0xf8c) != 0) {
        uVar17 = (lVar18 + 1U & 0x7ffffff) * 0x20 + uVar17;
        uVar16 = ((ulonglong)(iVar14 + 1) & 0xfffffff) * 0x10 + uVar16;
        uVar15 = ((ulonglong)(iVar14 + 1) & 0xfffffff) * 0x10 + uVar15;
      }
      *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(iVar1 + 0x5680);
      if (*(int *)(iVar1 + 0x5680) == 1) {
        *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar1 + 0x5684);
        *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(iVar1 + 0x5688);
        *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar1 + 0x568c);
        *(undefined4 *)(iVar6 + 0x3920) = *(undefined4 *)(iVar1 + 0x5690);
        *(undefined4 *)(iVar6 + 0x3924) = *(undefined4 *)(iVar1 + 0x5694);
        *(undefined4 *)(iVar6 + 0x3928) = *(undefined4 *)(iVar1 + 0x5698);
      }
      uVar15 = fn_82CA2458(*(undefined4 *)(iVar1 + 0x5498),uVar17,param_6,uVar16,uVar15);
      *(undefined4 *)(iVar1 + 0x5580) = 0;
      goto LAB_82c4d2d4;
    }
    uVar15 = fn_82CA3A50(iVar1,param_6);
    if ((int)uVar15 != 0) {
      return uVar15;
    }
    *(undefined4 *)(iVar1 + 0x5580) = 0;
  }
  else {
    if (*(int *)(iVar1 + 0xd88) == 1) {
      *(undefined4 *)(iVar1 + 0xd88) = 0;
      *(undefined2 *)(iVar1 + 0xe9c) = 1;
      if (*(int *)(iVar1 + 0x564c) == 1) {
        *(undefined4 *)(iVar1 + 0x564c) = 0;
LAB_82c4ca74:
        if (*(int *)(iVar1 + 0x3a08) != 0) {
          iVar6 = *(int *)(iVar1 + 0x120);
          if ((iVar6 == 0) || (iVar6 == 4)) {
            if (*(int *)(iVar1 + 0x39f4) == 0) {
              *(undefined4 *)(iVar1 + 0x3a10) = *(undefined4 *)(iVar1 + 0x3a0c);
            }
            else if (iVar6 != 2) {
              if ((*(int *)(iVar1 + 0x3a10) == 0) && (*(int *)(iVar1 + 0x3a0c) == 1)) {
                fn_82C5E340(iVar1);
              }
              fn_82CA0B70(iVar1);
            }
          }
          if (*(int *)(iVar1 + 0x3a0c) != 0) {
            if (*(int *)(iVar1 + 0x3d0c) == 0) {
              fn_82C74C30(iVar1);
              *(undefined4 *)(iVar1 + 0x3d0c) = 1;
            }
            fn_82C8F060(iVar1);
          }
        }
        if ((*(int *)(iVar1 + 0x3cb0) == 7) &&
           ((*(int *)(iVar1 + 0x559c) != 0 || (*(int *)(iVar1 + 0x55a0) != 0)))) {
          fn_82CA1080(iVar1);
          *(undefined4 *)(iVar1 + 0x3d0c) = 1;
        }
        if (*(int *)(iVar1 + 0x3a28) != 0) {
          fn_82CA8498(iVar1,0);
          fn_82CAAA10(iVar1);
          uVar5 = *(undefined4 *)(iVar1 + 0x3a28);
          uVar2 = *(undefined4 *)(iVar1 + 0x3a2c);
          *(undefined4 *)(iVar1 + 0x3a28) = 0;
          *(undefined4 *)(iVar1 + 0x3a2c) = uVar5;
          if (*(int *)(iVar1 + 0x3d0c) == 0) {
            if ((*(int *)(iVar1 + 0x3e5c) == 0) || (*(int *)(iVar1 + 0x4fc0) != 0)) {
              iVar6 = *(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1;
              uVar15 = (ulonglong)*(uint *)(iVar6 + 0x3a78);
              fn_82CA9338(iVar1,(ulonglong)*(uint *)(iVar6 + 0x3a74) +
                                      (ulonglong)*(uint *)(iVar1 + 0xec0),
                                *(uint *)(iVar1 + 0xec4) + uVar15,*(uint *)(iVar1 + 0xec8) + uVar15,
                                (ulonglong)*(uint *)(iVar1 + 0xef8) +
                                (ulonglong)*(uint *)(iVar1 + 0xdc),
                                (ulonglong)*(uint *)(iVar1 + 0xefc) +
                                (ulonglong)*(uint *)(iVar1 + 0xe0),
                                (ulonglong)*(uint *)(iVar1 + 0xf00) +
                                (ulonglong)*(uint *)(iVar1 + 0xe0));
            }
            else {
              *(undefined4 *)(*(int *)(iVar1 + 0xeb0) + 0x250) = 0;
              iVar6 = *(int *)(iVar1 + 0xeb0);
              iVar12 = *(int *)(iVar6 + 0x250);
              *(int *)(iVar6 + 0x250) = iVar12 + 1;
              iVar6 = iVar12 * 0x44 + iVar6;
              *(undefined4 *)(iVar6 + 0x30) = 8;
              *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(iVar1 + 0xea0);
              *(undefined4 *)(iVar6 + 0x48) =
                   *(undefined4 *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a74);
              *(undefined4 *)(iVar6 + 0x4c) =
                   *(undefined4 *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a78);
              *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar1 + 0xdc);
              *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(iVar1 + 0xe0);
              *(undefined4 *)(iVar6 + 0x58) = *(undefined4 *)(iVar1 + 0x3a28);
              *(undefined4 *)(iVar6 + 0x5c) = *(undefined4 *)(iVar1 + 0x3a2c);
              *(undefined4 *)(iVar6 + 0x60) =
                   *(undefined4 *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a64);
              *(undefined4 *)(iVar6 + 100) =
                   *(undefined4 *)((*(int *)(iVar1 + 0x3a2c) + 0xb2) * 0x54 + iVar1);
              *(undefined4 *)(iVar6 + 0x70) =
                   *(undefined4 *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a58);
              *(undefined4 *)(iVar6 + 0x68) = *(undefined4 *)(iVar1 + 0xcc);
              *(undefined4 *)(iVar6 + 0x6c) = *(undefined4 *)(iVar1 + 0xd0);
              *(undefined4 *)(iVar6 + 0x3c) = *(undefined4 *)(iVar1 + 0xb4);
              *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(iVar1 + 0xc0);
              *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(iVar1 + 0xbc);
              *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar1 + 200);
            }
          }
          else if ((*(int *)(iVar1 + 0x3e5c) == 0) || (*(int *)(iVar1 + 0x4fc0) != 0)) {
            iVar6 = *(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1;
            uVar15 = (ulonglong)*(uint *)(iVar6 + 0x3a78);
            fn_82CA9338(iVar1,(ulonglong)*(uint *)(iVar6 + 0x3a74) +
                                    (ulonglong)*(uint *)(iVar1 + 0xef8),
                              *(uint *)(iVar1 + 0xefc) + uVar15,*(uint *)(iVar1 + 0xf00) + uVar15,
                              (ulonglong)*(uint *)(iVar1 + 0xed8) +
                              (ulonglong)*(uint *)(iVar1 + 0xdc),
                              (ulonglong)*(uint *)(iVar1 + 0xedc) +
                              (ulonglong)*(uint *)(iVar1 + 0xe0),
                              (ulonglong)*(uint *)(iVar1 + 0xee0) +
                              (ulonglong)*(uint *)(iVar1 + 0xe0));
            fn_82C5E168(iVar1);
          }
          else {
            iVar6 = *(int *)(iVar1 + 0xeb0);
            iVar12 = *(int *)(iVar6 + 0x250) * 0x44 + iVar6;
            *(int *)(iVar6 + 0x250) = *(int *)(iVar6 + 0x250) + 1;
            *(undefined4 *)(iVar12 + 0x30) = 8;
            *(undefined4 *)(iVar12 + 0x34) = *(undefined4 *)(iVar1 + 0xeb0);
            *(undefined4 *)(iVar12 + 0x48) =
                 *(undefined4 *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a74);
            *(undefined4 *)(iVar12 + 0x4c) =
                 *(undefined4 *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a78);
            *(undefined4 *)(iVar12 + 0x50) = *(undefined4 *)(iVar1 + 0xdc);
            *(undefined4 *)(iVar12 + 0x54) = *(undefined4 *)(iVar1 + 0xe0);
            *(undefined4 *)(iVar12 + 0x58) = *(undefined4 *)(iVar1 + 0x3a28);
            *(undefined4 *)(iVar12 + 0x5c) = *(undefined4 *)(iVar1 + 0x3a2c);
            *(undefined4 *)(iVar12 + 0x60) =
                 *(undefined4 *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a64);
            *(undefined4 *)(iVar12 + 100) =
                 *(undefined4 *)((*(int *)(iVar1 + 0x3a2c) + 0xb2) * 0x54 + iVar1);
            *(undefined4 *)(iVar12 + 0x70) =
                 *(undefined4 *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a58);
            *(undefined4 *)(iVar12 + 0x68) = *(undefined4 *)(iVar1 + 0xcc);
            *(undefined4 *)(iVar12 + 0x6c) = *(undefined4 *)(iVar1 + 0xd0);
            *(undefined4 *)(iVar12 + 0x3c) = *(undefined4 *)(iVar1 + 0xb4);
            *(undefined4 *)(iVar12 + 0x44) = *(undefined4 *)(iVar1 + 0xc0);
            *(undefined4 *)(iVar12 + 0x38) = *(undefined4 *)(iVar1 + 0xbc);
            *(undefined4 *)(iVar12 + 0x40) = *(undefined4 *)(iVar1 + 200);
          }
          *(undefined4 *)(iVar1 + 0x3a2c) = uVar2;
          *(undefined4 *)(iVar1 + 0x3a28) = uVar5;
          *(undefined4 *)(iVar1 + 0x3d0c) = 1;
        }
        *(undefined4 *)(iVar1 + 0x5678) = 0;
        if (0 < *(int *)(iVar1 + 0x39f4)) {
          if (((*(int *)(iVar1 + 0x120) == 2) || (*(int *)(iVar1 + 0x120) == 4)) &&
             ((*(int *)(iVar1 + 0xda4) == 0 ||
              ((*(int *)(iVar1 + 0x128) == 2 || (*(int *)(iVar1 + 0x128) == 4)))))) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
          *(undefined4 *)(iVar1 + 0xd68) = uVar5;
        }
        fn_82C47AC8(iVar1);
      }
      goto LAB_82c4ce8c;
    }
    if (*(short *)(iVar1 + 0xe9c) == 0) {
      return 2;
    }
    if ((param_6 & 0xffffffff) == 0) {
      if ((*(int *)(iVar1 + 0x3c04) == 0) && (*(int *)(iVar1 + 0x3c48) == 0)) {
        *(undefined4 *)(iVar1 + 0x3d0c) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x3d0c) = 1;
      }
      if (*(int *)(iVar1 + 0x3a08) != 0) {
        iVar6 = *(int *)(iVar1 + 0x120);
        if ((iVar6 == 0) || (iVar6 == 4)) {
          if (*(int *)(iVar1 + 0x39f4) == 0) {
            *(undefined4 *)(iVar1 + 0x3a10) = *(undefined4 *)(iVar1 + 0x3a0c);
          }
          else if (iVar6 != 2) {
            if ((*(int *)(iVar1 + 0x3a10) == 0) && (*(int *)(iVar1 + 0x3a0c) == 1)) {
              fn_82C5E340(iVar1);
            }
            fn_82CA0B70(iVar1);
          }
        }
        if (*(int *)(iVar1 + 0x3a0c) != 0) {
          if (*(int *)(iVar1 + 0x3d0c) == 0) {
            fn_82C74C30(iVar1);
            *(undefined4 *)(iVar1 + 0x3d0c) = 1;
          }
          fn_82CA0C90(iVar1);
        }
      }
      if ((*(int *)(iVar1 + 0x3cb0) == 7) &&
         ((*(int *)(iVar1 + 0x559c) != 0 || (*(int *)(iVar1 + 0x55a0) != 0)))) {
        fn_82CA1080(iVar1);
        *(undefined4 *)(iVar1 + 0x3d0c) = 1;
      }
      if ((*(int *)(iVar1 + 0x3a24) != 0) && (*(int *)(iVar1 + 0x3a28) != 0)) {
        fn_82CA8498(iVar1,0);
        fn_82CAAA10(iVar1);
        uVar15 = (ulonglong)*(uint *)(iVar1 + 0xe0);
        iVar6 = *(int *)(iVar1 + 0x3a28);
        uVar5 = *(undefined4 *)(iVar1 + 0x3a2c);
        *(undefined4 *)(iVar1 + 0x3a28) = 0;
        *(int *)(iVar1 + 0x3a2c) = iVar6;
        iVar12 = iVar6 * 0x54 + iVar1;
        if (*(int *)(iVar1 + 0x3d0c) == 0) {
          fn_82CA9338(iVar1,(ulonglong)*(uint *)(iVar12 + 0x3a74) +
                                  (ulonglong)*(uint *)(iVar1 + 0xec0),
                            (ulonglong)*(uint *)(iVar1 + 0xec4) +
                            (ulonglong)*(uint *)(iVar12 + 0x3a78),
                            (ulonglong)*(uint *)(iVar1 + 0xec8) +
                            (ulonglong)*(uint *)(iVar12 + 0x3a78),
                            (ulonglong)*(uint *)(iVar1 + 0xef8) + (ulonglong)*(uint *)(iVar1 + 0xdc)
                            ,*(uint *)(iVar1 + 0xefc) + uVar15,*(uint *)(iVar1 + 0xf00) + uVar15);
        }
        else {
          fn_82CA9338(iVar1,(ulonglong)*(uint *)(iVar12 + 0x3a74) +
                                  (ulonglong)*(uint *)(iVar1 + 0xef8),
                            (ulonglong)*(uint *)(iVar1 + 0xefc) +
                            (ulonglong)*(uint *)(iVar12 + 0x3a78),
                            (ulonglong)*(uint *)(iVar1 + 0xf00) +
                            (ulonglong)*(uint *)(iVar12 + 0x3a78),
                            (ulonglong)*(uint *)(iVar1 + 0xed8) + (ulonglong)*(uint *)(iVar1 + 0xdc)
                            ,*(uint *)(iVar1 + 0xedc) + uVar15,*(uint *)(iVar1 + 0xee0) + uVar15);
          fn_82C5E168(iVar1);
        }
        *(undefined4 *)(iVar1 + 0x3a2c) = uVar5;
        *(int *)(iVar1 + 0x3a28) = iVar6;
        *(undefined4 *)(iVar1 + 0x3d0c) = 1;
      }
      if (0 < *(int *)(iVar1 + 0x39f4)) {
        if (((*(int *)(iVar1 + 0x120) != 2) && (*(int *)(iVar1 + 0x120) != 4)) ||
           ((*(int *)(iVar1 + 0xda4) != 0 &&
            ((*(int *)(iVar1 + 0x128) != 2 && (*(int *)(iVar1 + 0x128) != 4)))))) {
          *(undefined4 *)(iVar1 + 0xd68) = 1;
          *(undefined4 *)(iVar1 + 0x3ccc) = 1;
          fn_82C47AC8(iVar1);
          goto LAB_82c4d2d0;
        }
        *(undefined4 *)(iVar1 + 0xd68) = 0;
      }
      *(undefined4 *)(iVar1 + 0x3ccc) = 1;
      fn_82C47AC8(iVar1);
    }
    else {
      *(undefined4 *)(iVar1 + 0x3d00) = 2;
      if ((*(int *)(iVar1 + 0x3c04) == 0) && (*(int *)(iVar1 + 0x3c48) == 0)) {
        *(int *)(iVar1 + 0x3cc0) = param_2;
        *(ushort *)(iVar1 + 0x3cc4) = param_3;
        *(int *)(iVar1 + 0x3cd0) = param_5;
        uVar11 = param_4;
        if (param_4 == 0) {
          uVar11 = *(uint *)(iVar1 + 0x58);
        }
        *(uint *)(iVar1 + 0x3cc8) = uVar11;
        if ((param_5 != 0) && (param_5 != 2)) {
          *(undefined4 *)(iVar1 + 0x3cd0) = 0;
        }
        uVar15 = fn_82CA4C20(iVar1);
        if ((int)uVar15 != 0) {
          return uVar15;
        }
        *(undefined4 *)(iVar1 + 0x3cbc) = 1;
        fn_82C487A0(iVar1);
        iVar6 = *(int *)(iVar1 + 0xe74);
        if (iVar6 == -1) {
          if (*(int *)(iVar1 + 0x120) == 0) {
            fn_82C751C0(iVar1);
            *(undefined4 *)(iVar1 + 0xe74) = *(undefined4 *)(iVar1 + 0x3cfc);
          }
        }
        else {
          if ((-1 < iVar6) && (iVar6 < 5)) {
            *(int *)(iVar1 + 0x3cfc) = iVar6;
          }
          fn_82C751C0(iVar1);
        }
        if (*(int *)(iVar1 + 0x3cd4) != 0) {
          fn_82C44B80(iVar1);
          if (*(int *)(iVar1 + 0xf8c) == 0) {
            fn_82C74D98(iVar1,0,*(undefined4 *)(iVar1 + 0x8c),0);
          }
          else {
            (**(code **)(iVar1 + 0x3e34))();
          }
          *(undefined4 *)(iVar1 + 0x3d0c) = 1;
          fn_82C44BE0(iVar1);
        }
        goto LAB_82c4ca74;
      }
      iVar6 = *(int *)(iVar1 + 0x3c0c);
      *(undefined4 *)(iVar1 + 0xdc) = 0;
      *(undefined4 *)(iVar1 + 0xe0) = 0;
      iVar12 = *(int *)(iVar1 + 0x3c10) >> 4;
      *(int *)(iVar1 + 0xd0) = iVar6 >> 1;
      *(int *)(iVar1 + 0x58) = iVar6;
      *(int *)(iVar1 + 0x8c) = iVar12;
      *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x3c10);
      *(int *)(iVar1 + 0xcc) = iVar6;
      *(int *)(iVar1 + 0xe4) = iVar6 << 4;
      *(int *)(iVar1 + 0xe8) = iVar6 << 2;
      *(int *)(iVar1 + 0x88) = iVar6 >> 4;
      uVar5 = fn_82CA6768(iVar12,*(undefined4 *)(iVar1 + 0xd40));
      iVar6 = *(int *)(iVar1 + 0xcc);
      trapWord(6,(ulonglong)*(uint *)(iVar1 + 0xd40),0);
      *(undefined4 *)(iVar1 + 0xf1c) = uVar5;
      *(undefined4 *)(iVar1 + 0xf40) = uVar5;
      *(uint *)(iVar1 + 0xf20) = *(uint *)(iVar1 + 0x88) / *(uint *)(iVar1 + 0xd40);
      *(int *)(iVar1 + 0x60) = iVar6;
      *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0xd0);
      *(int *)(iVar1 + 0x68) = *(int *)(iVar1 + 0xd4);
      *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar1 + 0xd8);
      *(int *)(iVar1 + 100) = iVar6 << 4;
      *(int *)(iVar1 + 0x70) = *(int *)(iVar1 + 0xd0) << 3;
      if ((*(int *)(iVar1 + 0x58) != iVar6) ||
         (uVar5 = 1, *(int *)(iVar1 + 0x5c) != *(int *)(iVar1 + 0xd4))) {
        uVar5 = 0;
      }
      uVar11 = *(uint *)(iVar1 + 0x3c0c);
      uVar9 = *(uint *)(iVar1 + 0x3c10);
      *(undefined4 *)(iVar1 + 0x78) = uVar5;
      iVar6 = (int)(uVar11 + 0xf) >> 4;
      iVar12 = (int)(uVar9 + 0xf) >> 4;
      *(int *)(iVar1 + 0x80) = iVar6;
      *(int *)(iVar1 + 0x84) = iVar12;
      *(int *)(iVar1 + 0x7c) = iVar12 * iVar6;
      if ((uVar11 != *(uint *)(iVar1 + 0x88) << 4) ||
         (uVar5 = 1, uVar9 != *(int *)(iVar1 + 0x8c) << 4)) {
        uVar5 = 0;
      }
      *(undefined4 *)(iVar1 + 0x98) = uVar5;
      *(int *)(iVar1 + 0x3cc0) = param_2;
      *(ushort *)(iVar1 + 0x3cc4) = param_3;
      *(int *)(iVar1 + 0x3cd0) = param_5;
      if ((param_5 != 0) && (param_5 != 2)) {
        *(undefined4 *)(iVar1 + 0x3cd0) = 0;
      }
      if ((*(int *)(iVar1 + 0x3cd0) == 1) || (*(int *)(iVar1 + 0x3cd0) == 3)) {
        if (param_4 == 0) {
          param_4 = uVar9;
        }
      }
      else if (param_4 == 0) {
        param_4 = uVar11;
      }
      *(uint *)(iVar1 + 0x3cc8) = param_4;
      uVar15 = fn_82CA4C20(iVar1);
      if ((int)uVar15 != 0) {
        return uVar15;
      }
      *(undefined4 *)(iVar1 + 0x3cbc) = 1;
      uVar15 = fn_82CA3A50(iVar1,param_6);
      if ((int)uVar15 != 0) {
        return uVar15;
      }
    }
  }
LAB_82c4d2d0:
  uVar15 = 0;
LAB_82c4d2d4:
  *(short *)(iVar1 + 0xe9c) = *(short *)(iVar1 + 0xe9c) + -1;
  return uVar15;
}

