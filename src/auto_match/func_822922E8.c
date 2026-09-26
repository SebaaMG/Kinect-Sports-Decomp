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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_50;


void fn_822922E8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uStack_50;
  undefined1 auStack_40 [8];
  double dStack_38;
  undefined1 auStack_30 [8];
  double dStack_28;
  undefined1 auStack_20 [32];
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  puVar2 = (undefined4 *)((int)&uStack_50 + 4);
  lVar4 = 2;
  do {
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_82273CD8(auStack_40,3);
  uStack_50 = (longlong)(param_2 + 1);
  dStack_38 = (double)uStack_50;
  fn_82273CD8(auStack_30,3);
  uStack_50 = (longlong)param_3;
  dStack_28 = (double)uStack_50;
  fn_82672C20(*puVar1,0xffffffff821ab994,auStack_40,2);
  puVar3 = auStack_20;
  lVar4 = 1;
  do {
    puVar3 = puVar3 + -0x10;
    fn_82273C88(puVar3);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

