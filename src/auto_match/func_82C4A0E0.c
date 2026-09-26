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
extern int fn_82A1DDC0();
extern int fn_82C45020();
extern int fn_82C47498();
extern int fn_82C47550();
extern int fn_82C47678();
extern int fn_82C4E1D0();
extern int fn_82C4E5E8();
extern int fn_82C52DE0();
extern int fn_82C564E8();
extern int fn_82C567D0();
extern int fn_82C5D898();
extern int fn_82C5E310();
extern int fn_82C5E340();
extern int fn_82C5E568();
extern int fn_82C5F9C8();
extern int fn_82C60938();
extern int fn_82C62BF0();
extern int fn_82C62ED0();
extern int fn_82C7A0F8();
extern int fn_82C7AA08();
extern int fn_82C7C118();
extern int fn_82C7D1E8();
extern int fn_82C7D2D8();
extern int fn_82C84208();
extern int fn_82C851E0();
extern int fn_82C87EA0();
extern int fn_82C8AE08();
extern int fn_82C8D5A8();
extern int fn_82C8EFC8();
extern int fn_82C902A8();
extern int fn_82C91D80();
extern int fn_82C91E80();
extern int fn_82C91F40();
extern int fn_82C9A740();
extern int fn_82CA12A8();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern int fn_82F6E7A8();
extern int fn_830B9E98();
extern int fn_830BD320();
extern int fn_830BFD18();
extern int fn_830BFF50();
extern int fn_830C00C0();
extern unsigned int lbl_820FC6B4;
extern unsigned int lbl_820FC79C;
extern unsigned int lbl_820FC844;
extern unsigned int lbl_820FC8AC;
extern unsigned int lbl_820FC950;
extern unsigned int lbl_820FC994;
extern unsigned int lbl_820FC9A8;
extern unsigned int lbl_820FC9E8;
extern unsigned int lbl_820FC9FC;
extern unsigned int lbl_820FCA20;
extern unsigned int lbl_820FCA64;
extern unsigned int lbl_820FCA88;
extern unsigned int lbl_820FCAC8;
extern unsigned int lbl_820FCAEC;
extern unsigned int lbl_820FCB10;
extern unsigned int lbl_820FCB24;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uRam83231e2c;
extern unsigned int uRam83231e30;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


undefined8
fn_82C4A0E0(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,undefined2 *param_5,
             ulonglong param_6,int param_7)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ushort uVar6;
  undefined8 uVar7;
  int iVar9;
  undefined8 uVar8;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uStack0000001c;
  uint uStack00000024;
  uint uStack0000002c;
  
  uStack0000001c = (uint)param_2;
  uStack0000002c = (uint)param_4;
  uStack00000024 = (uint)param_3;
  uVar15 = 0;
  *param_5 = 0;
  iVar18 = 0;
  if ((uStack0000002c != 0) && (((param_3 & 0xffffffff) == 0 || ((param_2 & 0xffffffff) == 0)))) {
    fn_82C47550(param_1);
    return 7;
  }
  if ((param_3 & 0xffffffff) == 0) {
    if (*(int *)(param_1 + 0xe8c) == 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x3d00) = 1;
    *(undefined4 *)(param_1 + 0xd88) = 1;
    return 0;
  }
  if (((param_3 & 0xffffffff) == 1) && (uStack0000002c == 0)) {
    if (*(int *)(param_1 + 0x3cb0) < 6) {
      return 1;
    }
    if (*(int *)(param_1 + 0x3cb0) != 7) {
      if (*(int *)(param_1 + 0xe8c) == 0) {
        return 1;
      }
      if ((*(int *)(param_1 + 0x39f4) != 0) && (uVar15 = fn_82C5E310(param_1), (int)uVar15 != 0)
         ) {
        return uVar15;
      }
      *(undefined4 *)(param_1 + 0xd88) = 1;
      *(undefined4 *)(param_1 + 0x3d00) = 1;
      return 0;
    }
  }
  if ((*(int *)(param_1 + 0x3cb0) == 7) && (param_7 == 0)) {
    uVar7 = fn_82C7C118(param_1,param_2,param_3,&stack0x0000001c,&stack0x00000024,
                            &stack0x0000002c);
    if ((int)uVar7 == 1) {
      uVar15 = 1;
    }
    else if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (*(int *)(param_1 + 0xe90) == 0) {
      return 5;
    }
    param_4 = (ulonglong)uStack0000002c;
    param_3 = (ulonglong)uStack00000024;
    param_2 = (ulonglong)uStack0000001c;
  }
  if (((param_3 & 0xffffffff) == 0) && ((int)param_4 == 0)) {
    if (*(int *)(param_1 + 0xe8c) == 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x3d00) = 1;
    *(undefined4 *)(param_1 + 0xd88) = 1;
    return 0;
  }
  fn_82C4E1D0(*(undefined4 *)(param_1 + 0x50),param_2,param_3,param_4,
                    *(int *)(param_1 + 0x3cb0) == 7);
  *(uint *)(*(int *)(param_1 + 0x50) + 0x18) = uStack0000002c;
  if (*(int *)(param_1 + 0xe94) != 0) {
    return 5;
  }
  *(undefined4 *)(param_1 + 0xd88) = 0;
  *(longlong *)(param_1 + 0xe30) = *(longlong *)(param_1 + 0xe30) + 1;
  *(longlong *)(param_1 + 0xe38) = *(longlong *)(param_1 + 0xe38) + 1;
  *(undefined4 *)(param_1 + 0x55d8) = 0;
  *(undefined4 *)(param_1 + 0x3d0c) = 0;
  *(undefined4 *)(param_1 + 0xd74) = 0;
  if (*(int *)(param_1 + 0xda4) == 0) {
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x120);
  }
  else {
    *(undefined4 *)(param_1 + 0xda4) = 0;
  }
  if (5 < *(int *)(param_1 + 0x3cb0)) {
    *(undefined4 *)(param_1 + 0x3d0c) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 8;
    *(int *)(param_1 + 0xb7c) = param_1 + 0xa5c;
    *(int *)(param_1 + 0xb88) = param_1 + 0xa88;
    *(undefined4 *)(param_1 + 0x160) = 8;
    *(undefined4 *)(param_1 + 0x50e4) = 8;
    *(undefined4 *)(param_1 + 0x3a14) = 8;
    *(undefined4 *)(param_1 + 0x548c) = 8;
  }
  uVar6 = (ushort)(param_6 >> 0x10);
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    if (*(int *)(param_1 + 0x5568) == 0) {
LAB_82c4a4d0:
      *(undefined4 *)(param_1 + 0x567c) = 0;
    }
    else {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar17 = 1;
      lVar14 = 0;
      uVar19 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar10 = uVar19 + 0x10;
      if ((uVar10 & 0xffffffff) == 0) {
        do {
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar10;
          *(int *)(puVar1 + 1) = (int)(uVar19 - uVar10);
          lVar14 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar17 & 0x3f)) +
                   lVar14;
          *puVar1 = *puVar1 << (uVar10 & 0x7f);
          if ((longlong)(uVar19 - uVar10) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar19 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar10 = uVar19 + 0x10;
        } while ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      uVar10 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar19 - uVar17);
      *puVar1 = uVar10 << (uVar17 & 0x7f);
      if ((longlong)(uVar19 - uVar17) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar10 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar14 & 0xffffffff) == 0)
      goto LAB_82c4a4d0;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar17 = 1;
      lVar14 = 0;
      uVar19 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar10 = uVar19 + 0x10;
      if ((uVar10 & 0xffffffff) == 0) {
        do {
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar10;
          *(int *)(puVar1 + 1) = (int)(uVar19 - uVar10);
          lVar14 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar17 & 0x3f)) +
                   lVar14;
          *puVar1 = *puVar1 << (uVar10 & 0x7f);
          if ((longlong)(uVar19 - uVar10) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar19 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar10 = uVar19 + 0x10;
        } while ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      uVar10 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar19 - uVar17);
      *puVar1 = uVar10 << (uVar17 & 0x7f);
      if ((longlong)(uVar19 - uVar17) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar10 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar14 & 0xffffffff) == 0) {
        *(undefined4 *)(param_1 + 0x567c) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x567c) = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x50cc) = 0;
    *(undefined4 *)(param_1 + 0x50c8) = 0;
    if (*(int *)(param_1 + 0x567c) == 0) {
      *(undefined **)(param_1 + 0x724) = &lbl_820FC9A8;
      *(undefined **)(param_1 + 0x728) = &lbl_820FC950;
      *(undefined **)(param_1 + 0x730) = &lbl_820FC6B4;
      *(undefined **)(param_1 + 0x734) = &lbl_820FC844;
      *(undefined **)(param_1 + 0x738) = &lbl_820FC79C;
      *(undefined **)(param_1 + 0x73c) = &lbl_820FC8AC;
      *(undefined **)(param_1 + 0x74c) = &lbl_820FC994;
      *(undefined **)(param_1 + 0x750) = &lbl_820FC9E8;
      fn_82C5D898(param_1);
      *(undefined4 *)(param_1 + 0x50c8) = 0;
      *(undefined4 *)(param_1 + 0x50cc) = 0;
      *(undefined4 *)(param_1 + 0x50d0) = 0;
      iVar18 = 0;
      fn_82C52DE0(param_1);
      uVar7 = fn_82C60938(param_1,1);
      if ((int)uVar7 != 0) goto LAB_82c4a334;
      iVar16 = *(int *)(param_1 + 0x120);
      if ((iVar16 != 2) && (iVar16 != 4)) {
        uVar2 = *(undefined4 *)(param_1 + 0x56cc);
        *(undefined4 *)(param_1 + 0x56cc) = 0;
        *(undefined4 *)(param_1 + 0x56d0) = uVar2;
      }
      if (iVar16 == 5) {
        if (((*(int *)(param_1 + 0x56a8) != 0) && (*(int *)(param_1 + 0x3a04) != 0)) &&
           (0 < *(int *)(param_1 + 0x39f4))) {
          if (*(int *)(param_1 + 0xd54) == 1) {
            *(undefined4 *)(param_1 + 0xd54) = 0;
          }
          if (*(int *)(param_1 + 0xd68) != 0) {
            fn_82C91D80(param_1);
          }
          fn_82C91E80(param_1);
          fn_82A1DDC0(*(undefined4 *)(param_1 + 0xec0),*(undefined4 *)(param_1 + 0xecc),
                            (longlong)*(int *)(param_1 + 0xd4) * (longlong)*(int *)(param_1 + 0xcc))
          ;
          fn_82A1DDC0(*(undefined4 *)(param_1 + 0xec4),*(undefined4 *)(param_1 + 0xed0),
                            (longlong)*(int *)(param_1 + 0xd8) * (longlong)*(int *)(param_1 + 0xd0))
          ;
          fn_82A1DDC0(*(undefined4 *)(param_1 + 0xec8),*(undefined4 *)(param_1 + 0xed4),
                            (longlong)*(int *)(param_1 + 0xd8) * (longlong)*(int *)(param_1 + 0xd0))
          ;
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0x6f0),0,*(int *)(param_1 + 0x90) << 4);
        }
        fn_82CA12A8(param_1,*(undefined4 *)(param_1 + 0x50d0));
        uVar15 = fn_82C47498(param_1);
        *(undefined4 *)(param_1 + 0xd88) = 1;
        *(undefined4 *)(param_1 + 0x564c) = 1;
        return uVar15;
      }
      goto LAB_82c4a8f0;
    }
    *(undefined **)(param_1 + 0x724) = &lbl_820FCA88;
    *(undefined **)(param_1 + 0x728) = &lbl_820FCA20;
    *(undefined **)(param_1 + 0x730) = &lbl_820FC9FC;
    *(undefined **)(param_1 + 0x734) = &lbl_820FCAC8;
    *(undefined **)(param_1 + 0x738) = &lbl_820FCA64;
    *(undefined **)(param_1 + 0x73c) = &lbl_820FCAEC;
    *(undefined **)(param_1 + 0x74c) = &lbl_820FCB10;
    *(undefined **)(param_1 + 0x750) = &lbl_820FCB24;
    if (*(int *)(param_1 + 0x567c) == 2) {
      fn_82C5D898(param_1);
      *(undefined4 *)(param_1 + 0x50c8) = 1;
      *(undefined4 *)(param_1 + 0x50d0) = 0;
      iVar18 = 1;
      fn_82C52DE0(param_1);
      uVar7 = fn_82C851E0(param_1,1);
      if ((int)uVar7 != 0) goto LAB_82c4a334;
      iVar16 = *(int *)(param_1 + 0x120);
      if ((iVar16 != 2) && (iVar16 != 4)) {
        uVar2 = *(undefined4 *)(param_1 + 0x56cc);
        *(undefined4 *)(param_1 + 0x56cc) = 2;
        *(undefined4 *)(param_1 + 0x56d0) = uVar2;
      }
      if (iVar16 == 5) {
        if (((*(int *)(param_1 + 0x56a8) != 0) && (*(int *)(param_1 + 0x3a04) != 0)) &&
           (0 < *(int *)(param_1 + 0x39f4))) {
          if (*(int *)(param_1 + 0xd54) == 1) {
            *(undefined4 *)(param_1 + 0xd54) = 0;
          }
          if (*(int *)(param_1 + 0xd68) != 0) {
            fn_82C91D80(param_1);
          }
          fn_82C91E80(param_1);
          fn_82A1DDC0(*(undefined4 *)(param_1 + 0xec0),*(undefined4 *)(param_1 + 0xecc),
                            (longlong)*(int *)(param_1 + 0xd4) * (longlong)*(int *)(param_1 + 0xcc))
          ;
          fn_82A1DDC0(*(undefined4 *)(param_1 + 0xec4),*(undefined4 *)(param_1 + 0xed0),
                            (longlong)*(int *)(param_1 + 0xd8) * (longlong)*(int *)(param_1 + 0xd0))
          ;
          fn_82A1DDC0(*(undefined4 *)(param_1 + 0xec8),*(undefined4 *)(param_1 + 0xed4),
                            (longlong)*(int *)(param_1 + 0xd8) * (longlong)*(int *)(param_1 + 0xd0))
          ;
        }
        uVar19 = (ulonglong)*(uint *)(param_1 + 0x8c);
        uVar3 = *(uint *)(param_1 + 0x88);
        if (uVar19 != 0) {
          puVar11 = (uint *)(*(int *)(param_1 + 0x118) + -0x18);
          uVar10 = (ulonglong)uVar3;
          do {
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              puVar5 = puVar11 + 6;
              puVar11 = puVar11 + 6;
              *puVar11 = *puVar5 | 0x20000;
            }
            uVar19 = uVar19 - 1;
            uVar10 = (ulonglong)uVar3;
          } while (uVar19 != 0);
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(param_1 + 0xc10),0,
                     ((longlong)(*(int *)(param_1 + 0x8c) + 1) * (longlong)*(int *)(param_1 + 0x88)
                     & 0xfffffffU) << 4);
      }
      goto LAB_82c4a8f0;
    }
    fn_82C5D898(param_1);
    *(undefined4 *)(param_1 + 0x50c8) = 1;
    *(undefined4 *)(param_1 + 0x50cc) = 1;
    iVar18 = 1;
    fn_82C52DE0(param_1);
    uVar7 = fn_82C87EA0(param_1,1);
    if ((int)uVar7 != 0) goto LAB_82c4a334;
    if ((*(int *)(param_1 + 0x5510) == 2) || (*(int *)(param_1 + 0x5510) == 4)) {
      *(undefined4 *)(param_1 + 0x120) = 2;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x56cc);
      *(undefined4 *)(param_1 + 0x56cc) = 1;
      *(undefined4 *)(param_1 + 0x56d0) = uVar2;
    }
    iVar16 = (int)((uint)((param_6 & 0xffffffff) << 0x10) | (uint)uVar6) >> 0x1c;
    if ((iVar16 == 3) || (iVar16 == 4)) {
      uVar7 = fn_82C902A8(param_1);
    }
    else {
      uVar7 = fn_82C84208(param_1);
    }
    iVar9 = (int)uVar7;
    *(undefined4 *)(*(int *)(param_1 + 0xea0) + 0x268) = *(undefined4 *)(param_1 + 0x56f0);
    iVar16 = 1;
  }
  else {
    uVar7 = fn_82C62ED0(param_1);
    if ((int)uVar7 != 0) goto LAB_82c4a334;
LAB_82c4a8f0:
    iVar16 = 0;
    *(undefined4 *)(param_1 + 0x79c) = 1;
    *(undefined4 *)(param_1 + 0x511c) = 0;
    if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) != 0) &&
       (iVar9 = fn_82C45020(*(int *)(param_1 + 0x6070),param_1), iVar9 != 0)) {
      return 1;
    }
    if ((*(int *)(param_1 + 0x5710) != 0) && (uVar8 = fn_82C7D1E8(param_1), (int)uVar8 != 0)) {
      return uVar8;
    }
    iVar9 = *(int *)(param_1 + 0x120);
    if ((iVar9 == 0) || (iVar9 == 4)) {
      if (*(int *)(param_1 + 0x3a04) != 0) {
        if (*(int *)(param_1 + 0x39f4) < 1) {
          fn_82C5F9C8(param_1,*(int *)(param_1 + 0x39f4) == 0);
        }
        else {
          iVar13 = *(int *)(param_1 + 0xd54);
          if (iVar13 == -3) {
            if (iVar9 == 2) {
              return 1;
            }
            *(uint *)(param_1 + 0xd54) = (uint)(*(int *)(param_1 + 0x5638) == 0);
            if (*(int *)(param_1 + 0xd68) != 0) {
              fn_82C91D80(param_1);
            }
            fn_82C91E80(param_1);
          }
          else if ((iVar9 == 2) || (iVar9 == 4)) {
            if ((iVar13 == 1) && (*(int *)(param_1 + 0x5638) == 0)) {
              *(undefined4 *)(param_1 + 0xd74) = 1;
              *(undefined2 *)(param_1 + 0xe9c) = 1;
              fn_82C47498(param_1);
              *(undefined4 *)(param_1 + 0x3d00) = 1;
              return 0;
            }
            if (*(int *)(param_1 + 0xd68) != 0) {
              fn_82C91D80(param_1);
            }
          }
          else {
            if (iVar13 == 1) {
              *(undefined4 *)(param_1 + 0xd54) = 0;
LAB_82c4a9f8:
              fn_82C91D80(param_1);
            }
            else if (*(int *)(param_1 + 0xd68) != 0) goto LAB_82c4a9f8;
            fn_82C91E80(param_1);
            *(undefined4 *)(param_1 + 0xd5c) = 0;
          }
        }
      }
    }
    else if (*(int *)(param_1 + 0xe8c) == 0) {
      uVar15 = fn_82C47498(param_1);
      if ((int)uVar15 == 0) {
        return 5;
      }
      return uVar15;
    }
    uRam83231e30 = *(undefined4 *)(param_1 + 0xf8);
    if ((*(int *)(param_1 + 0x3cb0) == 6) ||
       ((*(int *)(param_1 + 0x3cb0) == 7 && (*(int *)(param_1 + 0x50c8) == 0)))) {
      if ((*(int *)(param_1 + 0xd50) == 0) ||
         (((*(code **)(param_1 + 0xc80) == fn_82C7AA08 || (*(int *)(param_1 + 0x88) == 1)) ||
          (0 < *(int *)(param_1 + 0xd48))))) {
        *(code **)(param_1 + 0x3ddc) = fn_82C5E568;
        *(code **)(param_1 + 0x3de0) = fn_82C9A740;
        *(code **)(param_1 + 0xc14) = fn_82C91F40;
      }
      else {
        *(code **)(param_1 + 0x3de0) = fn_82C7A0F8;
        *(code **)(param_1 + 0xc14) = fn_830B9E98;
        *(code **)(param_1 + 0x3ddc) = fn_830BD320;
      }
    }
    iVar9 = *(int *)(param_1 + 0x120);
    if ((iVar9 == 0) || (iVar9 == 4)) {
      if ((*(int *)(param_1 + 0x3e5c) != 0) && (iVar9 != 4)) {
        *(undefined4 *)(param_1 + 0x3e64) = 0;
      }
      if (*(int *)(param_1 + 0x3a24) != 0) {
        fn_82C62BF0(param_1);
      }
      uRam83231e2c = 1;
      if (*(int *)(param_1 + 0x50c8) == 0) {
        if (*(int *)(param_1 + 0xfa4) == 0) {
          if (*(int *)(param_1 + 0xf8c) == 0) {
            uVar7 = (**(code **)(param_1 + 0x3ddc))(param_1);
          }
          else {
            fn_82F6E7A8(0xffffffff820fbbbc,0xffffffff820fbbc8,0xbb5);
            fn_82F6E7A8(0xffffffff820fbc30);
            fn_82F6E7A8(0xffffffff821cc86c);
            uVar7 = 0xfffffffffffffffa;
          }
        }
        else {
          uVar7 = fn_82C8AE08(param_1);
        }
      }
      else {
        uVar7 = fn_830BFD18(param_1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xea0) + 0x268) = *(undefined4 *)(param_1 + 0x56f0);
      if ((int)uVar7 == 1) {
        uVar15 = 1;
        uVar7 = 0;
      }
      else if ((int)uVar7 != 0) goto LAB_82c4a334;
      iVar9 = *(int *)(param_1 + 0x3cb0);
      if (iVar9 != 0) {
        if ((iVar9 == 2) || (iVar9 == 3)) {
          uVar7 = fn_82C567D0(param_1);
        }
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        if (((5 < *(int *)(param_1 + 0x3cb0)) && (*(int *)(param_1 + 0x120) != 4)) &&
           (0 < *(int *)(param_1 + 0x39f4))) {
          uVar3 = *(uint *)(param_1 + 0x8c);
          uVar12 = 0;
          uVar4 = *(uint *)(param_1 + 0x88);
          if (uVar3 != 0) {
            do {
              lVar14 = 0;
              for (uVar19 = (ulonglong)uVar4; uVar19 != 0; uVar19 = uVar19 - 1) {
                *(undefined2 *)
                 ((int)(((longlong)*(int *)(param_1 + 0x88) * (longlong)(int)uVar12 + lVar14 &
                        0xffffffffU) << 3) + *(int *)(param_1 + 0xc0c)) = 0;
                uVar10 = (longlong)*(int *)(param_1 + 0x88) * (longlong)(int)uVar12 + lVar14;
                lVar14 = lVar14 + 1;
                *(undefined2 *)((int)((uVar10 & 0xffffffff) << 3) + *(int *)(param_1 + 0xc0c) + 2) =
                     0;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar3);
          }
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0xc10),0,
                       ((longlong)(*(int *)(param_1 + 0x8c) + 1) *
                        (longlong)*(int *)(param_1 + 0x88) & 0xfffffffU) << 4);
        }
        if ((0 < *(int *)(param_1 + 0x39f4)) && (*(int *)(param_1 + 0x120) != 4)) {
          uVar3 = *(uint *)(param_1 + 0x8c);
          uVar12 = 0;
          uVar4 = *(uint *)(param_1 + 0x88);
          if (uVar3 != 0) {
            do {
              iVar9 = 0;
              for (uVar19 = (ulonglong)uVar4; uVar19 != 0; uVar19 = uVar19 - 1) {
                iVar13 = *(int *)(param_1 + 0x88) * uVar12 + iVar9;
                iVar9 = iVar9 + 1;
                iVar13 = iVar13 * 0x18;
                *(uint *)(iVar13 + *(int *)(param_1 + 0x118)) =
                     *(uint *)(iVar13 + *(int *)(param_1 + 0x118)) & 0xfffdffff;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar3);
          }
        }
      }
      *(undefined4 *)(param_1 + 0xe8c) = 1;
      goto LAB_82c4af84;
    }
    uRam83231e2c = 0;
    fn_82C564E8(param_1);
    if ((*(int *)(param_1 + 0x3a04) == 0) || (*(int *)(param_1 + 0x120) == 1)) {
      if (*(int *)(param_1 + 0x39f4) == 0) {
        fn_82C5F9C8(param_1,1);
        if ((((*(int *)(param_1 + 0x3a24) == 0) ||
             (*(int *)(param_1 + 0x3a28) == *(int *)(param_1 + 0x3a2c))) &&
            (*(int *)(param_1 + 0x3cb0) < 6)) && (*(int *)(param_1 + 0x4fb0) != 0)) {
          (**(code **)(param_1 + 0x3e30))
                    (0,*(undefined4 *)(param_1 + 0xecc),0,*(undefined4 *)(param_1 + 0xac),
                     *(undefined4 *)(param_1 + 0xdc),1,1,*(undefined4 *)(param_1 + 0xa4));
          (**(code **)(param_1 + 0x3e2c))
                    (0,*(undefined4 *)(param_1 + 0xed0),*(undefined4 *)(param_1 + 0xed4),0,
                     *(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xe0),1,1);
        }
      }
      else {
        if (*(int *)(param_1 + 0xd54) == 1) {
          *(undefined4 *)(param_1 + 0xd54) = 0;
LAB_82c4ae60:
          fn_82C91D80(param_1);
        }
        else if (*(int *)(param_1 + 0xd68) != 0) goto LAB_82c4ae60;
        fn_82C91E80(param_1);
      }
      *(undefined4 *)(param_1 + 0xd5c) = 0;
      fn_82C7D2D8(param_1);
      if (*(int *)(param_1 + 0x3e5c) != 0) {
        *(undefined4 *)(param_1 + 0x3e64) = 0;
      }
      if (*(int *)(param_1 + 0x3cb0) < 6) {
LAB_82c4af2c:
        uVar7 = (**(code **)(param_1 + 0x3de0))(param_1);
      }
      else {
        if (*(int *)(param_1 + 0x3a24) != 0) {
          fn_82C62BF0(param_1);
        }
        if (*(int *)(param_1 + 0x39f4) != 0) {
          fn_82C5E340(param_1);
        }
        fn_82C8EFC8(param_1);
        fn_82C8D5A8(param_1);
        if (*(int *)(param_1 + 0x50c8) == 0) {
          if (*(int *)(param_1 + 0xf8c) == 0) goto LAB_82c4af2c;
          fn_82F6E7A8(0xffffffff820fbbbc,0xffffffff820fbbc8,0xc66);
          fn_82F6E7A8(0xffffffff820fbc30);
          fn_82F6E7A8(0xffffffff821cc86c);
          uVar7 = 0xfffffffffffffffa;
        }
        else {
          uVar7 = fn_830BFF50(param_1);
        }
      }
      *(undefined4 *)(*(int *)(param_1 + 0xea0) + 0x268) = *(undefined4 *)(param_1 + 0x56f0);
      if ((int)uVar7 == 1) {
        uVar15 = 1;
        uVar7 = 0;
      }
      else if ((int)uVar7 != 0) {
LAB_82c4a334:
        fn_82C47550(param_1);
        return uVar7;
      }
    }
    else if (*(int *)(param_1 + 0x120) == 2) {
      if ((*(int *)(param_1 + 0xd54) == 1) && (*(int *)(param_1 + 0x5638) == 0)) {
        *(undefined4 *)(param_1 + 0xd74) = 1;
        *(undefined2 *)(param_1 + 0xe9c) = 1;
        uVar15 = fn_82C47498(param_1);
        *(undefined4 *)(param_1 + 0x3d00) = 1;
        return uVar15;
      }
      if (*(int *)(param_1 + 0xd5c) != 0) {
        *(undefined4 *)(param_1 + 0xd5c) = 0;
        if (*(int *)(param_1 + 0xd68) != 0) {
          fn_82C91D80(param_1);
        }
        fn_82C91E80(param_1);
        fn_82F68CC0(*(undefined4 *)(param_1 + 0xec0),*(undefined4 *)(param_1 + 0xecc),
                     (longlong)*(int *)(param_1 + 0xcc) * (longlong)*(int *)(param_1 + 0xd4));
        fn_82F68CC0(*(undefined4 *)(param_1 + 0xec4),*(undefined4 *)(param_1 + 0xed0),
                     *(int *)(param_1 + 0xcc) * *(int *)(param_1 + 0xd4) >> 2);
        fn_82F68CC0(*(undefined4 *)(param_1 + 0xec8),*(undefined4 *)(param_1 + 0xed4),
                     *(int *)(param_1 + 0xcc) * *(int *)(param_1 + 0xd4) >> 2);
        *(undefined4 *)(param_1 + 0xd68) = 1;
      }
      iVar16 = (int)((uint)((param_6 & 0xffffffff) << 0x10) | (uint)uVar6) >> 0x1c;
      if ((iVar16 == 3) || (iVar16 == 4)) {
        if (*(int *)(param_1 + 0xf8c) == 0) {
          uVar7 = fn_82C902A8(param_1);
          *(undefined4 *)(param_1 + 0x3d08) = 1;
          *(undefined4 *)(param_1 + 0x3cf0) = 1;
        }
        else {
          fn_82F6E7A8(0xffffffff820fbbbc,0xffffffff820fbbc8,0xca4);
          fn_82F6E7A8(0xffffffff820fbc30);
          fn_82F6E7A8(0xffffffff821cc86c);
          *(undefined4 *)(param_1 + 0x3d08) = 1;
          uVar7 = 0xfffffffffffffffa;
          *(undefined4 *)(param_1 + 0x3cf0) = 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0xd68) != 0) {
          fn_82C91D80(param_1);
        }
        if ((*(int *)(param_1 + 0xf8c) == 0) && (*(int *)(param_1 + 0x50c8) == 0)) {
          uVar7 = (**(code **)(param_1 + 0xc14))(param_1);
          *(undefined4 *)(*(int *)(param_1 + 0xea0) + 0x268) = *(undefined4 *)(param_1 + 0x56f0);
          *(undefined4 *)(param_1 + 0x3d08) = 1;
          *(undefined4 *)(param_1 + 0x3cf0) = 1;
        }
        else if (*(int *)(param_1 + 0x50c8) == 0) {
          fn_82F6E7A8(0xffffffff820fbbbc,0xffffffff820fbbc8,0xcc1);
          fn_82F6E7A8(0xffffffff820fbc30);
          fn_82F6E7A8(0xffffffff821cc86c);
          uVar7 = 0xfffffffffffffffa;
          *(undefined4 *)(*(int *)(param_1 + 0xea0) + 0x268) = *(undefined4 *)(param_1 + 0x56f0);
          *(undefined4 *)(param_1 + 0x3d08) = 1;
          *(undefined4 *)(param_1 + 0x3cf0) = 1;
        }
        else {
          uVar7 = fn_830C00C0(param_1);
          *(undefined4 *)(*(int *)(param_1 + 0xea0) + 0x268) = *(undefined4 *)(param_1 + 0x56f0);
          *(undefined4 *)(param_1 + 0x3d08) = 1;
          *(undefined4 *)(param_1 + 0x3cf0) = 1;
        }
      }
    }
    if (*(int *)(param_1 + 0x120) == 1) {
      *(undefined4 *)(param_1 + 0xd58) = 0;
    }
    iVar9 = (int)uVar7;
    iVar16 = 0;
  }
  if (iVar9 == 1) {
    uVar15 = 1;
  }
  else if ((int)uVar7 != 0) {
    fn_82C47550(param_1);
    return uVar7;
  }
LAB_82c4af84:
  *(undefined2 *)(param_1 + 0xe9c) = 1;
  *param_5 = 1;
  *(uint *)(param_1 + 0x3d00) = (-(uint)(*(int *)(param_1 + 0xda4) != 0) & 0xfffffffe) + 3;
  if ((*(int *)(param_1 + 0x50c8) == iVar18) && (*(int *)(param_1 + 0x50cc) == iVar16)) {
    if (((*(int *)(param_1 + 0x120) == 1) || (*(int *)(param_1 + 0x120) == 0)) &&
       ((*(int *)(param_1 + 0x50c8) == 0 || (*(int *)(param_1 + 0x50cc) == 0)))) {
      fn_82CA12A8(param_1,*(undefined4 *)(param_1 + 0x50d0));
    }
    if ((((*(int *)(param_1 + 0x567c) == 1) && (*(int *)(param_1 + 0x5510) == 1)) &&
        (*(int *)(param_1 + 0x5514) == 0)) && (*(int *)(param_1 + 0x5678) != 0)) {
      fn_82C47678(param_1);
      *(undefined4 *)(param_1 + 0x3d0c) = 1;
    }
  }
  uVar7 = fn_82C47498(param_1);
  if ((int)uVar15 == 0) {
    return uVar7;
  }
  return uVar15;
}

