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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_78;


void fn_8229E540(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined1 uVar7;
  undefined1 *puVar6;
  longlong lVar8;
  undefined4 auStack_8c [3];
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  undefined1 auStack_30 [48];
  
  puVar4 = auStack_8c;
  lVar8 = 5;
  uVar7 = 0;
  do {
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
    *puVar4 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar1 = *(undefined4 *)(param_1 + 8);
  fn_82273CD8(auStack_80,5);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uStack_78 = uVar1;
  fn_82273CD8(auStack_70,5);
  if (*(short **)(param_1 + 0x10) != (short *)0x0) {
    uVar5 = 1;
    if (**(short **)(param_1 + 0x10) != 0) goto LAB_8229e5b8;
  }
  uVar5 = 0;
LAB_8229e5b8:
  uStack_68 = uVar2;
  fn_82273CD8(auStack_60,2);
  if ((*(short **)(param_1 + 0x14) != (short *)0x0) && (**(short **)(param_1 + 0x14) != 0)) {
    uVar7 = 1;
  }
  uStack_58 = uVar5;
  fn_82273CD8(auStack_50,2);
  iVar3 = *(int *)(param_1 + 4);
  uStack_48 = uVar7;
  fn_82273CD8(auStack_40,2);
  uStack_38 = iVar3 == 1;
  fn_82672C20(*param_2,0xffffffff821ab52c,auStack_80,5);
  puVar6 = auStack_30;
  lVar8 = 4;
  do {
    puVar6 = puVar6 + -0x10;
    fn_82273C88(puVar6);
    lVar8 = lVar8 + -1;
  } while (-1 < lVar8);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

