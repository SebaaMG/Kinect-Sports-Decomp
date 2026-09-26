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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822F9EC8();
extern int fn_822F9F88();
extern int fn_82365BD8();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int lbl_821CC160;


int * fn_822F9750(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  fn_82365BD8(param_1 + 3,param_5);
  param_1[5] = 7;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 1;
  iVar1 = lbl_821CC160;
  piVar5 = param_1 + 7;
  param_1[8] = lbl_821CC160;
  param_1[9] = iVar1;
  param_1[10] = iVar1;
  if (*(int *)(*param_1 + 0x178) == 1) {
    piVar4 = (int *)fn_822F9EC8(auStack_50);
    iVar1 = piVar4[1];
    iVar2 = *piVar4;
    *piVar4 = 0;
    piVar4[1] = 0;
    iVar3 = *piVar5;
    *piVar5 = iVar1;
    param_1[6] = iVar2;
    iStack_44 = iStack_4c;
    if (iVar3 != 0) {
      fn_822315A0();
      iStack_44 = iStack_4c;
    }
  }
  else {
    param_1[5] = 2;
    piVar4 = (int *)fn_822F9F88(auStack_48,*param_1,param_1[1],param_1[2],param_1 + 3);
    iVar1 = piVar4[1];
    piVar4[1] = 0;
    iVar2 = *piVar4;
    *piVar4 = 0;
    iVar3 = *piVar5;
    *piVar5 = iVar1;
    param_1[6] = iVar2;
    if (iVar3 != 0) {
      fn_822315A0();
    }
  }
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_5 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

