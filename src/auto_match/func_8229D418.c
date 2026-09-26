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
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822A0678();
extern int fn_82517978();
extern int fn_82672C20();
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_70;


void fn_8229D418(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 uStack_70;
  int aiStack_6c [3];
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  piVar1 = aiStack_6c;
  lVar3 = 3;
  do {
    piVar1[3] = 0;
    piVar1 = piVar1 + 4;
    *piVar1 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82273CD8(auStack_60,5);
  uStack_58 = param_2;
  fn_82273CD8(auStack_50,5);
  uStack_48 = param_3;
  fn_82273CD8(auStack_40,0);
  fn_822A0678(param_1);
  uStack_70 = 0;
  aiStack_6c[0] = 0;
  fn_82517978(&uStack_70,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
  fn_82672C20(uStack_70,0xffffffff821ab1a0,auStack_60,3);
  if (aiStack_6c[0] != 0) {
    fn_822315A0();
  }
  puVar2 = auStack_30;
  lVar3 = 2;
  do {
    puVar2 = puVar2 + -0x10;
    fn_82273C88(puVar2);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  return;
}

