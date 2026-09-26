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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_11c;
extern unsigned int *auStack_12f;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_82696480();
extern int fn_82696BC8();
extern int fn_82696CB8();
extern int fn_826A1F38();
extern int fn_826A2AB8();
extern int fn_826A2CB0();
extern int fn_826A9878();
extern int fn_826AA220();
extern int fn_826AB790();
extern int fn_826B0B48();
extern int fn_826B1CC8();
extern int fn_826B2BE8();
extern int fn_826B44A0();
extern int fn_826BD868();
extern int fn_826BD8C8();
extern int fn_826BDED8();
extern int fn_826C32D8();
extern unsigned int iStack_124;
extern unsigned int iStack_128;
extern unsigned int iStack_12c;
extern unsigned int uStack_130;


void fn_826C43B0(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar8;
  char cVar11;
  undefined8 uVar5;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  uint *puVar20;
  longlong lVar19;
  undefined1 uStack_130;
  undefined1 auStack_12f [3];
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  byte bStack_120;
  undefined4 auStack_11c [3];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  iVar8 = *param_1;
  iVar9 = param_1[1];
  if (iVar8 != 0) {
    *(uint *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
  }
  puVar20 = (uint *)(iVar9 + 0x80);
  uVar14 = *(int *)(iVar9 + 0x80) + 4;
  *puVar20 = uVar14;
  if (*(uint *)(iVar9 + 0x88) <= uVar14) {
    fn_826C32D8(puVar20);
  }
  piVar18 = (int *)*puVar20;
  if (piVar18 != (int *)0x0) {
    if (iVar8 != 0) {
      *(uint *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
    }
    *piVar18 = iVar8;
  }
  if (iVar8 != 0) {
    fn_826824B0(iVar8);
  }
  iVar8 = param_1[1];
  piVar18 = *(int **)(param_1[2] + 8);
  uVar2 = *(undefined4 *)(*(int *)(iVar8 + 0x78) + 0x288);
  param_1[10] = *(int *)(iVar8 + 0xcc);
  if ((*(char *)(*param_1 + 0x66) == '\x02') || (*(char *)(*param_1 + 0x66) == '\x01')) {
    iVar8 = fn_826B1CC8();
    if (iVar8 != 0) {
      *(uint *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
    }
    if (param_1[9] != 0) {
      fn_826824B0();
    }
    param_1[9] = iVar8;
    iVar8 = param_1[3];
    iVar9 = param_1[9];
    if (iVar8 != 0) {
      *(uint *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
    }
    if (*(int *)(iVar9 + 0x14) != 0) {
      fn_826824B0();
    }
    *(int *)(iVar9 + 0x14) = iVar8;
  }
  else {
    auStack_11c[0] = 0;
    fn_826B0B48(iVar8 + 200,auStack_11c);
  }
  piVar15 = piVar18;
  if (piVar18 != (int *)0x0) {
    iVar8 = fn_826BD868(piVar18);
    if (iVar8 != 0) {
      *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
    }
    if (param_1[7] != 0) {
      fn_8267C498();
    }
    param_1[7] = iVar8;
    iVar8 = fn_826BD8C8(piVar18);
    if (iVar8 != 0) {
      *(uint *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
    }
    if (param_1[8] != 0) {
      fn_826824B0();
    }
    param_1[8] = iVar8;
    cVar11 = (**(code **)(*piVar18 + 0x3c))(piVar18);
    if (cVar11 != '\0') {
      piVar15 = (int *)piVar18[10];
    }
  }
  iVar8 = param_1[1];
  if (*(char *)(*param_1 + 0x66) == '\x02') {
    fn_826AA220(iVar8 + 0x68,
                      (ulonglong)*(byte *)(*param_1 + 0x67) + (ulonglong)*(uint *)(iVar8 + 0x6c));
    iVar8 = *(int *)(param_1[2] + 0x1c);
    if (*(int *)(*param_1 + 0x54) <= *(int *)(param_1[2] + 0x1c)) {
      iVar8 = *(int *)(*param_1 + 0x54);
    }
    iVar9 = 0;
    if (0 < iVar8) {
      iVar16 = 0;
      do {
        iVar3 = *(int *)(*param_1 + 0x50);
        iVar4 = *(int *)(iVar3 + iVar16);
        if (iVar4 == 0) {
          uVar5 = fn_826957D0(param_1[2],iVar9);
          fn_826B2BE8(param_1[1],iVar3 + iVar16 + 4,uVar5);
        }
        else {
          uVar5 = fn_826957D0(param_1[2],iVar9);
          uVar7 = fn_826A9878(param_1[1],iVar4);
          fn_82695FA0(uVar7,uVar5);
        }
        iVar9 = iVar9 + 1;
        iVar16 = iVar16 + 8;
      } while (iVar9 < iVar8);
    }
    if (iVar9 < *(int *)(*param_1 + 0x54)) {
      iVar8 = iVar9 << 3;
      iVar9 = *(int *)(*param_1 + 0x54) - iVar9;
      do {
        if (*(int *)(iVar8 + *(int *)(*param_1 + 0x50)) == 0) {
          auStack_a0[0] = 0;
          fn_826B2BE8(param_1[1],iVar8 + *(int *)(*param_1 + 0x50) + 4,auStack_a0);
          fn_82696330(auStack_a0);
        }
        iVar9 = iVar9 + -1;
        iVar8 = iVar8 + 8;
      } while (iVar9 != 0);
    }
    uVar13 = 0;
    if ((((*(ushort *)(*param_1 + 100) & 0x10) != 0) || ((*(ushort *)(*param_1 + 100) & 0x20) == 0))
       && (iVar8 = piVar18[1], iVar8 != 0)) {
      *(uint *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
      if (param_1[4] != 0) {
        iStack_12c = fn_82694700((ulonglong)*(uint *)(param_1[1] + 0x78) + 0x254);
        *(int *)(iStack_12c + 8) = *(int *)(iStack_12c + 8) + 1;
        iVar9 = fn_826BDED8(iVar8 + 0x10,(ulonglong)(uint)param_1[1] + 0x78,&iStack_12c);
        if (iVar9 != 0) {
          *(uint *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1U & 0x8fffffff;
        }
        lVar17 = (ulonglong)*(uint *)(iStack_12c + 8) - 1;
        *(int *)(iStack_12c + 8) = (int)lVar17;
        if (lVar17 == 0) {
          fn_826944C8(iStack_12c);
        }
        if (iVar9 != 0) {
          *(uint *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1U & 0x8fffffff;
          fn_826824B0(iVar8);
          fn_826824B0(iVar9);
          iVar8 = iVar9;
        }
      }
      (**(code **)(*(int *)(iVar8 + 0x10) + 0x38))
                (&iStack_128,iVar8 + 0x10,(ulonglong)(uint)param_1[1] + 0x78);
      uVar13 = fn_8267B890(uVar2,0x48,0);
      if ((uVar13 & 0xffffffff) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = fn_826AB790(uVar13,*(undefined4 *)(iVar8 + 0x14),piVar15,&iStack_128);
      }
      if (((bStack_120 & 2) == 0) && (iStack_128 != 0)) {
        fn_826824B0();
      }
      iStack_128 = 0;
      if (((bStack_120 & 1) == 0) && (iStack_124 != 0)) {
        fn_826824B0();
      }
      iStack_124 = 0;
      fn_826824B0(iVar8);
    }
    lVar17 = 1;
    if ((*(ushort *)(*param_1 + 100) & 1) != 0) {
      if (piVar15 == (int *)0x0) {
        puVar10 = (undefined1 *)fn_826A9878(param_1[1],1);
        fn_826959C8();
        *puVar10 = 0;
      }
      else {
        uVar5 = fn_826A9878(param_1[1],1);
        fn_82696CB8(uVar5,piVar15);
      }
      lVar17 = 2;
    }
    if ((*(ushort *)(*param_1 + 100) & 2) == 0) {
      auStack_110[0] = 0;
      if (piVar15 != (int *)0x0) {
        fn_82696CB8(auStack_110,piVar15);
      }
      fn_826B2BE8(param_1[1],(ulonglong)*(uint *)(param_1[1] + 0x78) + 0xf4,auStack_110);
      fn_82696330(auStack_110);
    }
    iVar8 = 0;
    if (((*(ushort *)(*param_1 + 100) & 4) != 0) || ((*(ushort *)(*param_1 + 100) & 8) == 0)) {
      uVar6 = fn_8267B890(uVar2,0x48,0);
      if ((uVar6 & 0xffffffff) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = fn_826A2AB8(uVar6,param_1[1]);
      }
      fn_826A2CB0(iVar8,*(undefined4 *)(param_1[2] + 0x1c));
      lVar19 = 0;
      if (0 < *(int *)(param_1[2] + 0x1c)) {
        do {
          uVar5 = fn_826957D0(param_1[2],lVar19);
          fn_826A1F38(iVar8,lVar19,uVar5);
          lVar19 = lVar19 + 1;
        } while ((int)lVar19 < *(int *)(param_1[2] + 0x1c));
      }
    }
    if ((*(ushort *)(*param_1 + 100) & 4) != 0) {
      uVar5 = fn_826A9878(param_1[1],lVar17);
      fn_82696BC8(uVar5,iVar8);
      lVar17 = lVar17 + 1;
    }
    if ((*(ushort *)(*param_1 + 100) & 8) == 0) {
      uVar14 = *(uint *)(param_1[1] + 0x78);
      uVar5 = fn_826961B0(auStack_70,iVar8);
      fn_826B2BE8(param_1[1],(ulonglong)uVar14 + 0x110,uVar5);
      fn_82696330(auStack_70);
      iVar9 = param_1[1];
      uStack_130 = 7;
      piVar18 = (int *)(iVar8 + 0x10);
      uVar14 = (*(int *)(iVar9 + 0x80) - *(int *)(iVar9 + 0x84) >> 2) +
               (*(int *)(iVar9 + 0x94) + -1) * 0x20;
      fn_826961B0(auStack_90,
                        *(undefined4 *)
                         (*(int *)((uVar14 >> 3 & 0x1ffffffc) + *(int *)(iVar9 + 0x90)) +
                         (uVar14 & 0x1f) * 4));
      (**(code **)(*(int *)(iVar8 + 0x10) + 0x28))
                (piVar18,param_1[1] + 0x78,(ulonglong)*(uint *)(param_1[1] + 0x78) + 0x114,
                 auStack_90,&uStack_130);
      fn_82696330(auStack_90);
      iVar9 = param_1[1];
      auStack_12f[0] = 7;
      iVar16 = (*(int *)(iVar9 + 0x80) - *(int *)(iVar9 + 0x84) >> 2) +
               (*(int *)(iVar9 + 0x94) + -1) * 0x20;
      if (iVar16 == 0) {
        auStack_f0[0] = 1;
      }
      else {
        puVar12 = (undefined4 *)0x0;
        if (iVar16 != 0) {
          puVar12 = (undefined4 *)
                    (*(int *)((iVar16 - 1U >> 3 & 0x1ffffffc) + *(int *)(iVar9 + 0x90)) +
                    (iVar16 - 1U & 0x1f) * 4);
        }
        fn_826961B0(auStack_f0,*puVar12);
      }
      (**(code **)(*piVar18 + 0x28))
                (piVar18,param_1[1] + 0x78,(ulonglong)*(uint *)(param_1[1] + 0x78) + 0x118,
                 auStack_f0,auStack_12f);
      fn_82696330(auStack_f0);
    }
    if ((*(ushort *)(*param_1 + 100) & 0x10) != 0) {
      uVar5 = fn_826A9878(param_1[1],lVar17);
      fn_82696BC8(uVar5,uVar13);
      lVar17 = lVar17 + 1;
    }
    if ((*(ushort *)(*param_1 + 100) & 0x20) == 0) {
      auStack_e0[0] = 0;
      fn_82696BC8(auStack_e0,uVar13);
      fn_826B2BE8(param_1[1],(ulonglong)*(uint *)(param_1[1] + 0x78) + 0xf8,auStack_e0);
      fn_82696330(auStack_e0);
    }
    if ((*(ushort *)(*param_1 + 100) & 0x40) != 0) {
      uVar5 = (**(code **)(**(int **)(param_1[1] + 0x74) + 0x54))(*(int **)(param_1[1] + 0x74),0);
      uVar7 = fn_826A9878(param_1[1],lVar17);
      fn_82696480(uVar7,uVar5);
      lVar17 = lVar17 + 1;
    }
    if ((*(ushort *)(*param_1 + 100) & 0x80) != 0) {
      auStack_100[0] = 0;
      fn_826B44A0(param_1[1],(ulonglong)*(uint *)(param_1[1] + 0x78) + 0x104,auStack_100,0,0,0
                        ,0);
      uVar5 = fn_826A9878(param_1[1],lVar17);
      fn_82695FA0(uVar5,auStack_100);
      lVar17 = lVar17 + 1;
      fn_82696330(auStack_100);
    }
    if ((*(ushort *)(*param_1 + 100) & 0x100) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1[1] + 0x78) + 0x2a0);
      uVar5 = fn_826A9878(param_1[1],lVar17);
      fn_82696BC8(uVar5,uVar2);
    }
    if (iVar8 != 0) {
      fn_826824B0(iVar8);
    }
    if ((uVar13 & 0xffffffff) != 0) {
      fn_826824B0(uVar13);
    }
  }
  else {
    bVar1 = *(byte *)(iVar8 + 0x7c);
    if (piVar15 != (int *)0x0) {
      auStack_d0[0] = 0;
      fn_82696CB8(auStack_d0,piVar15);
      fn_826B2BE8(param_1[1],(ulonglong)*(uint *)(param_1[1] + 0x78) + 0xf4,auStack_d0);
      fn_82696330(auStack_d0);
    }
    if ((5 < bVar1) && (param_1[9] != 0)) {
      *(int **)(param_1[9] + 0x18) = piVar18;
    }
    if (((param_1[9] != 0) && (iVar8 = *(int *)(param_1[2] + 0x18), iVar8 != 0)) && (4 < bVar1)) {
      if (param_1[1] != iVar8) {
        iVar8 = *(int *)(iVar8 + 0x74);
        if (iVar8 != 0) {
          *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
        }
        if (param_1[6] != 0) {
          fn_8267C498();
        }
        param_1[6] = iVar8;
      }
      *(undefined4 *)(param_1[9] + 0x1c) = *(undefined4 *)(param_1[2] + 0x18);
      *(undefined4 *)(param_1[9] + 0x20) = *(undefined4 *)(param_1[2] + 0x1c);
      *(undefined4 *)(param_1[9] + 0x24) = *(undefined4 *)(param_1[2] + 0x20);
      iVar8 = param_1[1];
      uVar14 = (*(int *)(iVar8 + 0x80) - *(int *)(iVar8 + 0x84) >> 2) +
               (*(int *)(iVar8 + 0x94) + -1) * 0x20;
      fn_826961B0(auStack_b0,
                        *(undefined4 *)
                         (*(int *)((uVar14 >> 3 & 0x1ffffffc) + *(int *)(iVar8 + 0x90)) +
                         (uVar14 & 0x1f) * 4));
      fn_82695FA0((ulonglong)(uint)param_1[9] + 0x28,auStack_b0);
      fn_82696330(auStack_b0);
      iVar8 = param_1[1];
      uVar13 = (longlong)(*(int *)(iVar8 + 0x80) - *(int *)(iVar8 + 0x84) >> 2) +
               ((ulonglong)*(uint *)(iVar8 + 0x94) - 1 & 0x7ffffff) * 0x20;
      if ((uVar13 & 0xffffffff) == 0) {
        auStack_c0[0] = 1;
      }
      else {
        puVar12 = (undefined4 *)0x0;
        if ((uVar13 & 0xffffffff) != 0) {
          puVar12 = (undefined4 *)
                    (*(int *)(((uint)((uVar13 - 1 & 0xffffffff) >> 3) & 0x1ffffffc) +
                             *(int *)(iVar8 + 0x90)) + ((uint)(uVar13 - 1) & 0x1f) * 4);
        }
        fn_826961B0(auStack_c0,*puVar12);
      }
      fn_82695FA0((ulonglong)(uint)param_1[9] + 0x38,auStack_c0);
      fn_82696330(auStack_c0);
    }
    iVar8 = *(int *)(param_1[2] + 0x1c);
    if (*(int *)(*param_1 + 0x54) <= *(int *)(param_1[2] + 0x1c)) {
      iVar8 = *(int *)(*param_1 + 0x54);
    }
    uVar13 = 0;
    if (0 < iVar8) {
      lVar17 = 0;
      do {
        uVar14 = *(uint *)(*param_1 + 0x50);
        uVar5 = fn_826957D0(param_1[2],uVar13);
        fn_826B2BE8(param_1[1],(ulonglong)uVar14 + lVar17 + 4,uVar5);
        uVar13 = uVar13 + 1;
        lVar17 = lVar17 + 8;
      } while ((int)uVar13 < iVar8);
    }
    if ((int)uVar13 < (int)*(uint *)(*param_1 + 0x54)) {
      lVar17 = (uVar13 & 0x1fffffff) << 3;
      lVar19 = *(uint *)(*param_1 + 0x54) - uVar13;
      do {
        auStack_80[0] = 0;
        fn_826B2BE8(param_1[1],(ulonglong)*(uint *)(*param_1 + 0x50) + lVar17 + 4,auStack_80);
        fn_82696330(auStack_80);
        lVar19 = lVar19 + -1;
        lVar17 = lVar17 + 8;
      } while (lVar19 != 0);
    }
  }
  return;
}

