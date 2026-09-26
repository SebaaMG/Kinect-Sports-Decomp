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
extern unsigned int *auStack_840;
extern unsigned int *auStack_850;
extern unsigned int *auStack_860;
extern unsigned int *auStack_870;
extern unsigned int *auStack_880;
extern unsigned int *auStack_890;
extern unsigned int *auStack_898;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229AE10();
extern int fn_82528EE0();
extern int fn_82672C20();
extern unsigned int iStack_894;
extern unsigned int lbl_821AA62C;
extern unsigned int lbl_821AA630;
extern unsigned int lbl_821AA634;
extern unsigned int uStack_8a0;


void fn_82293670(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  longlong param_6,uint param_7)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uStack_8a0;
  undefined1 auStack_898 [4];
  int iStack_894;
  undefined1 auStack_890 [8];
  double dStack_888;
  undefined1 auStack_880 [8];
  double dStack_878;
  undefined1 auStack_870 [8];
  double dStack_868;
  undefined1 auStack_860 [8];
  undefined *puStack_858;
  undefined1 auStack_850 [8];
  char cStack_848;
  undefined1 auStack_840 [2112];
  
  puVar1 = (undefined4 *)((int)&uStack_8a0 + 4);
  lVar3 = 5;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82273CD8(auStack_890,3);
  uStack_8a0 = (longlong)param_2;
  dStack_888 = (double)uStack_8a0;
  fn_82273CD8(auStack_880,3);
  uStack_8a0 = (longlong)param_3;
  dStack_878 = (double)uStack_8a0;
  fn_82273CD8(auStack_870,3);
  uStack_8a0 = (longlong)param_4;
  dStack_868 = (double)uStack_8a0;
  fn_82273CD8(auStack_850,2);
  cStack_848 = '\x01' - (param_6 == 0);
  if (param_7 == 0) {
    if ((int)param_5 == 0) {
      fn_82273CD8(auStack_860,4);
      puStack_858 = &lbl_821AA634;
    }
    else {
      fn_82528EE0(auStack_840,0x400,0xffffffff821aa638,param_5);
      fn_82273CD8(auStack_860,5);
      puStack_858 = auStack_840;
    }
  }
  else if (param_7 == 1) {
    fn_82273CD8(auStack_860,4);
    puStack_858 = &lbl_821AA630;
  }
  else if (param_7 < 3) {
    fn_82273CD8(auStack_860,4);
    puStack_858 = &lbl_821AA62C;
  }
  puVar1 = (undefined4 *)fn_8229AE10(auStack_898,param_1);
  fn_82672C20(*puVar1,0xffffffff821aa640,auStack_890,5);
  if (iStack_894 != 0) {
    fn_822315A0();
  }
  puVar2 = auStack_840;
  lVar3 = 4;
  do {
    puVar2 = puVar2 + -0x10;
    fn_82273C88(puVar2);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  return;
}

