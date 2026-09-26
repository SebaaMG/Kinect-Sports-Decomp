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
extern unsigned int *auStack_90;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC65F0();
extern int fn_82AD20C0();
extern int fn_82B330F8();
extern int fn_82B86C90();
extern int fn_82B8AE98();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int uStack_88;


void fn_82B380B0(int param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar9;
  ulonglong uVar8;
  uint uVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  uint auStack_90 [2];
  undefined8 uStack_88;
  double adStack_80 [16];
  
  uVar1 = *(uint *)(param_1 + 4);
  bVar3 = false;
  dVar14 = lbl_82005710;
  dVar13 = lbl_82005758;
joined_r0x82b380d8:
  if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
    if (bVar3) {
      fn_82B330F8(param_1,param_2);
    }
    return;
  }
LAB_82b380f8:
  bVar2 = false;
  if ((*(uint *)(uVar1 + 0x1c) & 1) != 0) goto LAB_82b382b4;
  uVar6 = *(uint *)(uVar1 + 0x18);
LAB_82b3810c:
  iVar11 = (uVar6 & 0xfffffffe) - 0x28;
  do {
    if (iVar11 == 0) {
      if (!bVar2) {
        *(uint *)(uVar1 + 0x44) = *(uint *)(uVar1 + 0x44) & 0x7fffffff;
      }
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4);
      goto joined_r0x82b380d8;
    }
    uVar6 = *(uint *)(iVar11 + 8);
    if ((uVar6 & 0x3f80) == 0x3a80) {
      iVar4 = fn_82ABDD90(param_1,0x75,0,0);
      puVar9 = (uint *)(iVar4 + iVar11 + -0x10);
      if ((((*puVar9 & 7) == 7) && (puVar9[1] == 2)) && (bVar2 = true, (uVar6 >> 0x11 & 1) != 0)) {
        iVar5 = fn_82AC65F0(iVar11);
        iVar4 = *(int *)(iVar5 + 0xc);
        uVar6 = *(uint *)(iVar4 + 8) >> 7 & 0x7f;
        if ((uVar6 < 0x15) || (bVar12 = true, 0x18 < uVar6)) {
          bVar12 = false;
        }
        if (bVar12) {
          puVar9 = *(uint **)(iVar4 + 0x30);
          uVar6 = fn_82B86C90(puVar9[3],adStack_80,auStack_90);
          uVar8 = (ulonglong)(*puVar9 >> 5) & 3;
          if ((1 << (int)uVar8 & uVar6) != 0) {
            iVar7 = (int)(uVar8 << 1);
            adStack_80[0] = *(double *)((int)adStack_80 + (int)(uVar8 << 3));
            uVar6 = 1;
            auStack_90[0] =
                 ((2 << (int)(uVar8 << 1) + 1) - 1U & auStack_90[0] & -1 << iVar7) >> iVar7 |
                 auStack_90[0] & 0xfffffffc;
            uVar10 = *(uint *)(iVar4 + 8) >> 7 & 0x7f;
            if (uVar10 == 0x15) {
              bVar12 = adStack_80[0] != dVar14;
              adStack_80[0] = dVar14;
              if (bVar12) {
LAB_82b38270:
                adStack_80[0] = dVar13;
              }
            }
            else if (uVar10 == 0x16) {
              bVar12 = adStack_80[0] == dVar14;
              adStack_80[0] = dVar14;
              if (bVar12) goto LAB_82b38270;
            }
            else if (uVar10 == 0x17) {
              bVar12 = adStack_80[0] <= dVar14;
              adStack_80[0] = dVar14;
              if (bVar12) goto LAB_82b38270;
            }
            else {
              if (uVar10 != 0x18) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c0);
              }
              bVar12 = adStack_80[0] < 0.0;
              adStack_80[0] = dVar14;
              if (bVar12) {
                adStack_80[0] = dVar13;
              }
            }
          }
        }
        else {
          uVar6 = fn_82B86C90(iVar4,adStack_80,auStack_90);
        }
        if ((uVar6 & 1) != 0) {
          uStack_88 = (longlong)adStack_80[0];
          if ((((U64)(uStack_88) >> 32) & 0xFFFFFFFF) != (*(uint *)(iVar11 + 8) >> 0x12 & 1)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xe3b);
          }
          fn_82AD20C0(iVar11,iVar5,param_1);
          *(uint *)(iVar11 + 8) = *(uint *)(iVar11 + 8) & 0xfffdffff;
          fn_82B8AE98(param_1,iVar11);
          bVar3 = true;
          goto LAB_82b380f8;
        }
      }
    }
    uVar6 = *(uint *)(iVar11 + 0x24);
    if ((uVar6 & 1) == 0) goto LAB_82b3810c;
LAB_82b382b4:
    iVar11 = 0;
  } while( true );
}

