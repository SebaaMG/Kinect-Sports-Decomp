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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_80;


void fn_8229F758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int in_r7;
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 auStack_30 [24];
  
  puVar1 = (undefined4 *)((int)&uStack_80 + 4);
  lVar3 = 4;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82273CD8(auStack_70,3);
  uStack_80 = (longlong)(in_r7 + 1);
  dStack_68 = (double)uStack_80;
  fn_82273CD8(auStack_60,3);
  uStack_58 = param_1;
  fn_82273CD8(auStack_50,3);
  uStack_48 = param_2;
  fn_82273CD8(auStack_40,3);
  uStack_38 = param_3;
  fn_82672C20(*param_4,0xffffffff821ab818,auStack_70,4);
  puVar2 = auStack_30;
  lVar3 = 3;
  do {
    puVar2 = puVar2 + -0x10;
    fn_82273C88(puVar2);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  return;
}

