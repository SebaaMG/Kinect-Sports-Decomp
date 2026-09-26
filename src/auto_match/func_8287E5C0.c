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
extern int fn_825AC9E8();
extern int fn_8287CBD0();
extern int fn_8287D048();
extern int fn_8287D470();
extern int fn_8287D760();
extern unsigned int iStack_48;
extern unsigned int iStack_58;
extern unsigned int iStack_68;
extern unsigned int uStack_4c;
extern unsigned int uStack_5c;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_8287E5C0(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int *piStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int *piStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined1 auStack_40 [64];
  
  uVar1 = param_1[4];
  uVar6 = *(int *)(param_2 + 8) - param_1[3];
  if (*(int *)(param_3 + 8) != *(int *)(param_4 + 8)) {
    if (uVar1 >> 1 < uVar6) {
      do {
        uVar2 = fn_8287CBD0(param_3);
        fn_825AC9E8(param_1,uVar2);
        iVar4 = *(int *)(param_3 + 8) + 1;
        *(int *)(param_3 + 8) = iVar4;
      } while (iVar4 != *(int *)(param_4 + 8));
      piStack_50 = (int *)*param_1;
      iStack_68 = param_1[3];
      uStack_4c = 0;
      piVar5 = (int *)0x0;
      iStack_48 = iStack_68 + param_1[4];
      if ((piStack_50 != (int *)0x0) && ((undefined4 *)*piStack_50 != (undefined4 *)0x0)) {
        piVar5 = *(int **)*piStack_50;
      }
      iStack_58 = iStack_68 + uVar1;
      piStack_60 = (int *)0x0;
      uStack_5c = 0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        piStack_60 = *(int **)*piVar5;
      }
      piVar5 = (int *)0x0;
      if ((piStack_50 != (int *)0x0) && ((undefined4 *)*piStack_50 != (undefined4 *)0x0)) {
        piVar5 = *(int **)*piStack_50;
      }
      iStack_68 = iStack_68 + uVar6;
      uStack_70 = 0;
      uStack_6c = 0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        uStack_70 = *(undefined4 *)*piVar5;
      }
      fn_8287D760(auStack_40,&uStack_70,&piStack_60,&piStack_50);
    }
    else {
      do {
        uVar2 = fn_8287CBD0(param_3);
        fn_8287D048(param_1,uVar2);
        iVar4 = *(int *)(param_3 + 8) + 1;
        *(int *)(param_3 + 8) = iVar4;
      } while (iVar4 != *(int *)(param_4 + 8));
      piStack_60 = (int *)*param_1;
      iStack_58 = param_1[3];
      piVar5 = (int *)0x0;
      iVar4 = param_1[4] - uVar1;
      if ((piStack_60 != (int *)0x0) && ((undefined4 *)*piStack_60 != (undefined4 *)0x0)) {
        piVar5 = *(int **)*piStack_60;
      }
      iStack_68 = iStack_58 + iVar4;
      uStack_70 = 0;
      uStack_6c = 0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        uStack_70 = *(undefined4 *)*piVar5;
      }
      uStack_5c = 0;
      fn_8287D470(&piStack_60,&uStack_70);
      piStack_50 = (int *)*param_1;
      iStack_48 = param_1[3];
      piVar5 = (int *)0x0;
      if ((piStack_50 != (int *)0x0) && ((undefined4 *)*piStack_50 != (undefined4 *)0x0)) {
        piVar5 = *(int **)*piStack_50;
      }
      piVar3 = (int *)0x0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        piVar3 = *(int **)*piVar5;
      }
      piVar5 = (int *)0x0;
      if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
        piVar5 = *(int **)*piVar3;
      }
      iStack_68 = iStack_48 + iVar4 + uVar6;
      uStack_70 = 0;
      uStack_6c = 0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        uStack_70 = *(undefined4 *)*piVar5;
      }
      piVar5 = (int *)0x0;
      if ((piStack_50 != (int *)0x0) && ((undefined4 *)*piStack_50 != (undefined4 *)0x0)) {
        piVar5 = *(int **)*piStack_50;
      }
      iStack_58 = iStack_48 + iVar4;
      piStack_60 = (int *)0x0;
      uStack_5c = 0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        piStack_60 = *(int **)*piVar5;
      }
      uStack_4c = 0;
      fn_8287D760(auStack_40,&piStack_50,&piStack_60,&uStack_70);
    }
  }
  return;
}

