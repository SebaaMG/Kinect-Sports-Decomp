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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82246748();
extern int fn_82248B90();
extern int fn_8224E928();
extern int fn_8224ED20();
extern int fn_8228E578();
extern int fn_8229E090();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82522588();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828A12E8();
extern int fn_828AAF70();
extern int fn_828AE818();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int lbl_83297810;


void fn_82354128(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar6;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined4 *puStack_2c;
  
  if (param_1 == 0) {
    fn_8229E090(*param_2,0,1);
    *param_2 = 0;
    if (param_2[0xfd] != 0) {
      uVar2 = fn_828A12E8(*(undefined4 *)(param_2[0xfd] + 0x10));
      uVar2 = fn_8288F948(uVar2,1);
      fn_8224E928(auStack_30,uVar2);
      puStack_50 = (undefined4 *)*puStack_2c;
      while (puStack_50 != puStack_2c) {
        piVar5 = (int *)puStack_50[5];
        cVar6 = fn_8288B760(piVar5);
        if (cVar6 != '\0') {
          param_2[0xec] = 1;
          lVar3 = (**(code **)(*piVar5 + 8))(piVar5);
          fn_828AAF70(lVar3 + 0x2e8,1);
        }
        fn_82248B90(&puStack_50);
      }
      fn_8224ED20(&puStack_50,auStack_30,*puStack_2c);
      fn_8265CA20(puStack_2c);
    }
  }
  else if (param_1 == 1) {
    fn_8229E090(*param_2,0,1);
    *param_2 = 0;
    iVar4 = lbl_83297810;
    if (lbl_83297810 == 0) {
      iVar4 = fn_82511928();
    }
    fn_825138E0(&iStack_48,iVar4,1);
    if (iStack_48 != 0) {
      fn_82522588(&puStack_50,&iStack_48);
      fn_82246748(puStack_50,0);
      if (iStack_4c != 0) {
        fn_822315A0();
      }
    }
    iVar4 = lbl_83297810;
    if (lbl_83297810 == 0) {
      iVar4 = fn_82511928();
    }
    puStack_50 = (undefined4 *)**(int **)(iVar4 + 8);
    while( true ) {
      iVar4 = lbl_83297810;
      if (lbl_83297810 == 0) {
        iVar4 = fn_82511928();
      }
      if (puStack_50 == *(undefined4 **)(iVar4 + 8)) break;
      piVar5 = (int *)fn_8228E578(auStack_40,&puStack_50);
      uVar1 = *(uint *)(*piVar5 + 4);
      lVar3 = (ulonglong)uVar1 - 1;
      if (iStack_3c != 0) {
        fn_822315A0(iStack_3c);
      }
      if ((lVar3 - (((ulonglong)uVar1 - 2) + (ulonglong)(lVar3 == 0)) & 0xff) != 0) {
        piVar5 = (int *)fn_8228E578(auStack_38,&puStack_50);
        fn_828AE818(*(undefined4 *)(*piVar5 + 8),0);
        if (iStack_34 != 0) {
          fn_822315A0();
        }
      }
      fn_82248B90(&puStack_50);
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
  }
  else if (param_1 == 2) {
    *param_2 = 0;
  }
  return;
}

