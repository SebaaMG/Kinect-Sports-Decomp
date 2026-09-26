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
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82517978();
extern int fn_82672C20();
extern unsigned int iStack_38;
extern unsigned int uStack_50;


void fn_82288ED8(int param_1,longlong param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 uStack_50;
  int aiStack_4c [3];
  undefined1 auStack_40 [8];
  int iStack_38;
  undefined1 auStack_30 [8];
  char cStack_28;
  undefined1 auStack_20 [8];
  
  piVar1 = aiStack_4c;
  lVar3 = 2;
  do {
    piVar1[3] = 0;
    piVar1 = piVar1 + 4;
    *piVar1 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uStack_50 = 0;
  aiStack_4c[0] = 0;
  fn_82517978(&uStack_50,*(undefined4 *)(param_1 + 0x524),*(undefined4 *)(param_1 + 0x528),0);
  fn_82273CD8(auStack_40,5);
  iStack_38 = param_1 + 0x5a4;
  fn_82273CD8(auStack_30,2);
  cStack_28 = '\x01' - (param_2 == 0);
  fn_82672C20(uStack_50,0xffffffff821a9444,auStack_40,2);
  if (aiStack_4c[0] != 0) {
    fn_822315A0();
  }
  puVar2 = auStack_20;
  lVar3 = 1;
  do {
    puVar2 = puVar2 + -0x10;
    fn_82273C88(puVar2);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  return;
}

