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
extern unsigned int *auStack_1018;
extern unsigned int *auStack_f58;
extern unsigned int *auStack_f60;
extern unsigned int *auStack_f98;
extern unsigned int *auStack_fd0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82240378();
extern int fn_82268638();
extern int fn_82537C48();
extern int fn_82537D18();
extern int fn_82537DA0();
extern int fn_82537F40();
extern int fn_825380D0();
extern int fn_82538210();
extern int fn_825382D8();
extern int fn_82538390();
extern int fn_825386B0();
extern int fn_825388F0();
extern int fn_82538958();
extern int fn_82538AB8();
extern int fn_8265C9E0();
extern int fn_82CE3C88();
extern int fn_82F68CC0();
extern unsigned int iStack_fe4;
extern unsigned int lbl_821C405C;
extern unsigned int uStack_101c;
extern unsigned int uStack_f70;
extern unsigned int uStack_f78;
extern unsigned int uStack_f7c;
extern unsigned int uStack_fa0;
extern unsigned int uStack_fbc;
extern unsigned int uStack_fe8;
extern unsigned int uStack_fec;
extern unsigned int uStack_ff0;


/* WARNING: Removing unreachable block (ram,0x82537808) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong fn_82537458(int *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  ulonglong uVar8;
  char cVar12;
  int iVar10;
  undefined1 *puVar11;
  undefined8 uVar9;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int *piVar16;
  uint uVar18;
  undefined8 *puVar19;
  ulonglong uVar17;
  int iVar20;
  uint *puVar21;
  uint uStack_101c;
  undefined1 auStack_1018 [4];
  int aiStack_1014 [5];
  int *piStack_1000;
  undefined4 uStack_ff0;
  undefined4 uStack_fec;
  undefined4 uStack_fe8;
  int iStack_fe4;
  undefined4 *puStack_fe0;
  int *piStack_fd8;
  int *piStack_fd4;
  undefined1 auStack_fd0 [16];
  undefined **ppuStack_fc0;
  undefined8 uStack_fbc;
  undefined ***pppuStack_fb0;
  undefined8 uStack_fa0;
  undefined1 auStack_f98 [28];
  undefined4 uStack_f7c;
  undefined8 uStack_f78;
  undefined4 uStack_f70;
  uint auStack_f60 [2];
  undefined1 auStack_f58 [3928];
  
  piVar16 = param_1 + 0xc;
  if (param_1[0xc] == 0) {
LAB_82537a4c:
    uVar8 = 1;
  }
  else {
    do {
      uVar8 = fn_82538210(*piVar16,param_2);
      if (((uVar8 & 0xff) != 0) && (iVar10 = *piVar16, *(int *)(iVar10 + 0x30) == 0)) {
        iVar13 = param_1[1];
        do {
          cVar12 = fn_82538210(iVar10,1);
        } while (cVar12 == '\0');
        uVar1 = *(undefined4 *)(iVar10 + 0x24);
        iVar10 = *piVar16;
        do {
          cVar12 = fn_82538210(iVar10,1);
        } while (cVar12 == '\0');
        fn_825386B0(param_1,iVar13,*(undefined4 *)(iVar10 + 0x20),uVar1);
        aiStack_1014[0] = (param_1[1] - *param_1) / 0xc4;
        iVar10 = fn_82CE3C88(auStack_f60);
        if ((iVar10 != -0x7f82fffd) && (uVar18 = 0, auStack_f60[0] != 0)) {
          puVar11 = auStack_f58;
          do {
            fn_82537DA0(param_1 + 4,puVar11);
            uVar18 = uVar18 + 1;
            puVar11 = puVar11 + 0x78;
          } while (uVar18 < auStack_f60[0]);
        }
        iVar10 = param_1[1];
        iVar13 = *param_1;
        if (iVar13 != iVar10) {
          do {
            if (((*(uint *)(iVar13 + 0x18) >> 0x1e & 1) != 0) ||
               (bVar7 = true, (int)*(uint *)(iVar13 + 0x18) < 0)) {
              bVar7 = false;
            }
          } while ((bVar7) && (iVar13 = iVar13 + 0xc4, iVar13 != iVar10));
          iVar5 = iVar13;
          if (iVar13 != iVar10) {
            while (iVar20 = iVar5 + 0xc4, iVar20 != iVar10) {
              if (((*(uint *)(iVar5 + 0xdc) >> 0x1e & 1) != 0) ||
                 (bVar7 = true, (int)*(uint *)(iVar5 + 0xdc) < 0)) {
                bVar7 = false;
              }
              iVar5 = iVar20;
              if (bVar7) {
                fn_82F68CC0(iVar13,iVar20,0xc4);
                iVar13 = iVar13 + 0xc4;
              }
            }
          }
        }
        fn_82537D18(&uStack_101c,param_1,iVar13,param_1[1]);
        if (param_1[0xf] == 1) {
          iVar13 = param_1[1];
          iVar10 = *param_1;
          if (iVar10 != iVar13) {
            do {
              if ((*(uint *)(iVar10 + 0x18) & 1) == 0) break;
              iVar10 = iVar10 + 0xc4;
            } while (iVar10 != iVar13);
            iVar5 = iVar10;
            if (iVar10 != iVar13) {
              while (iVar20 = iVar5 + 0xc4, iVar20 != iVar13) {
                puVar21 = (uint *)(iVar5 + 0xdc);
                iVar5 = iVar20;
                if ((*puVar21 & 1) != 0) {
                  fn_82F68CC0(iVar10,iVar20,0xc4);
                  iVar10 = iVar10 + 0xc4;
                }
              }
            }
          }
          puVar11 = auStack_1018;
LAB_82537710:
          fn_82537D18(puVar11,param_1,iVar10,param_1[1]);
        }
        else if (param_1[0xf] == 2) {
          iVar13 = param_1[1];
          iVar10 = *param_1;
          if (iVar10 != iVar13) {
            do {
              if (*(int *)(iVar10 + 0x24) != 0x4d5308c9) break;
              iVar10 = iVar10 + 0xc4;
            } while (iVar10 != iVar13);
            iVar5 = iVar10;
            if (iVar10 != iVar13) {
              while (iVar20 = iVar5 + 0xc4, iVar20 != iVar13) {
                piVar6 = (int *)(iVar5 + 0xe8);
                iVar5 = iVar20;
                if (*piVar6 == 0x4d5308c9) {
                  fn_82F68CC0(iVar10,iVar20,0xc4);
                  iVar10 = iVar10 + 0xc4;
                }
              }
            }
          }
          puVar11 = auStack_fd0;
          goto LAB_82537710;
        }
        iVar10 = *piVar16;
        do {
          cVar12 = fn_82538210(iVar10,1);
        } while (cVar12 == '\0');
        iVar10 = *(int *)(iVar10 + 0x24);
        iVar13 = *piVar16;
        do {
          cVar12 = fn_82538210(iVar13,1);
        } while (cVar12 == '\0');
        if ((iVar10 - *(int *)(iVar13 + 0x20)) / 0xc4 == 100) {
          uVar8 = fn_8265C9E0(0x34);
          if ((uVar8 & 0xffffffff) == 0) {
            uVar9 = 0;
          }
          else {
            pppuStack_fb0 = &ppuStack_fc0;
            ppuStack_fc0 = &lbl_821C405C;
            piStack_fd4 = aiStack_1014;
            uStack_fbc = CONCAT44(param_1,piStack_fd4);
            piStack_fd8 = param_1;
            uVar9 = fn_825380D0(uVar8,&ppuStack_fc0);
          }
          fn_82537F40(piVar16,uVar9);
          uVar8 = 0;
          goto LAB_825377c4;
        }
        param_1[0xe] = *(int *)(*piVar16 + 0x30);
        fn_82537F40(piVar16,0);
        puVar21 = (uint *)(param_1 + 8);
        uVar18 = param_1[8];
        uVar8 = (ulonglong)uVar18;
        if (uVar8 != (uint)param_1[9]) {
          uVar2 = param_1[9];
          if (uVar8 != uVar2) {
            do {
              fn_82230300(uVar8 + 8,1,0);
              uVar8 = uVar8 + 0x38;
            } while ((uVar8 & 0xffffffff) != (ulonglong)uVar2);
          }
          param_1[9] = uVar18;
        }
        puVar3 = (undefined8 *)param_1[1];
        if ((undefined8 *)*param_1 != puVar3) {
          puVar19 = (undefined8 *)(*param_1 + 0x1c);
          do {
            uVar1 = *(undefined4 *)((int)puVar19 + -4);
            uVar15 = *puVar19;
            uVar4 = *(undefined4 *)(puVar19 + 1);
            uVar9 = fn_82230110(&ppuStack_fc0,(int)puVar19 + -0x14);
            uStack_fa0 = *(undefined8 *)((int)puVar19 + -0x1c);
            fn_82240378(auStack_f98,uVar9);
            uStack_f7c = uVar4;
            uStack_f78 = uVar15;
            uStack_f70 = uVar1;
            fn_82230300(uVar9,1,0);
            fn_82537C48(puVar21,&uStack_fa0);
            fn_82230300(auStack_f98,1,0);
            puVar14 = puVar19 + 0x15;
            puVar19 = (undefined8 *)((int)puVar19 + 0xc4);
          } while (puVar14 != puVar3);
        }
        fn_825382D8(auStack_1018,param_1[4],param_1[5],param_1);
        fn_82538390(&uStack_101c,*puVar21,param_1[9],0);
        uVar8 = (ulonglong)(uint)param_1[9];
        uVar17 = (ulonglong)uStack_101c;
        if (uVar17 != uVar8) {
          uVar18 = param_1[9];
          if (uVar8 != uVar18) {
            do {
              fn_82268638(uVar17,uVar8);
              uVar8 = uVar8 + 0x38;
              uVar17 = uVar17 + 0x38;
            } while ((uVar8 & 0xffffffff) != (ulonglong)uVar18);
          }
          uVar18 = param_1[9];
          uVar8 = uVar17;
          if ((uVar17 & 0xffffffff) != (ulonglong)uVar18) {
            do {
              fn_82230300(uVar8 + 8,1,0);
              uVar8 = uVar8 + 0x38;
            } while ((uVar8 & 0xffffffff) != (ulonglong)uVar18);
          }
          param_1[9] = (int)uVar17;
        }
        uVar18 = param_1[9];
        uVar8 = (ulonglong)*puVar21;
        if (uVar8 != uVar18) {
          uStack_ff0 = 0;
          puStack_fe0 = &uStack_ff0;
          uStack_fec = 0;
          iStack_fe4 = (int)(uVar18 - *puVar21) / 0x38;
          uStack_fe8 = 0;
          uVar8 = fn_82538958(uVar8,(ulonglong)uVar18,0,iStack_fe4,&uStack_ff0);
          fn_825388F0(&uStack_ff0);
        }
        uVar18 = param_1[9];
        if ((uVar8 & 0xffffffff) != (ulonglong)uVar18) {
          aiStack_1014[1] = 0;
          piStack_1000 = aiStack_1014 + 1;
          aiStack_1014[2] = 0;
          aiStack_1014[4] = (int)(uVar18 - (int)uVar8) / 0x38;
          aiStack_1014[3] = 0;
          fn_82538AB8(uVar8,(ulonglong)uVar18,0,aiStack_1014[4],aiStack_1014 + 1);
          fn_825388F0(aiStack_1014 + 1);
        }
        goto LAB_82537a4c;
      }
      if ((uVar8 & 0xff) != 0) {
        fn_82537D18(auStack_1018,param_1,*param_1,param_1[1]);
        param_1[0xe] = *(int *)(*piVar16 + 0x30);
        fn_82537F40(piVar16,0);
        goto LAB_82537a4c;
      }
LAB_825377c4:;} while ((param_2 & 0xff) != 0);
  }
  return uVar8;
}

