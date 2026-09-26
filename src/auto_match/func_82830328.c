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
extern unsigned int *auStack_178;
extern int fn_8259BDA8();
extern int fn_82829338();
extern int fn_82830D10();
extern int fn_82872898();
extern int fn_82F65390();
extern int fn_82F67F88();
extern int fn_82F6DCE0();


undefined8 fn_82830328(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  int *piVar9;
  undefined8 uVar8;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  longlong lVar15;
  int *piStack_180;
  int *piStack_17c;
  uint auStack_178 [2];
  int aiStack_170 [92];
  
  uVar14 = 0;
  piVar3 = *(int **)(*(int *)(param_2 + 0x2f0) + 4);
  piVar4 = *(int **)(*(int *)(param_1 + 0x2f0) + 4);
  piVar6 = (int *)*piVar3;
  do {
    if (piVar6 == piVar3) {
      return uVar14;
    }
    pcVar5 = (char *)piVar6[3];
    pcVar13 = "pool";
    pcVar12 = pcVar5;
    do {
      cVar1 = *pcVar12;
      cVar2 = *pcVar13;
      if (cVar1 == '\0') break;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 == cVar2);
    piStack_17c = piVar6;
    if ((cVar1 != cVar2) &&
       (piVar9 = (int *)fn_82829338(*(undefined4 *)(param_1 + 0x2f0),piVar6 + 3),
       piVar9 != piVar4)) {
      pcVar12 = (char *)piVar9[3];
      pcVar13 = (char *)piVar6[3];
      pcVar11 = pcVar12;
      do {
        cVar1 = *pcVar13;
        cVar2 = *pcVar11;
        if (cVar1 == '\0') break;
        pcVar13 = pcVar13 + 1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        lVar15 = 1;
        fn_82830D10(aiStack_170,0xffffffff8201f058,pcVar12);
        piStack_180 = aiStack_170;
        piStack_180 = (int *)fn_82829338(*(undefined4 *)(param_1 + 0x2f0),&piStack_180);
        fn_82872898(&piStack_180);
        piVar7 = piStack_180;
        if (piVar9 != piStack_180) {
          fn_82830D10(aiStack_170,0xffffffff8201f060,pcVar12);
          fn_82F67F88(piVar7[3],aiStack_170,auStack_178);
          lVar15 = (ulonglong)auStack_178[0] + 1;
        }
        fn_82F6DCE0(pcVar5,0xff,0xffffffff8201f068,pcVar12,lVar15);
        pcVar5[0xff] = '\0';
        uVar8 = fn_82830D10(aiStack_170,0xffffffff8201f070,pcVar12);
        piStack_180 = piVar6;
        while ((fn_8259BDA8(&piStack_180), piVar6 = piStack_180, piStack_180 != piVar3 &&
               (iVar10 = fn_82F65390(piStack_180[3],aiStack_170,uVar8), iVar10 == 0))) {
          lVar15 = lVar15 + 1;
          uVar8 = fn_82F6DCE0(piVar6[3],0xff,0xffffffff8201f074,pcVar12,lVar15);
          *(undefined1 *)(piVar6[3] + 0xff) = 0;
        }
        if ((int)uVar8 < 1) {
          return 0xffffffffffffffff;
        }
        if ((int)uVar14 == 0) {
          uVar14 = 1;
        }
      }
    }
    fn_8259BDA8(&piStack_17c);
    piVar6 = piStack_17c;
  } while( true );
}

