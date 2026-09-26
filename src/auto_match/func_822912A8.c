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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int uStack_28;
extern unsigned int uStack_38;
extern unsigned int uStack_48;


void fn_822912A8(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_60 [4];
  int aiStack_5c [3];
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  undefined1 auStack_20 [8];
  
  piVar2 = aiStack_5c;
  lVar4 = 3;
  do {
    piVar2[3] = 0;
    piVar2 = piVar2 + 4;
    *piVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_82273CD8(auStack_50,2);
  uStack_48 = param_2 == 0;
  fn_82273CD8(auStack_40,2);
  uStack_38 = param_2 == 1;
  fn_82273CD8(auStack_30,2);
  uStack_28 = param_2 == 2;
  puVar1 = (undefined4 *)fn_82279C58(auStack_60,param_1);
  fn_82672C20(*puVar1,0xffffffff821a9ce0,auStack_50,3);
  if (aiStack_5c[0] != 0) {
    fn_822315A0();
  }
  puVar3 = auStack_20;
  lVar4 = 2;
  do {
    puVar3 = puVar3 + -0x10;
    fn_82273C88(puVar3);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

