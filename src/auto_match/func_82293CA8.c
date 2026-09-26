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
extern unsigned int *auStack_1030;
extern unsigned int *auStack_1830;
extern unsigned int *auStack_1840;
extern unsigned int *auStack_1850;
extern unsigned int *auStack_1860;
extern unsigned int *auStack_830;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229D5C0();
extern int fn_822A0678();
extern int fn_82358FD8();
extern int fn_82517978();
extern int fn_82528EE0();
extern int fn_82672C20();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_82193A10;
extern unsigned int lbl_82193A14;
extern unsigned int uStack_1870;


void fn_82293CA8(double param_1,int param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined4 uStack_1870;
  int aiStack_186c [3];
  undefined1 auStack_1860 [8];
  undefined1 *puStack_1858;
  undefined1 auStack_1850 [8];
  undefined1 *puStack_1848;
  undefined1 auStack_1840 [8];
  undefined1 *puStack_1838;
  undefined1 auStack_1830 [2048];
  undefined1 auStack_1030 [2048];
  undefined1 auStack_830 [2096];
  
  if ((param_3 & 0xffffffff) == 1) {
    fn_82358FD8(*(undefined4 *)(param_2 + 0x1c),auStack_1830,0x400,
                      lbl_82193A10);
    fn_8229D5C0(param_1,*(undefined4 *)(param_2 + 0x14),param_4,auStack_1830,
                      0xffffffff820e975c,param_5);
  }
  else {
    fn_82358FD8(*(undefined4 *)(param_2 + 0x1c),auStack_1030,0x400,
                      lbl_82193A14);
    fn_82528EE0(auStack_830,0x400,auStack_1030,param_3);
    iVar1 = *(int *)(param_2 + 0x14);
    if (*(int *)(iVar1 + 0x14) == 0) {
      piVar2 = aiStack_186c;
      lVar4 = 3;
      do {
        piVar2[3] = 0;
        piVar2 = piVar2 + 4;
        *piVar2 = 0;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      fn_82273CD8(auStack_1860,5);
      puStack_1858 = &lbl_820E975C;
      fn_82273CD8(auStack_1850,5);
      puStack_1848 = auStack_830;
      fn_82273CD8(auStack_1840,5);
      puStack_1838 = &lbl_820E975C;
      uStack_1870 = 0;
      aiStack_186c[0] = 0;
      fn_82517978(&uStack_1870,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),0);
      fn_82672C20(uStack_1870,0xffffffff821ab210,auStack_1860,3);
      if (aiStack_186c[0] != 0) {
        fn_822315A0();
      }
      fn_822A0678(iVar1);
      *(float *)(iVar1 + 0x10) = (float)param_1;
      puVar3 = auStack_1830;
      *(undefined4 *)(iVar1 + 0xc) = 1;
      lVar4 = 2;
      do {
        puVar3 = puVar3 + -0x10;
        fn_82273C88(puVar3);
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
  }
  return;
}

