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
extern unsigned int *auStack_4ba0;
extern unsigned int *auStack_4bc0;
extern unsigned int *auStack_4c10;
extern unsigned int *auStack_4cb0;
extern unsigned int fStack_4c30;
extern int fn_825402B0();
extern int fn_825404D0();
extern int fn_825413A8();
extern int fn_82541458();
extern int fn_82541578();
extern int fn_825D1B08();
extern int fn_825D1D80();
extern int fn_825D1F60();
extern int fn_8260B550();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_8263CBB0();
extern int fn_827EB678();
extern unsigned int iStack_4c8c;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack00000054;
extern unsigned int uStack_4c7c;
extern unsigned int uStack_4c80;
extern unsigned int uStack_4c84;
extern unsigned int uStack_4c88;
extern unsigned int uStack_4c94;
extern unsigned int uStack_4c98;
extern unsigned int uStack_4c9c;
extern unsigned int uStack_4ca0;
extern unsigned int uStack_4ca8;
extern unsigned int uStack_4cac;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825D07E0(int param_1,int *param_2,undefined8 param_3,ulonglong param_4,longlong param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 in_r0;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 in_vr0 [16];
  undefined4 uVar24;
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar25 [16];
  uint uStack00000054;
  undefined1 auStack_4cb0 [1];
  uint uStack_4cac;
  uint uStack_4ca8;
  undefined4 uStack_4ca0;
  undefined4 uStack_4c9c;
  undefined4 uStack_4c98;
  undefined4 uStack_4c94;
  undefined1 *puStack_4c90;
  int iStack_4c8c;
  undefined4 uStack_4c88;
  undefined4 uStack_4c84;
  undefined4 uStack_4c80;
  undefined4 uStack_4c7c;
  float fStack_4c30;
  undefined1 auStack_4c10 [80];
  undefined1 auStack_4bc0 [32];
  undefined1 auStack_4ba0 [19360];

  uStack00000054 = (uint)param_4;
  if (*(short *)(param_1 + 0x14) != 0) {
    uVar13 = *(uint *)(param_1 + 4);
    uVar16 = (ulonglong)uVar13;
    uVar2 = *(uint *)(param_1 + 8);
    if (uVar16 != uVar2) {
      puVar3 = (ulonglong *)*param_2;
      *(uint *)(puVar3 + 0x529) = *(uint *)(puVar3 + 0x529) & 0xfffffff8;
      puVar3[2] = puVar3[2] | 0x40;
      uVar7 = fn_82639380(puVar3,0x10,1);
      *(uint *)((int)puVar3 + 0x60c) = *(uint *)((int)puVar3 + 0x60c) & 0xfe7fffff | 0x800000;
      puVar3[3] = puVar3[3] | 0x8000;
      *(uint *)(puVar3 + 0xc0) = *(uint *)(puVar3 + 0xc0) & 0xffffe3ff | 0x800;
      puVar3[3] = puVar3[3] | 0x8000;
      *(uint *)(puVar3 + 0xc0) = *(uint *)(puVar3 + 0xc0) & 0xffff1fff | 0x4000;
      puVar3[3] = puVar3[3] | 0x8000;
      uVar7 = fn_82639380(uVar7,0x11);
      fn_82639528(uVar7,0x11);
      *(uint *)((int)puVar3 + 0x624) = *(uint *)((int)puVar3 + 0x624) & 0xfe7fffff | 0x800000;
      puVar3[3] = puVar3[3] | 0x4000;
      *(uint *)(puVar3 + 0xc3) = *(uint *)(puVar3 + 0xc3) & 0xffffe3ff | 0x800;
      puVar3[3] = puVar3[3] | 0x4000;
      *(uint *)(puVar3 + 0xc3) = *(uint *)(puVar3 + 0xc3) & 0xffff1fff | 0x4000;
      puVar3[3] = puVar3[3] | 0x4000;
      fn_825D1F60();
      iVar11 = *(int *)(uVar13 + 0x90);
      fn_8263CBB0(puVar3,0x10,iVar11,0x8000);
      fn_8263CBB0(puVar3,0x11,*(undefined4 *)(uVar13 + 0x98),0x4000);
      fn_82639528(puVar3,0x10,1);
      dVar19 = (double)lbl_821CA460;
      fn_82541458(dVar19,param_2);
      param_2[0x2af9] = 0;
      if (uVar16 < uVar2) {
        uStack_4cac = ((uVar2 - uVar13) - 1 >> 8) + 1;
        lVar17 = uVar16 + 0xe8;
        dVar20 = (double)lbl_821922D0;
        dVar21 = (double)lbl_821CC160;
        uStack_4ca8 = 1;
        do {
          puVar4 = (undefined4 *)lVar17;
          uVar13 = puVar4[3] | uStack_4ca8;
          uStack_4ca8 = uVar13;
          iVar8 = fn_827EB678(param_4,lVar17 + -0x98,lVar17 + -0x88,auStack_4cb0);
          if (iVar8 != 0) {
            lVar14 = lVar17 + -0xe8;
            fn_825D1D80(lVar14,param_4);
            fn_825D1B08(lVar14,param_5);
            if (*(int *)((int)(param_5 * 0x24) + (int)lVar14 + 0x20) == 0) {
              if (uVar13 != 0) {
                if (iVar11 != puVar4[-0x16]) {
                  fn_8263CBB0(puVar3,0x10,puVar4[-0x16],0x8000);
                  fn_8263CBB0(puVar3,0x11,puVar4[-0x14],0x4000);
                  iVar11 = puVar4[-0x16];
                }
                if (puVar4[-0x17] == 0) {
                  fn_82639528(puVar3,0x10,0);
                }
                *(undefined4 *)(puVar3 + 0x1de) = puVar4[-2];
                *(undefined4 *)((int)puVar3 + 0xef4) = puVar4[-1];
                *(undefined4 *)(puVar3 + 0x1df) = *puVar4;
                *(undefined4 *)((int)puVar3 + 0xefc) = puVar4[1];
                *puVar3 = *puVar3 | 0x400000000;
                loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
                loadVectorLeftIndexed128(lVar17,8);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar25, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr0,4,3); memcpy(in_vr12, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar25,in_vr12,3,2); memcpy(in_vr13, &_vt2, 16); }
                memcpy((void *)((const void *)((int)&uStack_4ca0 + (int)in_r0 & 0xfffffff0)), in_vr13, 16);
                *(undefined4 *)(puVar3 + 0x1dc) = uStack_4ca0;
                *(undefined4 *)((int)puVar3 + 0xee4) = uStack_4c9c;
                *(undefined4 *)(puVar3 + 0x1dd) = uStack_4c98;
                *(undefined4 *)((int)puVar3 + 0xeec) = uStack_4c94;
                *puVar3 = *puVar3 | 0x400000000;
                iVar8 = puVar4[-0x10];
                iVar1 = puVar4[-0x12];
                param_2[0x2af0] = puVar4[-0x11];
                param_2[0x2af1] = iVar1;
                param_2[0x2af2] = iVar8;
                fn_825413A8(param_2);
              }
              iVar8 = 0;
              if (0 < (longlong)((ulonglong)(uint)puVar4[-6] - 1)) {
                lVar14 = param_5 * 0x24 + lVar14;
                do {
                  if (*(uint *)lVar14 != 0) {
                    iVar1 = param_2[0x2aee];
                    uVar7 = (**(code **)(*(int *)puVar4[-0x18] + 0x3c))();
                    fn_8260B550(dVar20,dVar19,dVar21,uVar7,iVar1,0xffffffff8329ead0,
                                      0xffffffff8329ead0);
                    lVar15 = 0;
                    uVar13 = *(uint *)lVar14;
                    uVar16 = (ulonglong)uVar13;
                    if (0 < (int)uVar13) {
                      do {
                        uVar12 = uVar16;
                        if (299 < (int)uVar16) {
                          uVar12 = 300;
                        }
                        if (0 < (int)uVar12) {
                          puVar10 = auStack_4ba0;
                          uVar18 = uVar12;
                          do {
                            for (lVar9 = (lVar15 * 0x1c + param_5 + 0x18U & 0x3fffffff) << 2;
                                *(int *)((int)lVar9 + puVar4[5]) != iVar8; lVar9 = lVar9 + 0x70) {
                              lVar15 = lVar15 + 1;
                            }
                            iVar1 = (int)lVar15 * 0x70 + puVar4[5];
                            puVar5 = (undefined4 *)((int)in_r0 + iVar1 & 0xfffffff0);
                            uVar22 = puVar5[1];
                            uVar23 = puVar5[2];
                            uVar24 = puVar5[3];
                            lVar15 = lVar15 + 1;
                            *(undefined4 *)(puVar10 + -0x20) = *puVar5;
                            *(undefined4 *)(puVar10 + -0x1c) = uVar22;
                            *(undefined4 *)(puVar10 + -0x18) = uVar23;
                            *(undefined4 *)(puVar10 + -0x14) = uVar24;
                            puVar5 = (undefined4 *)(iVar1 + 0x10U & 0xfffffff0);
                            uVar22 = puVar5[1];
                            uVar23 = puVar5[2];
                            uVar24 = puVar5[3];
                            *(undefined4 *)(puVar10 + -0x10) = *puVar5;
                            *(undefined4 *)(puVar10 + -0xc) = uVar22;
                            *(undefined4 *)(puVar10 + -8) = uVar23;
                            *(undefined4 *)(puVar10 + -4) = uVar24;
                            puVar5 = (undefined4 *)(iVar1 + 0x20U & 0xfffffff0);
                            uVar22 = puVar5[1];
                            uVar23 = puVar5[2];
                            uVar24 = puVar5[3];
                            puVar6 = (undefined4 *)((uint)(puVar10 + (int)in_r0) & 0xfffffff0);
                            *puVar6 = *puVar5;
                            puVar6[1] = uVar22;
                            puVar6[2] = uVar23;
                            puVar6[3] = uVar24;
                            memcpy((void *)(in_vr0), (const void *)(iVar1 + 0x30U & 0xfffffff0), 16);
                            memcpy((void *)((const void *)(puVar10 + 0x10)), in_vr0, 16);
                            puVar10 = puVar10 + 0x40;
                            uVar18 = uVar18 - 1;
                          } while (uVar18 != 0);
                        }
                        fn_825402B0(auStack_4c10,param_2,4,0,param_5,1,0);
                        puStack_4c90 = auStack_4bc0;
                        fStack_4c30 = (float)dVar21;
                        uStack_4c88 = 0;
                        uStack_4c84 = 0xffffffff;
                        uStack_4c80 = 0;
                        uStack_4c7c = 0;
                        iStack_4c8c = (int)uVar12;
                        uVar7 = (**(code **)(*(int *)puVar4[-0x18] + 0x3c))();
                        fn_825404D0(param_2,uVar7,auStack_4c10,&puStack_4c90);
                        uVar16 = uVar16 - uVar12;
                      } while (0 < (longlong)uVar16);
                      param_4 = (ulonglong)uStack00000054;
                    }
                  }
                  iVar8 = iVar8 + 1;
                  lVar14 = lVar14 + 4;
                } while (iVar8 < puVar4[-6] + -1);
              }
            }
          }
          uVar16 = (ulonglong)uStack_4cac;
          lVar17 = lVar17 + 0x100;
          uStack_4cac = (uint)(uVar16 - 1);
        } while (uVar16 - 1 != 0);
      }
      fn_82541578(param_2,4);
      param_2[0x2af9] = 1;
      *(uint *)(puVar3 + 0x529) = *(uint *)(puVar3 + 0x529) & 0xfffffff8 | 2;
      puVar3[2] = puVar3[2] | 0x40;
      fn_8263CBB0(puVar3,0x10,0,0x8000);
      fn_8263CBB0(puVar3,0x11,0,0x4000);
    }
  }
  return;
}
