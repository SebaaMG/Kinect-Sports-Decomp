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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_82687270();
extern int fn_826C8C70();
extern int fn_826D6290();
extern int fn_826DC448();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E8AF0();
extern int fn_826E8FF0();
extern int fn_826E90B0();
extern int fn_826E9188();
extern int fn_826E9330();
extern int fn_82756FD0();
extern int fn_82757058();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int iStack_f0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_c8;
extern unsigned int uStack_ec;


void fn_82757108(undefined8 param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar14;
  ulonglong uVar13;
  ushort uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int iStack_f0;
  uint uStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  longlong lStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  
  iVar10 = fn_82F6A548();
  uVar16 = (ulonglong)*(uint *)((int)param_2 + 0x314);
  if (uVar16 == 0) {
    uVar16 = param_2 + 0x28;
  }
  fn_826E8FF0(uVar16,iVar10 + 0x10);
  fn_826C8C70(uVar16,0xffffffff82010e48,(double)*(float *)(iVar10 + 0x10),
                    (double)*(float *)(iVar10 + 0x14),(double)*(float *)(iVar10 + 0x18),
                    (double)*(float *)(iVar10 + 0x1c));
  fn_826E8AF0(uVar16,iVar10 + 0x20);
  fn_826C8C70(uVar16,0xffffffff8200dd00);
  fn_826E9330(uVar16,iVar10 + 0x20);
  iVar7 = (int)uVar16;
  *(undefined1 *)(iVar7 + 0x15) = 0;
  if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 1) {
    fn_826E7990(uVar16);
  }
  iVar12 = *(int *)(iVar7 + 0x2c) + 1;
  uVar3 = *(undefined1 *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
  *(int *)(iVar7 + 0x2c) = iVar12;
  *(undefined1 *)(iVar7 + 0x15) = 0;
  if (*(int *)(iVar7 + 0x30) - iVar12 < 1) {
    fn_826E7990(uVar16);
  }
  uVar4 = *(undefined1 *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
  *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
  fn_826C8C70(uVar16,0xffffffff8201451c);
  iStack_e0 = 0;
  iStack_dc = 0;
  dVar20 = (double)lbl_821AAD20;
  bVar9 = false;
  uVar15 = 0;
  dVar18 = dVar20;
  dVar19 = dVar20;
  dVar21 = dVar20;
  while( true ) {
    *(undefined1 *)(iVar7 + 0x15) = 0;
    if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 1) {
      fn_826E7990(uVar16);
    }
    bVar5 = *(byte *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
    *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
    if (bVar5 == 0) break;
    if (bVar9) {
      bVar9 = false;
      piVar11 = (int *)fn_82757058(iVar10 + 0x38);
      if (piVar11 != (int *)0x0) {
        piVar11[6] = (int)(float)dVar19;
        piVar11[7] = (int)(float)dVar20;
        fn_826D6290(piVar11 + 3,&iStack_e0);
        piVar11[8] = (int)(float)dVar18;
        piVar11[5] = iStack_f0;
        *(ushort *)(piVar11 + 9) = uVar15;
        fn_82756FD0(piVar11,uVar16,bVar5,uVar3,uVar4);
        uVar13 = (ulonglong)(uint)piVar11[1];
        dVar17 = dVar21;
        if (uVar13 != 0) {
          iVar12 = 0;
          do {
            iVar8 = iVar12 + *piVar11;
            iVar12 = iVar12 + 8;
            dVar17 = (double)(float)((double)*(float *)(iVar8 + 4) + dVar17);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        dVar19 = (double)(float)(dVar17 + dVar19);
      }
      fn_826C8C70(uVar16,0xffffffff820144cc,bVar5);
    }
    else {
      uVar6 = (int)(uint)bVar5 >> 3;
      bVar9 = true;
      fn_826C8C70(uVar16,0xffffffff820144b4);
      if ((uVar6 & 1) != 0) {
        *(undefined1 *)(iVar7 + 0x15) = 0;
        if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 2) {
          fn_826E7800(uVar16,2);
        }
        puVar14 = (undefined1 *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
        uVar1 = puVar14[1];
        uVar2 = *puVar14;
        *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 2;
        uVar15 = CONCAT11(uVar1,uVar2);
        fn_826C8C70(uVar16,0xffffffff82010d98,uVar15);
        uStack_ec = (uint)uVar15;
        iStack_e8 = 0;
        iStack_e4 = 0;
        fn_826DC448(*(undefined4 *)((int)param_2 + 0x20),&iStack_e8,&uStack_ec);
        fn_826D6290(&iStack_e0,&iStack_e8);
        if ((iStack_e8 == 0) && (iStack_e4 != 0)) {
          fn_82687270();
        }
      }
      if (((int)(uint)bVar5 >> 2 & 1U) != 0) {
        if (param_3 == 0xb) {
          fn_826E90B0();
        }
        else {
          fn_826E9188(uVar16,&iStack_f0);
        }
        fn_826C8C70(uVar16,0xffffffff82010d8c);
      }
      if ((bVar5 & 1) != 0) {
        *(undefined1 *)(iVar7 + 0x15) = 0;
        if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 2) {
          fn_826E7800(uVar16,2);
        }
        puVar14 = (undefined1 *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
        uVar1 = puVar14[1];
        uVar2 = *puVar14;
        *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 2;
        lStack_d8 = (longlong)CONCAT11(uVar1,uVar2);
        dVar19 = (double)lStack_d8;
        fn_826C8C70(dVar19,uVar16,0xffffffff820144e8,dVar19);
      }
      if (((int)(uint)bVar5 >> 1 & 1U) != 0) {
        *(undefined1 *)(iVar7 + 0x15) = 0;
        if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 2) {
          fn_826E7800(uVar16,2);
        }
        puVar14 = (undefined1 *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
        uVar1 = puVar14[1];
        uVar2 = *puVar14;
        *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 2;
        lStack_d0 = (longlong)CONCAT11(uVar1,uVar2);
        dVar20 = (double)lStack_d0;
        fn_826C8C70(dVar20,uVar16,0xffffffff820144f8,dVar20);
      }
      if ((uVar6 & 1) != 0) {
        *(undefined1 *)(iVar7 + 0x15) = 0;
        if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 2) {
          fn_826E7800(uVar16,2);
        }
        puVar14 = (undefined1 *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
        uVar1 = puVar14[1];
        uVar2 = *puVar14;
        *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 2;
        uStack_c8 = (ulonglong)CONCAT11(uVar1,uVar2);
        dVar18 = (double)uStack_c8;
        fn_826C8C70(dVar18,uVar16,0xffffffff82014508,dVar18);
      }
    }
  }
  fn_826C8C70(uVar16,0xffffffff820144a0);
  if ((iStack_e0 == 0) && (iStack_dc != 0)) {
    fn_82687270();
  }
  fn_82F6A594();
  return;
}

