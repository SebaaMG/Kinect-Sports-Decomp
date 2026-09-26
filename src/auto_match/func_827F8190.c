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
extern unsigned int *auStack_120;
extern unsigned int *auStack_160;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_220;
extern unsigned int *auStack_260;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2d8;
extern unsigned int *auStack_e0;
extern unsigned int fStack_2c8;
extern unsigned int fStack_2cc;
extern unsigned int fStack_2d0;
extern int fn_827F7210();
extern int fn_827F7218();
extern int fn_827F7230();
extern int fn_827F98C8();
extern int fn_827F99E8();
extern int fn_827F9B68();
extern int fn_82800A48();
extern int fn_82800A60();
extern int fn_8280ACD8();
extern int fn_8280AD30();
extern int fn_8280B1E8();
extern int fn_8280B240();
extern int fn_8280CB70();
extern int fn_8280CE38();
extern int fn_8280D8B0();
extern int fn_8280E168();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;


void fn_827F8190(undefined8 param_1,ulonglong param_2)

{
  undefined4 uVar1;
  int iVar5;
  ulonglong uVar2;
  int iVar6;
  int iVar7;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar8;
  ushort *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  ulonglong uVar14;
  int iVar15;
  float *pfVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 *puStack_2e0;
  float *pfStack_2dc;
  uint auStack_2d8 [2];
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [64];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [64];
  undefined1 auStack_1e0 [64];
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [224];
  
  iVar5 = fn_82F6A544();
  puVar12 = *(undefined4 **)(iVar5 + 0x20);
  uVar1 = *(undefined4 *)(iVar5 + 0x24);
  puVar9 = *(ushort **)(iVar5 + 0x28);
  iVar6 = *(int *)(iVar5 + 0x84);
  uVar2 = fn_827F7210();
  uVar14 = 0;
  uVar10 = 0;
  if ((uVar2 & 0xffff) != 0) {
    pfVar13 = (float *)(iVar6 + 0x14);
    dVar18 = (double)lbl_8200133C;
    dVar22 = (double)lbl_82002AE0;
    do {
      iVar6 = fn_827F99E8(iVar5,uVar14);
      if (iVar6 == 0) {
        lVar11 = uVar14 * 0x40 + (ulonglong)*(uint *)(iVar5 + 0xc);
        iVar6 = fn_82800A60(iVar5);
        if (iVar6 == 0) {
          puStack_2e0 = auStack_e0;
        }
        else {
          fn_82800A48(iVar5,uVar14,&puStack_2e0);
        }
        iVar6 = fn_827F9B68(iVar5,uVar14);
        if (((puVar12 == (undefined4 *)0x0) || (puVar9 == (ushort *)0x0)) ||
           ((ulonglong)*puVar9 == 0xffff)) {
LAB_827f826c:
          iVar15 = 0;
        }
        else {
          iVar15 = 1;
          if (*puVar9 != uVar14) goto LAB_827f826c;
        }
        fn_827F98C8(iVar5,uVar14,&pfStack_2dc);
        if (iVar6 == 0) {
          fn_8280B240((double)*pfStack_2dc,(double)pfStack_2dc[1],(double)pfStack_2dc[2],
                       puStack_2e0);
        }
        else {
          fStack_2d0 = pfVar13[-1];
          fStack_2cc = *pfVar13;
          fStack_2c8 = pfVar13[1];
          dVar21 = (double)pfVar13[3];
          dVar20 = (double)pfVar13[4];
          dVar19 = (double)pfVar13[5];
          if (*(short *)(pfStack_2dc + 10) != -1) {
            iVar7 = fn_827F9B68(iVar5);
            if (iVar7 != 0) {
              dVar17 = (double)pfVar13[6];
              iVar7 = (uint)*(ushort *)(pfStack_2dc + 10) * 0x30 + *(int *)(iVar5 + 0x84);
              dVar21 = (double)(float)(dVar21 / (double)(float)((double)(float)((double)*(float *)(
                                                  iVar7 + 0x20) - dVar22) * dVar17 + dVar22));
              dVar20 = (double)(float)(dVar20 / (double)(float)((double)(float)((double)*(float *)(
                                                  iVar7 + 0x24) - dVar22) * dVar17 + dVar22));
              dVar19 = (double)(float)(dVar19 / (double)(float)((double)(float)((double)*(float *)(
                                                  iVar7 + 0x28) - dVar22) * dVar17 + dVar22));
            }
          }
          pfVar16 = pfStack_2dc;
          fn_8280ACD8(auStack_2a0);
          while( true ) {
            if (*(short *)(pfVar16 + 10) == -1) break;
            pfVar16 = (float *)((uint)*(ushort *)(pfVar16 + 10) * 0x34 + *(int *)(iVar5 + 8));
            fn_8280CE38(auStack_220,pfVar16 + 6);
            fn_8280CB70(auStack_220,auStack_2a0,auStack_2a0);
          }
          fn_8280AD30(auStack_2a0,&fStack_2d0,&fStack_2d0);
          fn_8280E168((double)pfVar13[-5],(double)pfVar13[-4],(double)pfVar13[-3],
                       (double)pfVar13[-2],auStack_2b0);
          fn_8280D8B0(pfStack_2dc + 6,auStack_2c0);
          fn_8280CE38(auStack_120,auStack_2c0);
          fn_8280B1E8(dVar21,dVar20,dVar19,auStack_1a0);
          fn_8280CE38(auStack_260,pfStack_2dc + 6);
          fn_8280CE38(auStack_1e0,auStack_2b0);
          fn_8280B240((double)(pfStack_2dc[3] + fStack_2d0),(double)(pfStack_2dc[4] + fStack_2cc),
                       (double)(pfStack_2dc[5] + fStack_2c8),auStack_160);
          fn_8280B240((double)(float)((double)pfStack_2dc[3] * dVar18),
                       (double)(float)((double)pfStack_2dc[4] * dVar18),
                       (double)(float)((double)pfStack_2dc[5] * dVar18),puStack_2e0);
          fn_8280CB70(auStack_120,puStack_2e0);
          fn_8280CB70(auStack_1a0,puStack_2e0);
          fn_8280CB70(auStack_260,puStack_2e0);
          fn_8280CB70(auStack_1e0,puStack_2e0);
          fn_8280CB70(auStack_160,puStack_2e0);
        }
        uVar3 = fn_827F7218(iVar5,uVar14);
        if ((uVar3 & 0xffffffff) == 0xffff) {
          fn_827F7230(iVar5,auStack_2d8);
          uVar4 = (ulonglong)auStack_2d8[0];
        }
        else {
          fn_827F9B68(iVar5,uVar3 & 0xffff);
          uVar4 = (uVar3 & 0x3ffffff) * 0x40 + (ulonglong)*(uint *)(iVar5 + 0xc);
          auStack_2d8[0] = (uint)uVar4;
        }
        if ((param_2 & 2) == 0) {
          if ((iVar6 == 0) || (iVar15 == 0)) {
            fn_8280CB70(uVar4,puStack_2e0,lVar11);
          }
          else {
            if ((uVar3 & 0xffffffff) == 0xffff) {
              lVar8 = 0;
            }
            else {
              lVar8 = (ulonglong)*(ushort *)(pfStack_2dc + 10) * 0x34 +
                      (ulonglong)*(uint *)(iVar5 + 8);
            }
            (*(code *)*puVar12)(uVar4,puStack_2e0,lVar11,uVar1,pfStack_2dc,lVar8,uVar10 & 0xffff);
          }
          puVar12 = puVar12 + iVar15;
          puVar9 = puVar9 + iVar15;
          uVar10 = iVar15 + uVar10;
        }
      }
      pfVar13 = pfVar13 + 0xc;
      uVar14 = uVar14 + 1 & 0xffff;
    } while (uVar14 < (uVar2 & 0xffff));
  }
  fn_82F6A590();
  return;
}

