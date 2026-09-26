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
extern int fn_8223C478();
extern int fn_823AA970();
extern int fn_825089A0();
extern int fn_8265CA20();
extern int fn_82881B18();
extern int fn_82881FC0();
extern int fn_82883118();
extern int fn_828831D8();
extern int fn_82887DB8();
extern int fn_82888068();
extern int fn_82888170();
extern int fn_82888230();
extern int fn_82889888();
extern int fn_82889A28();
extern int fn_828E9D28();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9DB8();
extern int fn_828E9FF8();
extern int fn_828EA180();
extern int fn_828EA2D8();
extern int fn_828EA790();
extern int fn_82CE0B38();
extern int fn_82CE0BB0();
extern unsigned int iStack_78;
extern unsigned int iStack_80;
extern unsigned int iStack_a4;
extern unsigned int lbl_831599F0;
extern unsigned int lbl_831599F4;
extern int (*lbl_832129DC)();
extern unsigned int *lbl_83212A04;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_a8;


ulonglong fn_82883480(int param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                       int param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar7;
  int iVar8;
  char cVar12;
  undefined8 uVar6;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  byte *pbVar13;
  byte *pbVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int *piVar17;
  int *piStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  longlong lStack_a0;
  longlong lStack_98;
  undefined1 auStack_90 [16];
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  uVar15 = 0xffffffffffffffff;
  bVar4 = *(char *)(param_1 + 5) == '\0';
  if (param_4 == 0) {
    lStack_a0 = 0;
    iVar7 = fn_828E9DA8(param_6);
    iVar8 = fn_828E9D90(param_6);
    if (0x3f < iVar7 - iVar8) {
      fn_828EA180(param_6,&lStack_a0,8);
    }
    lVar5 = lStack_a0;
    piVar17 = lbl_83212A04;
    uVar16 = 0xffffffffffffffff;
    piStack_b0 = (int *)*lbl_83212A04;
    while (piStack_b0 != piVar17) {
      iVar7 = piStack_b0[4];
      if ((iVar7 != 0) && (lVar5 == *(longlong *)(iVar7 + 0x58))) {
        pbVar13 = (byte *)(*(int *)(param_1 + 100) + -8);
        pbVar14 = *(byte **)(iVar7 + 100) + -8;
        do {
          bVar1 = *pbVar14;
          bVar2 = *pbVar13;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar14 = pbVar14 + 1;
          pbVar13 = pbVar13 + 1;
        } while (pbVar14 != *(byte **)(iVar7 + 100));
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          uVar16 = (ulonglong)(uint)piStack_b0[3];
          break;
        }
      }
      fn_828EA790(&piStack_b0);
    }
    fn_82888170(param_2,0,0x14,1);
    fn_82888170(param_2,0,0x15,param_7);
    fn_82888170(param_2,0,0x16,param_7);
    cVar12 = fn_82887DB8(param_2,0);
    if (cVar12 != '\0') {
      uVar6 = fn_82889A28();
      fn_82889888(uVar6,param_6,param_2,uVar16,0,0,bVar4,param_3);
    }
    piVar17 = (int *)uVar16;
    if (-1 < (int)piVar17) {
      piStack_b0 = piVar17;
      piVar9 = (int *)fn_82883118(0xffffffff83212a00,&piStack_b0);
      iVar7 = *piVar9;
      if (*(int *)(iVar7 + 8) < 0) {
        iStack_80 = *(int *)(param_6 + 0x10);
        if (iStack_80 == 0) {
          iStack_80 = *(int *)(param_6 + 0x18);
        }
        uStack_7c = (undefined4)param_7;
        iStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        fn_828E9D28(auStack_90,iStack_80,param_7);
        iVar8 = fn_828E9DA8(auStack_90);
        iVar10 = fn_828E9D90(auStack_90);
        if (0xf < iVar8 - iVar10) {
          fn_828E9FF8(auStack_90,0x10);
        }
        iVar8 = fn_828E9DA8(auStack_90);
        iVar10 = fn_828E9D90(auStack_90);
        if (0 < iVar8 - iVar10) {
          fn_828E9FF8(auStack_90,1);
        }
        fn_8223C478(auStack_90,1,0);
        fn_828E9DB8(auStack_90,1,1);
        iVar8 = fn_828E9DA8(auStack_90);
        iVar10 = fn_828E9D90(auStack_90);
        if (0 < iVar8 - iVar10) {
          fn_828E9FF8(auStack_90,1);
        }
        fn_8223C478(auStack_90,0x40,0);
        fn_828EA2D8(auStack_90,param_1 + 0x58,8);
        if (iStack_78 != 0) {
          fn_8265CA20();
        }
        iStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        fn_82888170(uVar16,1,0,1);
        fn_82888170(uVar16,1,1,param_7);
        fn_82888170(uVar16,1,2,param_7);
        fn_82888230(uVar16,1,0x2c,param_7);
        fn_82888068(uVar16,1,0x2d,param_7,1);
        cVar12 = fn_82887DB8(uVar16,1);
        if (cVar12 != '\0') {
          uVar6 = fn_82889A28();
          fn_82889888(uVar6,param_6,uVar16,param_2,1,1,bVar4,param_3);
        }
        uVar3 = lbl_831599F0;
        if (*(char *)(param_1 + 5) != '\0') {
          uVar3 = lbl_831599F4;
        }
        iStack_a4 = *(int *)(param_6 + 0x10);
        if (iStack_a4 == 0) {
          iStack_a4 = *(int *)(param_6 + 0x18);
        }
        uStack_a8 = fn_823AA970(param_6);
        piStack_b0 = (int *)fn_823AA970(param_6);
        iVar7 = fn_82CE0B38(uVar3,&uStack_a8,1,&piStack_b0,0,iVar7 + 0x24,0x10,0);
        if (iVar7 != 0) {
          fn_82CE0BB0();
        }
        piVar9 = (int *)fn_825089A0();
        uVar6 = (**(code **)(*piVar9 + 0xc))();
        piStack_ac = piVar17;
        puVar11 = (undefined8 *)fn_828831D8(param_1 + 0x10,&piStack_ac);
        *puVar11 = uVar6;
      }
    }
  }
  else if (param_4 == 1) {
    iVar7 = fn_828E9DA8(param_6);
    iVar8 = fn_828E9D90(param_6);
    if (0x3f < iVar7 - iVar8) {
      fn_828EA180(param_6,&lStack_98,8);
    }
    piVar17 = lbl_83212A04;
    piStack_b0 = (int *)*lbl_83212A04;
    while (piStack_b0 != piVar17) {
      iVar7 = piStack_b0[4];
      if ((iVar7 != 0) && (lStack_98 == *(longlong *)(iVar7 + 0x58))) {
        pbVar13 = (byte *)(*(int *)(param_1 + 100) + -8);
        pbVar14 = *(byte **)(iVar7 + 100) + -8;
        do {
          bVar1 = *pbVar14;
          bVar2 = *pbVar13;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar14 = pbVar14 + 1;
          pbVar13 = pbVar13 + 1;
        } while (pbVar14 != *(byte **)(iVar7 + 100));
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          uVar15 = (ulonglong)(uint)piStack_b0[3];
          break;
        }
      }
      fn_828EA790(&piStack_b0);
    }
    cVar12 = fn_82887DB8(uVar15,1);
    if (cVar12 != '\0') {
      uVar6 = fn_82889A28();
      fn_82889888(uVar6,param_6,param_2,uVar15,1,0,bVar4,param_3);
    }
    if ((param_5 == 0) && ((int)uVar15 != -1)) {
      if (((int)uVar15 < 0) || (iVar7 = fn_82881B18(uVar15), iVar7 == 0)) {
        iVar7 = -1;
      }
      else {
        iVar7 = *(int *)(iVar7 + 8);
      }
      if ((iVar7 != (int)param_2) && (lbl_832129DC != (code *)0x0)) {
        (*lbl_832129DC)(uVar15);
      }
      fn_82881FC0(uVar15,param_2,0);
    }
  }
  return uVar15;
}

