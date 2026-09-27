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
extern unsigned int *auStack_84e;
extern unsigned int *auStack_860;
extern unsigned int fStack_880;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82356F98();
extern int fn_823F2E20();
extern int fn_824651F0();
extern int fn_82465298();
extern int fn_824655B8();
extern int fn_82468FC0();
extern int fn_82469958();
extern int fn_82469DA0();
extern int fn_82469F80();
extern int fn_8246BB70();
extern int fn_8246BC48();
extern int fn_8246C4E0();
extern int fn_8246EAC8();
extern int fn_8246EC90();
extern int fn_8246ED48();
extern int fn_8246EE38();
extern int fn_8246F628();
extern int fn_8246F6A0();
extern int fn_8246F718();
extern int fn_8246F808();
extern int fn_8246F9F0();
extern int fn_8246FC10();
extern int fn_8246FD00();
extern int fn_824BD700();
extern int fn_824BDAC8();
extern int fn_824BDE68();
extern int fn_82672C20();
extern int memset();
extern unsigned int iStack_85c;
extern unsigned int iStack_87c;
extern unsigned int lbl_820E975C;
extern unsigned int lbl_82191418;
extern unsigned int lbl_821955F4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6BD0;
extern unsigned int lbl_831C6BE0;
extern unsigned int lbl_831C6C14;
extern unsigned int lbl_831C6C18;
extern unsigned int lbl_831C6C20;
extern unsigned int lbl_831C6C24;
extern unsigned int lbl_831C6C28;
extern unsigned int lbl_831C6C30;
extern unsigned int lbl_831C6C68;
extern unsigned int lbl_831C6C6C;
extern unsigned int lbl_831C6C70;
extern unsigned int lbl_831C6C7C;
extern unsigned int lbl_831C6C88;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_83265A28;
extern unsigned int *lbl_8327F848;
extern unsigned int uStack_850;
extern unsigned int uStack_86c;
extern unsigned int uStack_870;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8246DC40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_r0;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar10;
  undefined8 uVar9;
  int *piVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  double dVar15;
  undefined1 in_vr0 [16];
  undefined1 in_vr9 [16];
  undefined1 auVar16 [16];
  undefined1 in_vr10 [16];
  undefined1 in_vr11 [16];
  undefined1 auVar17 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  float fStack_880;
  int iStack_87c;
  struct { undefined4 first; undefined4 second; } stack_pair_870;

  undefined2 *puStack_868;
  undefined1 auStack_860 [4];
  int iStack_85c;
  undefined2 uStack_850;
  undefined1 auStack_84e [1870];

  uStack_850 = lbl_820E975C;
  memset(auStack_84e,0,0x7fe);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar13 = 0;
  if (param_2 == iVar7) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  uVar2 = lbl_831C6BE0;
  uVar6 = lbl_831C6BD0;
  dVar15 = (double)lbl_821CC160;
  if (iVar7 == 0) {
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    loadVectorLeftIndexed128(0xffffffff831c6b70,0x68);
    loadVectorLeftIndexed128(0xffffffff831c6b70,100);
    iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    loadVectorLeftIndexed128(0xffffffff831c6b70,0x58);
    vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3);
    loadVectorLeftIndexed128(0xffffffff831c6b70,0x54);
    vectorRotateLeftImmediateMaskInsert128(in_vr10,in_vr11,4,3);
    loadVectorLeftIndexed128(0xffffffff831c6b70,0x6c);
    loadVectorLeftIndexed128(0xffffffff831c6b70,0x5c);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr0,4,3); memcpy(auVar17, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr9,in_vr0,4,3); memcpy(auVar16, &_vt1, 16); }
    iVar8 = *(int *)(iVar7 + 0x34);
    *(undefined4 *)(iVar7 + 0x30) = lbl_831C6BD0;
    *(undefined4 *)(iVar7 + 0x70) = uVar2;{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr13,auVar17,3,2); memcpy(auVar17, &_vt2, 16); }{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr0,auVar16,3,2); memcpy(auVar16, &_vt3, 16); }
    memcpy((void *)((const void *)(iVar7 + 0x60U & 0xfffffff0)), auVar17, 16);
    memcpy((void *)((const void *)(iVar7 + 0x20U & 0xfffffff0)), auVar16, 16);
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 0x20) = uVar6;
      *(undefined4 *)(iVar8 + 0x30) = 0;
      memcpy((void *)((const void *)(iVar8 + 0x10U & 0xfffffff0)), auVar16, 16);
    }
    iVar7 = *(int *)(iVar7 + 0x74);
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 0x20) = uVar2;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      memcpy((void *)((const void *)(iVar7 + 0x10U & 0xfffffff0)), auVar17, 16);
    }
    fn_8246FD00(param_1);
LAB_8246df70:
    *(float *)(*(int *)(param_1 + 0x440) + 0x2c) = (float)dVar15;
  }
  else if (iVar7 == 3) {
    iVar7 = *(int *)(param_1 + 0x8c);
    iVar8 = *(int *)(iVar7 + 0x1c);
    iVar1 = *(int *)(iVar7 + 0x2c);
    uVar6 = *(undefined4 *)(iVar7 + 0x50);
    iVar10 = *(int *)(iVar7 + 0x30) * 0x28 + iVar8;
    puVar5 = (undefined4 *)fn_8246C4E0();
    iVar7 = *(int *)(param_1 + 0x90);
    *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar1 * 0x28 + iVar8);
    *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(iVar10 + 4);
    *(undefined4 *)(iVar7 + 0x34) = *puVar5;
    *(undefined4 *)(iVar7 + 0x30) = uVar6;
    fn_8246BB70(*(undefined4 *)(param_1 + 0x90));
LAB_8246deac:
    fn_8246FD00(param_1);
  }
  else if (iVar7 == 6) {
    fn_8246F9F0(param_1,param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x54);
  }
  else {
    if (iVar7 == 7) {
      fn_82356F98(&fStack_880);
      fn_823F2E20(param_1 + 0x428,&fStack_880);
      if (iStack_87c != 0) {
        fn_822315A0();
      }
      if (*(int *)(param_1 + 0x438) != 0) {
        fn_824BDE68(*(int *)(param_1 + 0x438),0);
        fn_824BD700(*(undefined4 *)(param_1 + 0x438));
      }
      goto LAB_8246deac;
    }
    if (iVar7 == 9) {
      fn_824655B8(*(undefined4 *)(param_1 + 0x98),1);
      lVar14 = 2;
      piVar11 = (int *)(*(int *)(*(int *)(param_1 + 8) + 0x50) + 0x38);
      do {
        if (piVar11[-1] != 0) {
          *(undefined4 *)(piVar11[-1] + 0x88) = 1;
        }
        if (*piVar11 != 0) {
          *(undefined4 *)(*piVar11 + 0x88) = 1;
        }
        piVar11 = piVar11 + 0x10;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fn_82469958(*(undefined4 *)(param_1 + 0x3fc),0);
    }
    else if (iVar7 == 10) {
      if (*(int *)(param_1 + 0x684) != 0) {
        (**(code **)(*lbl_8327F848 + 0x54))();
        piVar11 = *(int **)(param_1 + 0x684);
        if (piVar11 != (int *)0x0) {
          (**(code **)(*piVar11 + 4))(piVar11,1);
        }
        *(undefined4 *)(param_1 + 0x684) = 0;
      }
    }
    else if (iVar7 == 0xb) {
      fn_82356F98(&fStack_880);
      fn_823F2E20(param_1 + 0x428,&fStack_880);
      if (iStack_87c != 0) {
        fn_822315A0();
      }
      if (*(int *)(param_1 + 0x438) != 0) {
        fn_824BDE68(*(int *)(param_1 + 0x438),0);
        fn_824BD700(*(undefined4 *)(param_1 + 0x438));
      }
      fn_8246FD00(param_1);
      iVar7 = *(int *)(param_1 + 0x444);
      if (*(int *)(iVar7 + 0xc) != 1) {
        *(undefined4 *)(iVar7 + 0xc) = 1;
        *(undefined4 *)(iVar7 + 0x10) = 1;
        fn_82469F80((double)lbl_82191418);
      }
      goto LAB_8246df70;
    }
  }
  *(int *)(param_1 + 0xc) = param_2;
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x78) = (float)dVar15;
    *(float *)(param_1 + 0x18) = (float)dVar15;
    fn_8246ED48(param_1);
    fn_82465298((double)lbl_831C6C24,(double)lbl_831C6C28,(double)lbl_831C6C20,
                      *(undefined4 *)(param_1 + 0x440),param_1 + 0xd4);
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar9 = 0xffffffff821bc624;
      uVar13 = 0xffffffff82196582;
    }
    else {
      if (*(int *)(param_1 + 0xc) != 3) {
        return;
      }
      if (*(int *)(param_1 + 0x14) == 3) {
        uVar9 = 0xffffffff821bc634;
        uVar13 = 0xffffffff821bc644;
      }
      else {
        if (*(int *)(param_1 + 0x14) != 4) {
          return;
        }
        uVar9 = 0xffffffff821bc634;
        uVar13 = 0xffffffff821bc65c;
      }
    }
    fn_8246FC10(param_1,uVar13,uVar9);
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x18) = lbl_831C6C18;
    *(float *)(param_1 + 0x78) = (float)dVar15;
    fn_8246F628(param_1,0xffffffff821bc490);
    uVar13 = 0xffffffff821bc47c;
    goto LAB_8246e0c8;
  case 3:
    fn_8246BC48(*(undefined4 *)(param_1 + 0x90));
    *(float *)(param_1 + 0x78) = (float)dVar15;
    *(float *)(param_1 + 0x7c) = (float)dVar15;
    *(undefined4 *)(param_1 + 0x374) = 1;
    uVar13 = 0xffffffff821bc4b0;
    *(undefined4 *)(param_1 + 0x18) = lbl_821955F4;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (*(int *)(param_1 + 0x464) == 0) {
        fn_8246EC90(param_1,param_1 + 0x32c,1,1,0xffffffff821bc4a0,0xffffffff821bc4b0);
      }
      *(undefined4 *)(param_1 + 0x18) = lbl_831C6C14;
    }
    fn_8246F628(param_1,0xffffffff821bc4a0);
LAB_8246e0c8:
    fn_8246F6A0(param_1,uVar13);
    uVar13 = 0;
LAB_8246e0d4:
    fn_82469958(*(undefined4 *)(param_1 + 0x3fc),uVar13);
    break;
  case 4:
    fn_8246F718(param_1,0xffffffff821bc4c4,&uStack_850,0x400);
    if (*(int *)(param_1 + 0x6c) == 0) {
      iVar7 = param_1 + 0xec;
      if (*(int *)(param_1 + 0x70) == 0) {
        iVar7 = param_1 + 0xe4;
      }
    }
    else {
      iVar7 = param_1 + 0xe8;
    }
    fn_824651F0(*(undefined4 *)(param_1 + 0x440),iVar7);
    fn_8246EAC8(param_1,param_1 + 0x330,0,0);
    fn_82469958(*(undefined4 *)(param_1 + 0x3fc),0);
    if (*(int *)(*(int *)(param_1 + 0x444) + 0xc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x444) + 0xc) = 0;
      fn_82469F80(dVar15);
    }
    break;
  case 5:
    if (*(int *)(*(int *)(param_1 + 0x444) + 0xc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x444) + 0xc) = 0;
      fn_82469F80(dVar15);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x444) + 0x10) = 0;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x10) = 0;
    fn_8246EC90(param_1,param_1 + 0x334,0,0,0xffffffff821bc4f4,0xffffffff821bc4d4);
    fn_8246F808((double)*(float *)(param_1 + 0x1c),param_1,&uStack_850);
    fn_82469DA0(*(undefined4 *)(param_1 + 0x310),0,&uStack_850);
    fn_8246F808((double)*(float *)(param_1 + 0x44),param_1,&uStack_850);
    fn_82469DA0(*(undefined4 *)(param_1 + 0x310),1,&uStack_850);
    *(undefined4 *)(param_1 + 0x374) = 1;
    *(undefined4 *)(param_1 + 0x18) = lbl_831C6C30;
    *(float *)(param_1 + 0x78) = (float)dVar15;
    *(float *)(param_1 + 0x84) = (float)dVar15;
    fn_82468FC0(*(undefined4 *)(param_1 + 0x418));
    piVar11 = *(int **)(param_1 + 0x444);
    if (*piVar11 != 0) {
      *piVar11 = 0;
      fn_82672C20(piVar11[1],0xffffffff821bc37c,0,0);
    }
    fn_824655B8(*(undefined4 *)(param_1 + 0x98),1);
    break;
  case 7:
    if ((*(int **)(param_1 + 0x438) != (int *)0x0) &&
       ((iVar7 = **(int **)(param_1 + 0x438), *(int *)(iVar7 + 4) == 0 ||
        (uVar13 = 1, *(int *)(iVar7 + 8) != 0)))) {
      uVar13 = 0;
    }
    fn_8246EE38(param_1,param_1 + 0x364,param_1 + 0x36c,0xffffffff821bc440,0xffffffff821bc424,
                      uVar13,0);
    if ((lbl_832659CD == '\0') || (lbl_83265988 == 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (uint)LZCOUNT(*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) >> 3 & 1) >>
               5;
    }
    if (uVar12 == 0) {
      iVar7 = param_1 + 0x120;
    }
    else {
      fn_824BDAC8(*(undefined4 *)(param_1 + 0x438),0,0,1);
      iVar7 = param_1 + 0x11c;
    }
    fn_824651F0(*(undefined4 *)(param_1 + 0x440),iVar7);
    fVar4 = lbl_831C6C70;
    fVar3 = lbl_831C6C6C;
    iVar7 = *(int *)(param_1 + 0x440);
    uVar6 = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(iVar7 + 0x38) = lbl_831C6C68;
    *(undefined4 *)(iVar7 + 0x28) = uVar6;
    *(float *)(iVar7 + 0x34) = fVar4;
    *(float *)(iVar7 + 0x30) = fVar3;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fStack_880 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
    *(float *)(iVar7 + 0x2c) = (fVar4 - fVar3) * (fStack_880 - lbl_821CA460) + fVar3;
    piVar11 = *(int **)(param_1 + 0x444);
    *(float *)(param_1 + 0x18) = (float)dVar15;
    *(float *)(param_1 + 0x78) = (float)dVar15;
    if (*piVar11 != 0) {
      *piVar11 = 0;
      fn_82672C20(piVar11[1],0xffffffff821bc37c,0,0);
    }
    fn_82468FC0(*(undefined4 *)(param_1 + 0x418));
    uVar13 = 1;
    goto LAB_8246e0d4;
  case 8:
    fn_8246F9F0(param_1,param_1 + 0x15c);
    fn_8246F628(param_1,0xffffffff821bc410);
    fn_8246F6A0(param_1,0xffffffff821bc3f8);
    *(float *)(param_1 + 0x78) = (float)dVar15;
    *(undefined4 *)(param_1 + 0x18) = lbl_831C6C7C;
    break;
  case 9:
    if (*(int *)(param_1 + 0x88) == 0) {
      iVar7 = param_1 + 0x344;
      fn_8246F718(param_1,0xffffffff821b38b8,&uStack_850,0x400);
      uVar13 = 0xffffffff821bc50c;
    }
    else if (*(int *)(param_1 + 0x88) == 1) {
      iVar7 = param_1 + 0x348;
      fn_8246F718(param_1,0xffffffff821b38b8,&uStack_850,0x400);
      uVar13 = 0xffffffff821bc528;
    }
    else {
      iVar7 = param_1 + 0x34c;
      fn_8246F718(param_1,0xffffffff821bc094,&uStack_850,0x400);
      uVar13 = 0xffffffff821bc544;
    }
    fn_8246F9F0(param_1,param_1 + 0x170);
    fn_8246EC90(param_1,iVar7,1,1,0xffffffff821bc560,uVar13);
    stack_pair_870.first = 0;
    stack_pair_870.second = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x310);
    fn_82273CD8(&stack_pair_870.first,5);
    puStack_868 = &uStack_850;
    puVar5 = (undefined4 *)fn_82279C58(auStack_860,uVar6);
    fn_82672C20(*puVar5,0xffffffff821bc2e4,&stack_pair_870.first,1);
    if (iStack_85c != 0) {
      fn_822315A0();
    }
    fn_82273C88(&stack_pair_870.first);
    *(float *)(param_1 + 0x18) = (float)dVar15;
    *(undefined4 *)(param_1 + 0x374) = 1;
    *(undefined4 *)(param_1 + 0x468) = 0;
    *(undefined4 *)(param_1 + 0x46c) = lbl_831C6C88;
    goto LAB_8246e710;
  case 10:
    iVar7 = *(int *)(param_1 + 0x94);
    if (*(int *)(iVar7 + 0xd0) != 0) {
      *(undefined4 *)(iVar7 + 0xd0) = 0;
      if (*(int *)(iVar7 + 0xd4) != 0) {
        *(undefined4 *)(iVar7 + 0xd4) = 0;
      }
      *(float *)(iVar7 + 0xdc) = (float)dVar15;
    }
    fn_824655B8(*(undefined4 *)(param_1 + 0x98),1);
    *(undefined4 *)(param_1 + 0x468) = 1;
    piVar11 = *(int **)(param_1 + 0x444);
    if (*piVar11 != 2) {
      *piVar11 = 2;
      fn_82672C20(piVar11[1],0xffffffff821bc38c,0,0);
    }
    goto LAB_8246e70c;
  case 0xb:
    fn_82469958(*(undefined4 *)(param_1 + 0x3fc),1);
    if ((lbl_832659CD == '\0') || (lbl_83265988 == 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (uint)LZCOUNT(*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) >> 3 & 1) >>
               5;
    }
    iVar7 = *(int *)(param_1 + 0x88);
    if (uVar12 == 0) {
      if (iVar7 == 0) {
        iVar8 = param_1 + 0x140;
      }
      else {
        iVar8 = param_1 + 0x144;
        if (iVar7 != 1) {
          iVar8 = param_1 + 0x13c;
        }
      }
LAB_8246e668:
      uVar6 = *(undefined4 *)(param_1 + 0x440);
    }
    else {
      if (iVar7 == 0) {
        iVar8 = param_1 + 0x134;
        goto LAB_8246e668;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x440);
      if (iVar7 == 1) {
        iVar8 = param_1 + 0x138;
      }
      else {
        iVar8 = param_1 + 0x130;
      }
    }
    fn_824651F0(uVar6,iVar8);
    if ((*(int **)(param_1 + 0x438) != (int *)0x0) &&
       ((iVar7 = **(int **)(param_1 + 0x438), *(int *)(iVar7 + 4) == 0 ||
        (uVar13 = 1, *(int *)(iVar7 + 8) != 0)))) {
      uVar13 = 0;
    }
    fn_8246EE38(param_1,param_1 + 0x368,param_1 + 0x36c,0xffffffff821bc46c,0xffffffff821bc454,
                      uVar13,0);
    fn_82468FC0(*(undefined4 *)(param_1 + 0x418));
    if (*(int *)(*(int *)(param_1 + 0x444) + 0xc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x444) + 0xc) = 0;
      fn_82469F80(dVar15);
    }
    if (*(int *)(param_1 + 0x438) != 0) {
      fn_824BDAC8(*(int *)(param_1 + 0x438),0,0,1);
    }
    *(undefined4 *)(param_1 + 0x43c) = 0;
LAB_8246e70c:
    *(float *)(param_1 + 0x18) = (float)dVar15;
LAB_8246e710:
    *(float *)(param_1 + 0x78) = (float)dVar15;
    break;
  case 0xc:
    fn_8246EAC8(param_1,param_1 + 0x330,1,3);
  }
  return;
}
