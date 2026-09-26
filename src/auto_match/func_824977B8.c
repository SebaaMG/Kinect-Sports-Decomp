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
extern int fn_8248F890();
extern int fn_824983A0();
extern int fn_82F622A8();
extern unsigned int lbl_821BEBB0;


undefined8 fn_824977B8(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  iVar1 = **(int **)(param_2 + 4);
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)fn_8248F890(0x30);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_3;
    piVar3[3] = (int)&lbl_821BEBB0;
    piVar5 = param_3 + 3;
    piVar3[4] = param_3[2];
    lVar6 = 5;
    piVar3[3] = (int)&lbl_821BEBB0;
    piVar4 = piVar3 + 5;
    piVar3[5] = param_3[3];
    do {
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
      *piVar4 = *piVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    piVar3[0xb] = param_3[9];
  }
  if (*(int *)(param_2 + 8) == 0x6666665) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff8219852c);
  }
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *(int **)(iVar1 + 4) = piVar3;
  *(int **)piVar3[1] = piVar3;
  fn_824983A0(param_1,param_2,(ulonglong)**(uint **)(param_2 + 4) + 8);
  return param_1;
}

