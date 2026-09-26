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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82358FD8();
extern int fn_82672C20();
extern unsigned int lbl_82195528;
extern unsigned int uStack_98;
extern unsigned int uStack_b0;


void fn_82291E90(int param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  undefined1 auStack_60 [96];
  
  fn_82358FD8(*(undefined4 *)(param_1 + 0x1c),auStack_60,0x20,0xffffffff821aa224);
  puVar2 = (undefined4 *)((int)&uStack_b0 + 4);
  lVar4 = 4;
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  do {
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_82273CD8(auStack_a0,3);
  uStack_98 = lbl_82195528;
  fn_82273CD8(auStack_90,3);
  uStack_b0 = param_2 & 0xffffffff;
  dStack_88 = (double)uStack_b0;
  fn_82273CD8(auStack_80,3);
  uStack_b0 = param_3 & 0xffffffff;
  dStack_78 = (double)uStack_b0;
  fn_82273CD8(auStack_70,5);
  puStack_68 = auStack_60;
  fn_82672C20(*puVar1,0xffffffff821aba34,auStack_a0,4);
  puVar3 = auStack_60;
  lVar4 = 3;
  do {
    puVar3 = puVar3 + -0x10;
    fn_82273C88(puVar3);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

