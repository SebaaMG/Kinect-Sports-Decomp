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
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern int fn_82A9FA30();
extern int fn_82C44B80();
extern int fn_82C44BE0();
extern int fn_82C45200();
extern int fn_82C4E1D0();
extern int fn_82C4E5E8();
extern int fn_82C52DE0();
extern int fn_82C5D898();
extern int fn_82C5E568();
extern int fn_82C5F9C8();
extern int fn_82C60938();
extern int fn_82C62ED0();
extern int fn_82C69448();
extern int fn_82C6E430();
extern int fn_82C6EC58();
extern int fn_82C6F130();
extern int fn_82C742E8();
extern int fn_82C74D98();
extern int fn_82C751C0();
extern int fn_82C7AA08();
extern int fn_82C7B980();
extern int fn_82C7C118();
extern int fn_830BD320();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack_90;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_820FC6B4;
extern unsigned int lbl_820FC79C;
extern unsigned int lbl_820FC844;
extern unsigned int lbl_820FC8AC;
extern unsigned int lbl_820FC950;
extern unsigned int lbl_820FC994;
extern unsigned int lbl_820FC9A8;
extern unsigned int lbl_820FC9E8;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;


undefined8
fn_82C46C48(int param_1,int param_2,int param_3,undefined8 param_4,longlong param_5,uint param_6,
             int param_7)

{
  int iVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  code *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iStack0000001c;
  int iStack00000024;
  int iStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [29];
  
  iStack_90 = 1;
  if (param_1 == 0) {
    return 0xfffffffffffffffd;
  }
  iVar1 = *(int *)(param_1 + 0x2e0);
  if ((iVar1 == 0) || ((*(int *)(iVar1 + 0x3c04) == 0 && (*(int *)(iVar1 + 0x3c48) == 0)))) {
LAB_82c46cb8:
    uVar4 = 0xffffffffffffffff;
  }
  else {
    if (2 < *(int *)(iVar1 + 0x3d00)) {
      *(int *)(iVar1 + 0xd84) = *(int *)(iVar1 + 0xd84) + 1;
    }
    *(undefined4 *)(iVar1 + 0x3d00) = 0;
    iStack0000001c = param_2;
    iStack00000024 = param_3;
    if (param_7 == 0) {
      fn_82A9FA30(*(undefined4 *)(iVar1 + 0xd30),0,&stack0x0000001c,4,&stack0x00000024,&iStack_90);
      if ((iStack_90 != 0) && ((iStack00000024 == 0 || (iStack0000001c == 0)))) {
        return 7;
      }
      if (iStack00000024 != 0) goto LAB_82c46d70;
    }
    else {
      iStack_90 = 0;
LAB_82c46d70:
      if (*(int *)(iVar1 + 0x3cb0) == 7) {
        uVar4 = fn_82C7C118(iVar1,iStack0000001c,iStack00000024,&stack0x0000001c,
                                &stack0x00000024,&iStack_90);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (*(int *)(iVar1 + 0xe90) == 0) {
          return 5;
        }
      }
      if ((iStack00000024 != 0) || (iStack_90 != 0)) {
        fn_82C4E1D0(*(undefined4 *)(iVar1 + 0x50),iStack0000001c,iStack00000024,iStack_90,
                          *(int *)(iVar1 + 0x3cb0) == 7);
        uVar11 = 1;
        iVar10 = 0;
        *(int *)(*(int *)(iVar1 + 0x50) + 0x18) = iStack_90;
        puVar2 = *(ulonglong **)(iVar1 + 0x54);
        *(undefined4 *)(iVar1 + 0x3d0c) = 1;
        *(undefined4 *)(iVar1 + 0xd88) = 0;
        *(longlong *)(iVar1 + 0xe38) = *(longlong *)(iVar1 + 0xe38) + 1;
        *(longlong *)(iVar1 + 0xe30) = *(longlong *)(iVar1 + 0xe30) + 1;
        uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar10 = iVar6;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar11 = uVar11 - uVar8;
            *(int *)(puVar2 + 1) = (int)(uVar5 - uVar8);
            iVar10 = ((int)(*puVar2 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar11 & 0x3f)) + iVar10;
            *puVar2 = *puVar2 << (uVar8 & 0x7f);
            if ((longlong)(uVar5 - uVar8) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar8 = uVar5 + 0x10;
            iVar6 = iVar10;
          } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
        }
        uVar8 = *puVar2;
        *(int *)(puVar2 + 1) = (int)(uVar5 - uVar11);
        *puVar2 = uVar8 << (uVar11 & 0x7f);
        if ((longlong)(uVar5 - uVar11) < 0) {
          fn_82C4E5E8(puVar2);
        }
        puVar2 = *(ulonglong **)(iVar1 + 0x54);
        uVar12 = 1;
        *(int *)(iVar1 + 0x124) = (int)(uVar8 >> (0x40 - uVar11 & 0x7f)) + iVar10;
        iVar10 = 0;
        uVar3 = *(undefined4 *)(iVar1 + 0x3c08);
        uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar10 = iVar6;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar12 = uVar12 - uVar8;
            *(int *)(puVar2 + 1) = (int)(uVar5 - uVar8);
            iVar10 = ((int)(*puVar2 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar12 & 0x3f)) + iVar10;
            *puVar2 = *puVar2 << (uVar8 & 0x7f);
            if ((longlong)(uVar5 - uVar8) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar8 = uVar5 + 0x10;
            iVar6 = iVar10;
          } while ((uVar8 & 0xffffffff) < (uVar12 & 0xffffffff));
        }
        uVar8 = *puVar2;
        *(int *)(puVar2 + 1) = (int)(uVar5 - uVar12);
        *puVar2 = uVar8 << (uVar12 & 0x7f);
        if ((longlong)(uVar5 - uVar12) < 0) {
          fn_82C4E5E8(puVar2);
        }
        *(int *)(iVar1 + 0x3c08) = (int)(uVar8 >> (0x40 - uVar12 & 0x7f)) + iVar10 + 1;
        if (*(int *)(iVar1 + 0x124) == 0) {
          iVar6 = *(int *)(iVar1 + 0xb4);
          *(undefined4 *)(iVar1 + 0x79c) = 1;
          *(int *)(iVar1 + 0x88) = iVar6 >> 4;
          *(int *)(iVar1 + 0xec) = iVar6 * 8 + -8;
          *(int *)(iVar1 + 0xcc) = iVar6;
          *(int *)(iVar1 + 0xd4) = *(int *)(iVar1 + 0xbc);
          *(int *)(iVar1 + 0xd0) = *(int *)(iVar1 + 0xc0);
          *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(iVar1 + 200);
          *(int *)(iVar1 + 0x8c) = *(int *)(iVar1 + 0xbc) >> 4;
          *(int *)(iVar1 + 0xe4) = iVar6 << 4;
          *(int *)(iVar1 + 0xe8) = *(int *)(iVar1 + 0xc0) << 3;
          *(undefined4 *)(iVar1 + 0xdc) = 0;
          *(undefined4 *)(iVar1 + 0xe0) = 0;
          uVar4 = fn_82C6EC58(iVar1,iVar6,*(undefined4 *)(iVar1 + 0xa0),param_4,param_5);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar9 = (int)param_4 + 0xf;
          *(int *)(iVar1 + 0x3c0c) = (int)param_4;
          *(int *)(iVar1 + 0x3c10) = (int)param_5;
          *(undefined4 *)(iVar1 + 0xd40) = 1;
          iVar6 = (int)(param_5 + 0xfU);
          *(uint *)(iVar1 + 0x3c14) =
               (((int)uVar9 >> 4) + (uint)((int)uVar9 < 0 && (uVar9 & 0xf) != 0)) * 0x10;
          *(uint *)(iVar1 + 0x3c18) =
               ((iVar6 >> 4) + (uint)(iVar6 < 0 && (param_5 + 0xfU & 0xf) != 0)) * 0x10;
          uVar4 = fn_82C7B980(iVar1);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (5 < *(int *)(iVar1 + 0x3cb0)) {
            *(undefined4 *)(iVar1 + 0x3d0c) = 0;
            *(undefined4 *)(iVar1 + 0x15c) = 8;
            *(int *)(iVar1 + 0xb7c) = iVar1 + 0xa5c;
            *(int *)(iVar1 + 0xb88) = iVar1 + 0xa88;
            *(undefined4 *)(iVar1 + 0x160) = 8;
            *(undefined4 *)(iVar1 + 0x50e4) = 8;
            *(undefined4 *)(iVar1 + 0x3a14) = 8;
            *(undefined4 *)(iVar1 + 0x548c) = 8;
          }
          if (*(int *)(iVar1 + 0x3c64) == 0) {
            fn_82C5F9C8(iVar1,*(int *)(iVar1 + 0x39f4) == 0);
          }
          if (*(int *)(iVar1 + 0x3cb0) == 7) {
            if (*(int *)(iVar1 + 0x5568) == 0) {
              *(undefined4 *)(iVar1 + 0x50cc) = 0;
              *(undefined4 *)(iVar1 + 0x50c8) = 0;
              *(undefined **)(iVar1 + 0x724) = &lbl_820FC9A8;
              *(undefined **)(iVar1 + 0x728) = &lbl_820FC950;
              *(undefined **)(iVar1 + 0x730) = &lbl_820FC6B4;
              *(undefined **)(iVar1 + 0x734) = &lbl_820FC844;
              *(undefined **)(iVar1 + 0x738) = &lbl_820FC79C;
              *(undefined **)(iVar1 + 0x73c) = &lbl_820FC8AC;
              *(undefined **)(iVar1 + 0x74c) = &lbl_820FC994;
              *(undefined **)(iVar1 + 0x750) = &lbl_820FC9E8;
              fn_82C5D898(iVar1);
              *(undefined4 *)(iVar1 + 0x50c8) = 0;
              *(undefined4 *)(iVar1 + 0x50d0) = 0;
              fn_82C52DE0(iVar1);
              uVar4 = fn_82C60938(iVar1,1);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              if (*(int *)(iVar1 + 0x120) != 5) goto LAB_82c47178;
            }
            goto LAB_82c46d50;
          }
          uVar4 = fn_82C62ED0(iVar1);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
LAB_82c47178:
          if ((((param_6 & 0xf) == 0) ||
              (iVar6 = (int)(param_6 << 0x10 | param_6 >> 0x10) >> 0x1c, iVar6 == 3)) ||
             (iVar6 == 4)) {
            *(undefined4 *)(iVar1 + 0x3cfc) = 0;
          }
          else {
            *(undefined4 *)(iVar1 + 0x3cfc) = 2;
          }
          if ((*(int *)(iVar1 + 0x3cb0) == 6) ||
             ((*(int *)(iVar1 + 0x3cb0) == 7 && (*(int *)(iVar1 + 0x50c8) == 0)))) {
            if ((*(int *)(iVar1 + 0xd50) == 0) ||
               (((*(code **)(iVar1 + 0xc80) == fn_82C7AA08 || (*(int *)(iVar1 + 0x88) == 1))
                || (0 < *(int *)(iVar1 + 0xd48))))) {
              pcVar7 = fn_82C5E568;
            }
            else {
              pcVar7 = fn_830BD320;
            }
            *(code **)(iVar1 + 0x3ddc) = pcVar7;
          }
          uVar4 = (**(code **)(iVar1 + 0x3ddc))(iVar1);
          *(undefined4 *)(*(int *)(iVar1 + 0xea0) + 0x268) = *(undefined4 *)(iVar1 + 0x56f0);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          fn_82C751C0(iVar1);
          if (*(int *)(iVar1 + 0x3cd4) != 0) {
            fn_82C44B80(iVar1);
            fn_82C74D98(iVar1,0,*(undefined4 *)(iVar1 + 0xf1c),1);
            fn_82C44BE0(iVar1);
          }
          *(undefined4 *)(iVar1 + 0xe8c) = 1;
        }
        else {
          if (*(int *)(iVar1 + 0xe8c) == 0) goto LAB_82c46cb8;
          iVar6 = (int)(param_6 << 0x10 | param_6 >> 0x10) >> 0x1c;
          *(undefined4 *)(iVar1 + 0x120) = 2;
          *(undefined4 *)(*(int *)(iVar1 + 0xea0) + 0x268) = *(undefined4 *)(iVar1 + 0x56f0);
          if ((iVar6 == 3) || (iVar6 == 4)) {
            *(undefined4 *)(iVar1 + 0x3d00) = 1;
            goto LAB_82c47480;
          }
        }
        if ((*(int *)(iVar1 + 0x3c08) == 1) || (*(int *)(iVar1 + 0x3c08) == 2)) {
          if (*(int *)(iVar1 + 0x3c48) == 0) {
            uVar4 = fn_82C45200(iVar1,&fStack_80,afStack_74,&fStack_84,&fStack_78,&fStack_7c,
                                  &fStack_88,&fStack_8c);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            dVar13 = lbl_82005758;
            dVar15 = lbl_82005710;
            dVar17 = lbl_82005710;
            dVar18 = lbl_82005758;
            if ((*(int *)(iVar1 + 0x3c44) != 0) &&
               (dVar13 = (double)fStack_80, dVar18 = dVar13, *(int *)(iVar1 + 0x3c44) != 1)) {
              dVar15 = (double)afStack_74[0];
              dVar17 = (double)fStack_78;
              dVar18 = (double)fStack_7c;
            }
            dVar14 = lbl_82005758;
            dVar16 = lbl_82005710;
            fn_82C6F130(dVar13,dVar15,(double)fStack_84,dVar17,dVar18,(double)fStack_88,
                              (double)fStack_8c,iVar1,*(undefined4 *)(iVar1 + 0xec0),
                              *(undefined4 *)(iVar1 + 0xec4),*(undefined4 *)(iVar1 + 0xec8),
                              *(undefined4 *)(iVar1 + 0xef8),*(undefined4 *)(iVar1 + 0xefc),
                              *(undefined4 *)(iVar1 + 0xf00));
            if (*(int *)(iVar1 + 0x3c08) == 2) {
              fn_82C45200(iVar1,&fStack_80,&fStack_7c,&fStack_8c,&fStack_78,afStack_74,&fStack_88,
                            &fStack_84);
              dVar13 = dVar16;
              dVar15 = dVar14;
              if ((*(int *)(iVar1 + 0x3c44) != 0) &&
                 (dVar14 = (double)fStack_80, dVar15 = dVar14, *(int *)(iVar1 + 0x3c44) != 1)) {
                dVar16 = (double)fStack_7c;
                dVar13 = (double)fStack_78;
                dVar15 = (double)afStack_74[0];
              }
              fn_82C6F130(dVar14,dVar16,(double)fStack_8c,dVar13,dVar15,(double)fStack_88,
                                (double)fStack_84,iVar1,*(undefined4 *)(iVar1 + 0xecc),
                                *(undefined4 *)(iVar1 + 0xed0),*(undefined4 *)(iVar1 + 0xed4),
                                *(undefined4 *)(iVar1 + 0xf04),*(undefined4 *)(iVar1 + 0xf08),
                                *(undefined4 *)(iVar1 + 0xf0c));
              fn_82C6E430(iVar1);
            }
          }
          else {
            uVar4 = fn_82C742E8(iVar1,uVar3);
            *(undefined4 *)(*(int *)(iVar1 + 0xeb0) + 0x268) =
                 *(undefined4 *)(*(int *)(iVar1 + 0xea0) + 0x268);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
          }
          fn_82C69448(iVar1 + 0xebc,*(undefined4 *)(iVar1 + 0xeb0));
          *(undefined4 *)(iVar1 + 0x3d00) = 3;
LAB_82c47480:
          *(undefined2 *)(iVar1 + 0xe9c) = 1;
          return 0;
        }
        goto LAB_82c46cb8;
      }
    }
LAB_82c46d50:
    uVar4 = 1;
  }
  return uVar4;
}

