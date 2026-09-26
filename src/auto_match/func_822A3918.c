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
extern unsigned int *auStack_40;
extern unsigned int *auStack_e0;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82517978();
extern int fn_82672C20();
extern int fn_82672F30();
extern unsigned int uStack_f0;


void fn_822A3918(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined4 uStack_f0;
  int aiStack_ec [3];
  undefined1 auStack_e0 [160];
  undefined1 auStack_40 [64];
  
  piVar2 = aiStack_ec;
  lVar4 = 10;
  do {
    piVar2[3] = 0;
    piVar2 = piVar2 + 4;
    *piVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = auStack_e0;
  piVar2 = (int *)(param_2 + -4);
  lVar4 = 10;
  do {
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
    fn_82273CD8(puVar3,2);
    puVar3[8] = iVar1 == 1;
    lVar4 = lVar4 + -1;
    puVar3 = puVar3 + 0x10;
  } while (lVar4 != 0);
  uStack_f0 = 0;
  aiStack_ec[0] = 0;
  fn_82517978(&uStack_f0,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
  fn_82672F30(uStack_f0,0xffffffff821ac068,0,auStack_e0,10,1);
  if (aiStack_ec[0] != 0) {
    fn_822315A0();
  }
  uStack_f0 = 0;
  aiStack_ec[0] = 0;
  fn_82517978(&uStack_f0,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
  fn_82672C20(uStack_f0,0xffffffff821ac088,0,0);
  if (aiStack_ec[0] != 0) {
    fn_822315A0();
  }
  puVar3 = auStack_40;
  lVar4 = 9;
  do {
    puVar3 = puVar3 + -0x10;
    fn_82273C88(puVar3);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

