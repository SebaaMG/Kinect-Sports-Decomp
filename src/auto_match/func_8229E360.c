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
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int uStack_28;
extern unsigned int uStack_38;


void fn_8229E360(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_50 [4];
  int aiStack_4c [3];
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined1 auStack_20 [32];
  
  piVar2 = aiStack_4c;
  lVar4 = 2;
  do {
    piVar2[3] = 0;
    piVar2 = piVar2 + 4;
    *piVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_82273CD8(auStack_40,5);
  uStack_38 = param_2;
  fn_82273CD8(auStack_30,5);
  uStack_28 = param_3;
  puVar1 = (undefined4 *)fn_82279C58(auStack_50,*param_1);
  fn_82672C20(*puVar1,0xffffffff821ab4f4,auStack_40,2);
  if (aiStack_4c[0] != 0) {
    fn_822315A0();
  }
  puVar3 = auStack_20;
  lVar4 = 1;
  do {
    puVar3 = puVar3 + -0x10;
    fn_82273C88(puVar3);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

