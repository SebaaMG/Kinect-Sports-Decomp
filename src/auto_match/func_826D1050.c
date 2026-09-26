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
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_8269A858();
extern int fn_826B0F10();
extern int fn_826BD928();
extern int fn_826C3768();
extern int fn_826CECC8();
extern int fn_826F75B8();
extern unsigned int iStack_fc;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_93;
extern unsigned int uStack_94;
extern unsigned int uStack_95;
extern unsigned int uStack_96;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


/* WARNING: Removing unreachable block (ram,0x826d125c) */
/* WARNING: Removing unreachable block (ram,0x826d118c) */
/* WARNING: Removing unreachable block (ram,0x826d1354) */
/* WARNING: Removing unreachable block (ram,0x826d1270) */
/* WARNING: Removing unreachable block (ram,0x826d11a0) */
/* WARNING: Removing unreachable block (ram,0x826d1368) */

void fn_826D1050(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar6;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar7;
  int aiStack_120 [5];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint uStack_100;
  int iStack_fc;
  byte bStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(iVar1 + 0x78);
  bStack_f8 = 0;
  uStack_100 = 0;
  iStack_fc = 0;
  uVar3 = fn_826957D0(param_1,0);
  fn_82696D38(aiStack_120,uVar3,iVar1,0xffffffffffffffff,0);
  if (*(int *)(aiStack_120[0] + 0x10) != 0) {
    cVar6 = fn_826B0F10(uVar2,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,aiStack_120,
                              &uStack_100);
    if (cVar6 == '\0') {
      piVar4 = (int *)fn_826BD928(*(undefined4 *)(param_1 + 8));
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar4[1] + 1;
      }
      uStack_104 = (uint)(((U64)(uStack_104) >> 16) & 0xFFFF);
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar4[1] + 1;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_6c = 2;
      uStack_70 = 0;
      uStack_108 = 0xff;
      uStack_10c = 0;
      uStack_64 = 0;
      uStack_5c = 0;
      uStack_58 = 0xff;
      uStack_54 = uStack_104;
      uStack_34 = 0;
      piStack_68 = piVar4;
      uVar3 = (**(code **)(*piVar4 + 0x40))(piVar4);
      fn_826F75B8(&uStack_70,uVar3);
      puVar5 = &uStack_70;
    }
    else {
      piVar4 = (int *)fn_826BD928(*(undefined4 *)(param_1 + 8));
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar4[1] + 1;
      }
      lVar7 = (ulonglong)uStack_100 + 0x10;
      if ((ulonglong)uStack_100 == 0) {
        lVar7 = 0;
      }
      fn_8269A858(piVar4,lVar7);
      uStack_104 = (uint)(((U64)(uStack_104) >> 16) & 0xFFFF);
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar4[1] + 1;
      }
      uStack_b8 = 0;
      uStack_bc = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_cc = 0;
      uStack_d0 = 0;
      uStack_ec = 2;
      uStack_f0 = 0;
      uStack_108 = 0xff;
      uStack_10c = 0;
      uStack_e4 = 0;
      uStack_dc = 0;
      uStack_d8 = 0xff;
      uStack_d4 = uStack_104;
      uStack_b4 = 0;
      piStack_e8 = piVar4;
      uVar3 = (**(code **)(*piVar4 + 0x40))(piVar4);
      fn_826F75B8(&uStack_f0,uVar3);
      fn_826CECC8(&uStack_f0);
      piVar4[1] = piVar4[1] + 1;
      uStack_78 = 0;
      uStack_7c = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_8c = 0;
      uStack_90 = 0;
      uStack_93 = 0;
      uStack_94 = 0;
      uStack_95 = 0xff;
      uStack_96 = 0;
      uStack_98 = 0;
      uStack_9c = 0;
      uStack_a0 = 0;
      uStack_ac = 3;
      uStack_b0 = 0;
      uStack_a4 = 0;
      piStack_a8 = piVar4;
      fn_826C3768(&uStack_90,&uStack_100);
      uStack_74 = 0;
      uVar3 = (**(code **)(*piVar4 + 0x40))(piVar4);
      fn_826F75B8(&uStack_b0,uVar3);
      puVar5 = &uStack_b0;
    }
    fn_826CECC8(puVar5);
    fn_8267C498(piVar4);
  }
  lVar7 = (ulonglong)*(uint *)(aiStack_120[0] + 8) - 1;
  *(int *)(aiStack_120[0] + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(aiStack_120[0]);
  }
  if (((bStack_f8 & 2) == 0) && (uStack_100 != 0)) {
    fn_826824B0();
  }
  uStack_100 = 0;
  if (((bStack_f8 & 1) == 0) && (iStack_fc != 0)) {
    fn_826824B0();
  }
  return;
}

