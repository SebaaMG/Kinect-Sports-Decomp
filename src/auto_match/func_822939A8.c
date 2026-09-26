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
extern unsigned int *auStack_28f0;
extern unsigned int *auStack_2908;
extern unsigned int *auStack_2910;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229AE10();
extern int fn_82526C70();
extern int fn_82672C20();
extern int fn_82672F30();
extern unsigned int iStack_2904;
extern unsigned int iStack_290c;
extern unsigned int lbl_82196582;
extern unsigned int uStack_2900;
extern unsigned int uStack_291c;
extern unsigned int uStack_2920;


void fn_822939A8(undefined8 param_1,int param_2,short *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  longlong lVar7;
  undefined4 uStack_2920;
  undefined4 uStack_291c;
  double dStack_2918;
  undefined1 auStack_2910 [4];
  int iStack_290c;
  undefined1 auStack_2908 [4];
  int iStack_2904;
  undefined8 uStack_2900;
  undefined1 auStack_28f0 [160];
  char acStack_2850 [10320];
  
  uStack_2920 = 0;
  uStack_291c = 0;
  fn_82273CD8(&uStack_2920,3);
  uStack_2900 = (longlong)param_2;
  puVar2 = (undefined4 *)((int)&uStack_2900 + 4);
  dStack_2918 = (double)uStack_2900;
  lVar7 = 10;
  do {
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  pcVar6 = acStack_2850;
  iVar4 = (int)&lbl_82196582 - (int)acStack_2850;
  puVar5 = auStack_28f0;
  lVar7 = 10;
  do {
    if (*param_3 == -1) {
      pcVar3 = pcVar6;
      do {
        if (pcVar6 + 0x400 <= pcVar3) break;
        cVar1 = pcVar3[iVar4];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar6 + 0x400) {
        pcVar3[-1] = '\0';
      }
    }
    else {
      fn_82526C70(pcVar6,0x400,0xffffffff821aa66c);
    }
    fn_82273CD8(puVar5,4);
    *(char **)(puVar5 + 8) = pcVar6;
    lVar7 = lVar7 + -1;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 0x10;
    iVar4 = iVar4 + -0x400;
    pcVar6 = pcVar6 + 0x400;
    if (lVar7 == 0) {
      puVar2 = (undefined4 *)fn_8229AE10(auStack_2908,param_1);
      fn_82672F30(*puVar2,0xffffffff821aa670,0,auStack_28f0,10,1);
      if (iStack_2904 != 0) {
        fn_822315A0();
      }
      puVar2 = (undefined4 *)fn_8229AE10(auStack_2910,param_1);
      fn_82672C20(*puVar2,0xffffffff821aa684,&uStack_2920,1);
      if (iStack_290c != 0) {
        fn_822315A0();
      }
      pcVar6 = acStack_2850;
      lVar7 = 9;
      do {
        pcVar6 = pcVar6 + -0x10;
        fn_82273C88(pcVar6);
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      fn_82273C88(&uStack_2920);
      return;
    }
  } while( true );
}

