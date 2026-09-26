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
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_822E83E0();
extern int fn_8240DEC0();
extern int fn_826035B0();
extern int fn_82CE6010();
extern int fn_82D82E28();
extern int fn_82D85148();
extern int fn_82D89BD8();
extern int fn_82D8BBA0();
extern int fn_82D8BBE8();
extern int fn_82D8BC78();
extern int fn_82D8CD68();
extern unsigned int lbl_82193CC0;


bool fn_826044A0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [64];
  
  iVar3 = param_1 + 0x20;
  iVar5 = param_1 + 0xa0;
  puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  fn_82CE6010(auStack_b0,iVar5);
  puVar2 = (undefined4 *)(param_1 + 0x130U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  fn_826035B0((double)lbl_82193CC0,auStack_b0,auStack_100);
  fn_82D8CD68(*(undefined4 *)(param_1 + 0x140),auStack_d0);
  puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  fn_82CE6010(auStack_70,iVar5);
  iVar1 = *(int *)(*(int *)(param_1 + 0x140) + 0xd4);
  if (*(int *)(param_1 + 0x10c) == 0) {
LAB_82604564:
    if (*(int *)(param_1 + 0x110) != 0) {
      fn_82D8BBE8(*(undefined4 *)(param_1 + 0x18),iVar5);
      goto LAB_8260458c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x110) == 0) {
      puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      uVar6 = *(undefined4 *)(param_1 + 0x18);
      puVar4 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar2;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      fn_82D8BBA0(uVar6,auStack_e0);
      goto LAB_8260458c;
    }
    if (*(int *)(param_1 + 0x10c) == 0) goto LAB_82604564;
  }
  fn_82D8BC78(*(undefined4 *)(param_1 + 0x18),auStack_70);
LAB_8260458c:
  if (*(int *)(param_1 + 0x108) != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    puVar2 = (undefined4 *)(param_1 + 0xb0U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar4 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar2;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    fn_8240DEC0(uVar6,auStack_f0);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    puVar2 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar4 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar2;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    fn_822E83E0(uVar6,auStack_110);
  }
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x140) + 8) != 0) {
      fn_82D82E28();
    }
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c) = *(undefined4 *)(param_1 + 0x11c);
    fn_82D85148(*(undefined4 *)(*(int *)(param_1 + 0x18) + 8),*(int *)(param_1 + 0x18),0,1);
    fn_82D89BD8(*(undefined4 *)(param_1 + 0x18));
  }
  return iVar1 != 0;
}

