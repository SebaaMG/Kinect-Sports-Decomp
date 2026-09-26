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
extern unsigned int *auStack_5c;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822806F0();
extern int fn_82288558();
extern int fn_822888F0();
extern int fn_8228A540();
extern int fn_8228AF60();
extern int fn_822C5B18();
extern int fn_82486958();
extern int fn_82517978();
extern int fn_82672C20();
extern unsigned int iStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_822897B8(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uStack_80;
  undefined4 uStack_78;
  int iStack_74;
  undefined1 auStack_70 [20];
  undefined4 auStack_5c [3];
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  double dStack_38;
  undefined1 auStack_30 [48];
  
  uVar1 = fn_822C5B18(auStack_70,param_1 + 0x680);
  fn_822806F0(*(undefined4 *)(param_1 + 0x69c),param_1 + 0x5e4,param_1 + 0x18,uVar1,0);
  fn_822888F0(&uStack_78,param_1);
  iVar2 = fn_82486958(*(undefined4 *)(param_1 + 0x11f0));
  puVar4 = auStack_5c;
  lVar6 = 2;
  do {
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
    *puVar4 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = 0;
  piVar3 = (int *)(param_1 + 0x6a8);
  lVar7 = 4;
  do {
    if (*piVar3 != 4) {
      lVar6 = lVar6 + 1;
    }
    piVar3 = piVar3 + 0x10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  fn_82273CD8(auStack_50,3);
  uStack_80 = lVar6 - 1U & 0xffffffff;
  dStack_48 = (double)uStack_80;
  fn_82273CD8(auStack_40,3);
  uStack_80 = (ulonglong)(iVar2 + 1);
  dStack_38 = (double)(longlong)uStack_80;
  fn_82672C20(uStack_78,0xffffffff821a9520,auStack_50,2);
  uStack_80 = 0;
  fn_82517978(&uStack_80,uStack_78,iStack_74,0);
  fn_82288558(param_1,&uStack_80);
  fn_8228A540(param_1,0xffffffff821a9534);
  fn_8228AF60(param_1,0xffffffff821a9558);
  puVar5 = auStack_30;
  lVar6 = 1;
  do {
    puVar5 = puVar5 + -0x10;
    fn_82273C88(puVar5);
    lVar6 = lVar6 + -1;
  } while (-1 < lVar6);
  if (iStack_74 != 0) {
    fn_822315A0(iStack_74);
  }
  return;
}

