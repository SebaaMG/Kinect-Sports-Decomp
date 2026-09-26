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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826828D8();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_8275BB38();
extern unsigned int iStack_30;
extern unsigned int iStack_38;
extern unsigned int iStack_84;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


void fn_8275C568(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int aiStack_90 [2];
  int *piStack_88;
  int iStack_84;
  byte bStack_80;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined **ppuStack_50;
  undefined1 *puStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  
  piVar1 = (int *)fn_8275BB38();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x5c))();
    auStack_70[0] = 0;
    fn_82681728(aiStack_90,(ulonglong)*(uint *)(iVar2 + 0x78) + 0x254,0xffffffff820147bc);
    piVar1 = (int *)(param_1 + 0x10);
    cVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,iVar2 + 0x78,aiStack_90,auStack_70);
    lVar4 = (ulonglong)*(uint *)(aiStack_90[0] + 8) - 1;
    *(int *)(aiStack_90[0] + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(aiStack_90[0]);
    }
    if (cVar3 != '\0') {
      fn_82696B20(&piStack_88,auStack_70,iVar2);
      auStack_60[0] = 0;
      puStack_4c = auStack_60;
      ppuStack_50 = &lbl_8200579C;
      uStack_3c = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_34 = 0;
      iStack_30 = (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc) >> 4) + *(int *)(iVar2 + 0x1c) * 0x20
                  + -0x20;
      piStack_48 = piVar1;
      iStack_38 = iVar2;
      (**(code **)(*piStack_88 + 0x28))(piStack_88,&ppuStack_50,iStack_84,0);
      fn_826828D8(&ppuStack_50);
      fn_82696330(auStack_60);
      if (((bStack_80 & 2) == 0) && (piStack_88 != (int *)0x0)) {
        fn_826824B0();
      }
      piStack_88 = (int *)0x0;
      if (((bStack_80 & 1) == 0) && (iStack_84 != 0)) {
        fn_826824B0();
      }
      iStack_84 = 0;
    }
    fn_82696330(auStack_70);
  }
  return;
}

