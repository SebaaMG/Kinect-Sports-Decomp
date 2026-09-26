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
extern int fn_822ABA88();
extern int fn_822CEE40();
extern int fn_822CEFA0();
extern int fn_823737B8();
extern int fn_823815D0();
extern int fn_82381948();
extern unsigned int lbl_821CC160;


void fn_82381120(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double extraout_f1;
  double extraout_f1_00;
  double dVar5;
  
  if (param_3 != (int)param_5) {
    fn_823815D0(param_1,param_3,0xffffffffffffffff,2);
    iVar2 = fn_823737B8(*(undefined4 *)(param_1 + 4),param_5);
    if (iVar2 != 0) {
      return;
    }
    fn_823815D0(param_1,param_5,param_6,4);
    return;
  }
  piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + param_3 * 4);
  iVar2 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_4);
  iVar3 = fn_822CEE40();
  dVar5 = extraout_f1;
  if ((iVar3 != 0) && (iVar3 = fn_822CEFA0(), dVar5 = extraout_f1_00, iVar3 != 0)) {
    uVar4 = 9;
    goto LAB_823811bc;
  }
  if (*(int *)(iVar2 + 0x2a4) == 0) {
    if (dVar5 < (double)lbl_821CC160) goto LAB_823811fc;
  }
  else if ((double)lbl_821CC160 < dVar5) {
LAB_823811fc:
    uVar4 = 10;
    goto LAB_823811bc;
  }
  uVar4 = 8;
LAB_823811bc:
  fn_823815D0(param_1,param_3,param_6,uVar4);
  fn_82381948(param_1,param_3 == 0,param_3,param_4,param_2 == 4);
  return;
}

