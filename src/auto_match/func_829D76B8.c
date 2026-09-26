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
extern int fn_829D37C8();
extern int fn_829D3C10();
extern int fn_829D40C8();
extern int fn_829D43A8();
extern int fn_829D4E70();
extern int fn_829D6D60();
extern int fn_829D6DB0();
extern int fn_829D6E00();
extern int fn_829D6E50();
extern int fn_829D6EA0();
extern int fn_829E03F0();
extern int fn_82A1DDC0();
extern int fn_82A2B028();
extern int fn_82A2B070();
extern int fn_82A2B0B8();
extern int fn_82F691F0();
extern unsigned int iStack0000001c;
extern unsigned int iStack_b4;
extern unsigned int lbl_83010008;
extern unsigned int *lbl_832179FC;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_829D76B8(uint *param_1,int param_2,undefined *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  undefined1 uVar10;
  undefined8 uVar7;
  int iVar9;
  undefined8 uVar8;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  char cVar15;
  char cVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  uint *puStack00000014;
  int iStack0000001c;
  undefined *puStack00000024;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined *puStack_b8;
  int iStack_b4;
  uint uStack_b0;
  
  piVar13 = lbl_832179FC + 0x9260;
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  puStack00000024 = param_3;
  RtlEnterCriticalSection(piVar13);
  piVar6 = lbl_832179FC;
  if (param_2 == 0) {
    uVar1 = param_1[0x13];
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    uVar14 = 0;
    piVar12 = lbl_832179FC + 0x22f;
    do {
      if (*piVar12 == *(int *)(param_2 + 0x1c)) {
        param_1 = (uint *)(lbl_832179FC + uVar14 * 0x16 + 0x228);
        goto LAB_829d7750;
      }
      uVar14 = uVar14 + 1;
      piVar12 = piVar12 + 0x16;
    } while (uVar14 < 2);
    param_1 = (uint *)0x0;
LAB_829d7750:
    puStack00000014 = param_1;
    if (param_1 == (uint *)0x0) {
      RtlLeaveCriticalSection(piVar13);
      return;
    }
  }
  uVar14 = param_1[9];
  if (param_2 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(longlong *)(param_2 + 0x28);
  }
  if (-1 < (int)param_3) {
    if ((lbl_832179FC[uVar1 * 0x54 + 0x82] != 2) ||
       (bVar5 = true, param_1[7] != lbl_832179FC[uVar1 * 0x54 + 0x81])) {
      bVar5 = false;
    }
    if (!bVar5) {
      param_3 = &lbl_83010008;
      puStack00000024 = &lbl_83010008;
    }
  }
  uVar2 = *param_1;
  if ((uVar2 == 2) || (uVar2 == 1)) {
    if (-1 < (int)param_3) {
      if (*(uint *)(param_2 + 0x18) < 8) {
        piVar13 = lbl_832179FC + *(uint *)(param_2 + 0x18) * 6;
        *piVar13 = 2;
        if (*param_1 == 2) {
          piVar13[1] = *(int *)(param_2 + 8);
          if (*(int *)(param_2 + 0x18) != *(int *)(param_2 + 0x14)) {
            piVar13 = piVar6 + *(int *)(param_2 + 0x14) * 6;
            *piVar13 = 0;
            piVar13[1] = 0;
            piVar13[3] = 0xfe;
            piVar13[5] = 0;
          }
        }
      }
      iVar9 = *(int *)(param_2 + 0x18);
LAB_829d78cc:
      piVar6[uVar1 * 0x54 + 0x80] = iVar9;
      goto LAB_829d78d0;
    }
    if ((uVar2 == 2) && (piVar13 = lbl_832179FC + param_1[4] * 6, *piVar13 == 3)) {
      *piVar13 = 0;
      piVar13[1] = 0;
      piVar13[3] = 0xfe;
      piVar13[5] = 0;
    }
    if (param_3 != &lbl_83010008) {
      iVar9 = -5;
      goto LAB_829d78cc;
    }
    piVar6[uVar1 * 0x54 + 0x80] = -1;
  }
  else {
LAB_829d78d0:
    if ((param_3 == (undefined *)0x80004004) &&
       (((*param_1 == 1 || (*param_1 == 2)) && (param_1[0x12] + param_1[0xe] < 0x23)))) {
      DbgPrint(0xffffffff820575e0);
    }
  }
  uVar2 = *param_1;
  if (uVar2 == 1) {
    dVar19 = (double)(float)param_1[0x14];
    piVar13 = lbl_832179FC + 0x23c0c;
    fn_829D4E70(0);
    fn_829D4E70(3);
    fn_829D4E70(1);
    uVar7 = fn_829D4E70(2);
    uVar2 = param_1[0xe];
    uVar3 = param_1[1];
    uVar4 = piVar13[6];
    uVar8 = XamNuiIdentityGetSessionId();
    fn_829D40C8(dVar19,0x832170e8,uVar8,1,uVar4 & 0xffff,uVar3,uVar2 & 0xff,puStack00000024,uVar7)
    ;
    piVar13 = lbl_832179FC;
    piVar12 = lbl_832179FC + 0x23f42;
    iVar9 = fn_829E03F0(piVar12,piVar6 + uVar14 * 0x47ec + 0x2324);
    param_1 = puStack00000014;
    param_2 = iStack0000001c;
    param_3 = puStack00000024;
    if (iVar9 < 0) goto LAB_829d84d0;
    fn_829D6E50(piVar12,*puStack00000014 & 0xff);
    fn_829D6D60(piVar12,lbl_832179FC[0x23c12] & 0xffff);
    fn_829D6DB0(piVar12,param_1[1]);
    fn_829D6E50(piVar12,param_1[0xe] & 0xff);
    param_3 = puStack00000024;
    fn_829D6DB0(piVar12,puStack00000024);
    uVar7 = fn_829D4E70(2);
    fn_829D6E50(piVar12,uVar7);
    uVar7 = fn_829D4E70(1);
    fn_829D6E50(piVar12,uVar7);
    uVar7 = fn_829D4E70(3);
    fn_829D6E50(piVar12,uVar7);
    uVar7 = fn_829D4E70(0);
    fn_829D6E50(piVar12,uVar7);
    fn_829D6E50(piVar12,param_1[0x12] & 0xff);
    fn_829D6E00((double)(float)param_1[0x14],piVar12);
    fn_82A1DDC0((ulonglong)(uint)piVar13[0x23f44] + (ulonglong)(uint)piVar13[0x23f43],
                      piVar6 + uVar14 * 0x47ec + 0x4a4e,0x80);
    piVar13[0x23f43] = piVar13[0x23f43] + 0x80;
    fn_829D6E50(piVar12,piVar6[uVar1 * 0x54 + 0x80] & 0xff);
  }
  else {
    if (uVar2 != 2) {
      if (uVar2 == 4) {
        fn_829D3C10();
      }
      else if (uVar2 == 6) {
        uVar14 = param_1[0x15];
        piVar6[uVar1 * 0x54 + 0x80] = uVar14;
        if (uVar14 < 8) {
          piVar6[uVar14 * 6] = ((uint)LZCOUNT((int)&lbl_83010008 - (int)param_3) >> 5 ^ 1) + 1;
        }
        if ((piVar6[uVar1 * 0x54 + 0x80] == -4) || (param_3 == &lbl_83010008)) {
          piVar6[uVar1 * 0x54 + 0x80] = -1;
        }
      }
      goto LAB_829d84d0;
    }
    cVar15 = '\0';
    cVar16 = '\0';
    lVar18 = 8;
    piVar13 = piVar6;
    do {
      if (((*piVar13 == 1) || (*piVar13 == 2)) && (cVar15 = cVar15 + '\x01', (uint)piVar13[3] < 4))
      {
        cVar16 = cVar16 + '\x01';
      }
      piVar13 = piVar13 + 6;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar19 = (double)(float)param_1[0x14];
    piVar13 = lbl_832179FC + 0x23c0c;
    fn_829D4E70(0);
    fn_829D4E70(3);
    fn_829D4E70(1);
    uVar10 = fn_829D4E70(2);
    uVar2 = param_1[0xe];
    uVar3 = param_1[1];
    iVar9 = piVar13[6];
    uVar7 = XamNuiIdentityGetSessionId();
    fn_829D43A8(dVar19,0x832170e8,uVar7,1,(short)iVar9,uVar3,(char)uVar2,puStack00000024,uVar10);
    piVar13 = lbl_832179FC;
    piVar12 = lbl_832179FC + 0x23f42;
    iVar9 = fn_829E03F0(piVar12,piVar6 + uVar14 * 0x47ec + 0x2324);
    param_1 = puStack00000014;
    param_2 = iStack0000001c;
    param_3 = puStack00000024;
    if (iVar9 < 0) goto LAB_829d84d0;
    fn_829D6E50(piVar12,*puStack00000014 & 0xff);
    fn_829D6D60(piVar12,lbl_832179FC[0x23c12] & 0xffff);
    fn_829D6DB0(piVar12,param_1[1]);
    fn_829D6E50(piVar12,param_1[0xe] & 0xff);
    param_3 = puStack00000024;
    fn_829D6DB0(piVar12,puStack00000024);
    uVar7 = fn_829D4E70(2);
    fn_829D6E50(piVar12,uVar7);
    uVar7 = fn_829D4E70(1);
    fn_829D6E50(piVar12,uVar7);
    uVar7 = fn_829D4E70(3);
    fn_829D6E50(piVar12,uVar7);
    uVar7 = fn_829D4E70(0);
    fn_829D6E50(piVar12,uVar7);
    fn_829D6E50(piVar12,param_1[0x12] & 0xff);
    fn_829D6E00((double)(float)param_1[0x14],piVar12);
    fn_82A1DDC0((ulonglong)(uint)piVar13[0x23f44] + (ulonglong)(uint)piVar13[0x23f43],
                      piVar6 + uVar14 * 0x47ec + 0x4a4e,0x80);
    piVar13[0x23f43] = piVar13[0x23f43] + 0x80;
    fn_829D6E50(piVar12,cVar15);
    fn_829D6EA0(piVar12,lVar17);
    fn_829D6E50(piVar12,cVar16);
    fn_829D6E50(piVar12,*(undefined1 *)((int)lbl_832179FC + 0x8f401));
    fn_829D6E50(piVar12,*(undefined1 *)(lbl_832179FC + 0x23d00));
    fn_829D6E50(piVar12,param_1[0x15] & 0xff);
    fn_829D6E50(piVar12,param_1[3] & 0xff);
    fn_829D6E50(piVar12,piVar6[uVar1 * 0x54 + 0x80] & 0xff);
  }
  *(undefined1 *)piVar12 = 1;
  param_2 = iStack0000001c;
LAB_829d84d0:
  if (param_1[5] != 0) {
    uStack_bc = param_1[7];
    iStack_b4 = piVar6[uVar1 * 0x54 + 0x80];
    uStack_c0 = 1;
    uStack_b0 = (uint)(lVar17 != 0);
    puStack_b8 = param_3;
    fn_829D37C8(param_1[5],param_1[6],&uStack_c0);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((int)param_1[1] < 0) {
    if (param_2 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(param_2 + 0x40);
    }
    uVar14 = *param_1;
    if (uVar14 == 1) {
      fn_82A2B070(param_3,param_1[7],piVar6[uVar1 * 0x54 + 0x80],uVar11,lVar17);
    }
    else if (uVar14 == 2) {
      fn_82A2B028(param_3);
    }
    else if (uVar14 == 6) {
      fn_82A2B0B8(param_3,param_1[7],uVar11);
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1,0,0x58);
}

