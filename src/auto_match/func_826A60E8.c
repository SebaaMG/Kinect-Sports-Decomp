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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_90;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_8269A1F0();
extern int fn_826A1DC0();
extern int fn_826A27D8();
extern int fn_826A2830();
extern int fn_826A2D50();
extern int fn_826A4360();
extern int fn_826A4B58();
extern int fn_826A5D50();
extern int fn_826A6098();
extern int fn_826B32D0();
extern int fn_8273D588();
extern int fn_827A9810();
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_b0;


/* WARNING: Type propagation algorithm not settling */

void fn_826A60E8(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar13;
  undefined4 *puVar8;
  undefined8 uVar7;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong *puVar14;
  uint *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  double dVar21;
  ulonglong uStack_b0;
  int iStack_a8;
  int iStack_a4;
  int aiStack_a0 [4];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  bVar4 = false;
  iStack_a4 = 0;
  bVar6 = false;
  bVar5 = false;
  cVar13 = fn_82695468(param_1,7);
  if (cVar13 == '\0') {
    fn_826954C0(param_1,0xffffffff82006e38,0,0);
  }
  else {
    iVar18 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar18 = 0;
    }
    puVar8 = (undefined4 *)
             fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                               0x10,0);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      iVar1 = *(int *)(iVar1 + 8);
      puVar8[3] = iVar1;
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    aiStack_a0[1] = 0;
    uVar19 = 0;
    aiStack_a0[0] = 0;
    aiStack_a0[2] = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      puVar2 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar2);
      *puVar2 = 0;
      fn_8267BE38(0);
      if (puVar8 == (undefined4 *)0x0) {
        return;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0xc0);
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar3 = *(undefined4 *)(param_1 + 0x18);
        uVar7 = fn_826957D0(param_1,0);
        iVar9 = fn_82696958(uVar7,uVar3);
        if ((iVar9 == 0) ||
           (iVar10 = (**(code **)(*(int *)(iVar9 + 0x10) + 8))(iVar9 + 0x10), iVar10 != 7)) {
          uVar3 = *(undefined4 *)(param_1 + 0x18);
          uVar7 = fn_826957D0(param_1,0);
          fn_82696D38(&iStack_a4,uVar7,uVar3,0xffffffffffffffff,0);
          fn_826A2830(puVar8,&iStack_a4);
          lVar16 = (ulonglong)*(uint *)(iStack_a4 + 8) - 1;
          *(int *)(iStack_a4 + 8) = (int)lVar16;
          if (lVar16 == 0) {
            fn_826944C8(iStack_a4);
          }
        }
        else {
          iVar10 = 0;
          if (0 < *(int *)(iVar9 + 0x38)) {
            iVar20 = 0;
            iVar11 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
            do {
              iVar12 = *(int *)(iVar20 + *(int *)(iVar9 + 0x34));
              if (iVar12 == 0) {
                bVar6 = true;
                uStack_b0 = CONCAT44(iVar1,(((U64)(uStack_b0) >> 32) & 0xFFFFFFFF));
                puVar14 = &uStack_b0;
                *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
                iVar11 = iVar1;
              }
              else {
                bVar5 = true;
                fn_82696D38(&iStack_a8,iVar12,*(undefined4 *)(param_1 + 0x18),
                                  0xffffffffffffffff,0);
                puVar14 = (ulonglong *)&iStack_a8;
              }
              fn_826A2830(puVar8,puVar14);
              if (bVar6) {
                lVar16 = (ulonglong)*(uint *)(iVar11 + 8) - 1;
                *(int *)(iVar11 + 8) = (int)lVar16;
                bVar6 = false;
                if (lVar16 == 0) {
                  fn_826944C8(iVar11);
                  bVar6 = false;
                }
              }
              if (bVar5) {
                bVar5 = false;
                lVar16 = (ulonglong)*(uint *)(iStack_a8 + 8) - 1;
                *(int *)(iStack_a8 + 8) = (int)lVar16;
                if (lVar16 == 0) {
                  fn_826944C8(iStack_a8);
                }
              }
              iVar10 = iVar10 + 1;
              iVar20 = iVar20 + 4;
            } while (iVar10 < *(int *)(iVar9 + 0x38));
          }
        }
      }
      iVar10 = 0;
      iVar9 = 0;
      if (0 < (int)puVar8[1]) {
        uStack_b0 = uStack_b0 & 0xffffffff;
        do {
          fn_8273D588(aiStack_a0,&uStack_b0);
          iVar10 = iVar10 + 1;
          iVar9 = aiStack_a0[0];
        } while (iVar10 < (int)puVar8[1]);
      }
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar3 = *(undefined4 *)(param_1 + 0x18);
        uVar7 = fn_826957D0(param_1,1);
        iVar10 = fn_82696958(uVar7,uVar3);
        if ((iVar10 == 0) ||
           (iVar11 = (**(code **)(*(int *)(iVar10 + 0x10) + 8))(iVar10 + 0x10), iVar11 != 7)) {
          uVar3 = *(undefined4 *)(param_1 + 0x18);
          uVar7 = fn_826957D0(param_1,1);
          dVar21 = (double)fn_826972E0(uVar7,uVar3);
          uVar19 = (uint)dVar21;
          uStack_b0 = (ulonglong)(int)uVar19;
          iVar10 = 0;
          if (0 < (int)puVar8[1]) {
            puVar15 = (uint *)(iVar9 + -4);
            do {
              puVar15 = puVar15 + 1;
              *puVar15 = uVar19;
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)puVar8[1]);
          }
        }
        else {
          iVar11 = 0;
          if (0 < *(int *)(iVar10 + 0x38)) {
            iVar20 = 0;
            do {
              if ((int)puVar8[1] <= iVar11) break;
              iVar12 = *(int *)(*(int *)(iVar10 + 0x34) + iVar20);
              if (iVar12 != 0) {
                dVar21 = (double)fn_826972E0(iVar12,*(undefined4 *)(param_1 + 0x18));
                *(int *)(iVar20 + iVar9) = (int)dVar21;
              }
              iVar11 = iVar11 + 1;
              iVar20 = iVar20 + 4;
            } while (iVar11 < *(int *)(iVar10 + 0x38));
          }
        }
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
      iVar10 = fn_826B32D0(*(int *)(param_1 + 0x18),*(undefined4 *)(iVar10 + 0x2a0),
                                 iVar10 + 0x10,0,0xffffffffffffffff);
      if (iVar10 != 0) {
        fn_826A2D50(iVar10,iVar18);
        fn_826A5D50(auStack_90,iVar10 + 0x10,puVar8,aiStack_a0,*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(iVar18 + 0x30));
        fn_826A6098(iVar10,auStack_90);
        if (((uVar19 & 4) != 0) && (iVar11 = 1, 1 < *(int *)(iVar10 + 0x38))) {
          iVar20 = 4;
          do {
            puVar17 = (undefined4 *)(iVar20 + *(int *)(iVar10 + 0x34));
            iVar12 = fn_826A4360(auStack_90,puVar17[-1],*puVar17);
            if (iVar12 == 0) {
              bVar4 = true;
              break;
            }
            iVar11 = iVar11 + 1;
            iVar20 = iVar20 + 4;
          } while (iVar11 < *(int *)(iVar10 + 0x38));
        }
        if (bVar4) {
          fn_8269A1F0(*(undefined4 *)(param_1 + 4),0);
        }
        else {
          if ((uVar19 & 8) == 0) {
            fn_826A2D50(iVar18,iVar10);
            fn_827A9810(iVar10 + 0x34,0);
          }
          else {
            fn_826A1DC0(iVar10,*(undefined4 *)
                                      (*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288));
            iVar18 = iVar10;
          }
          fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar18);
        }
        fn_826A4B58(uStack_80,uStack_7c);
        fn_8267BE38(uStack_80);
        fn_826824B0(iVar10);
      }
      lVar16 = (ulonglong)*(uint *)(iVar1 + 8) - 1;
      *(int *)(iVar1 + 8) = (int)lVar16;
      if (lVar16 == 0) {
        fn_826944C8(iVar1);
      }
      fn_8267BE38(iVar9);
    }
    fn_826A27D8(puVar8);
    fn_8267BE38(puVar8);
  }
  return;
}

