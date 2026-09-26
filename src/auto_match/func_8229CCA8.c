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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int lbl_82195528;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_88;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_8229CCA8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_50 [80];
  
  uStack_d0 = 0;
  uStack_cc = 0;
  fn_82273CD8(&uStack_d0,3);
  uStack_c8 = lbl_82195528;
  fn_82672C20(*param_1,0xffffffff821ab0a4,&uStack_d0,1);
  fn_82273C88(&uStack_d0);
  puVar1 = &uStack_cc;
  lVar3 = 7;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82273CD8(auStack_c0,5);
  uStack_b8 = param_2;
  fn_82273CD8(auStack_b0,5);
  uStack_a8 = param_3;
  fn_82273CD8(auStack_a0,5);
  uStack_98 = param_4;
  fn_82273CD8(auStack_90,5);
  uStack_88 = param_5;
  fn_82273CD8(auStack_80,5);
  uStack_78 = param_6;
  fn_82273CD8(auStack_70,5);
  uStack_68 = param_7;
  fn_82273CD8(auStack_60,5);
  uStack_58 = param_8;
  fn_82672C20(*param_1,0xffffffff821ab080,auStack_c0,7);
  puVar2 = auStack_50;
  lVar3 = 6;
  do {
    puVar2 = puVar2 + -0x10;
    fn_82273C88(puVar2);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  return;
}

