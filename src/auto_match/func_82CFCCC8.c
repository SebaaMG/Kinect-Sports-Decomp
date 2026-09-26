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
extern int fn_82CE5410();
extern int fn_82F68CC0();


int * fn_82CFCCC8(int *param_1,undefined4 *param_2,char param_3,undefined1 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  iVar2 = fn_82CE5410();
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),uVar1);
  fn_82F68CC0(iVar2,*param_2,param_2[1]);
  iVar3 = 0;
  if (0 < (longlong)((ulonglong)(uint)param_2[1] - 1)) {
    do {
      if ((*(char *)(iVar3 + iVar2) == param_3) &&
         (*(undefined1 *)(iVar3 + iVar2) = param_4, param_5 == 0)) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2[1] + -1);
  }
  iVar3 = param_2[1];
  *param_1 = iVar2;
  *(undefined1 *)(iVar2 + iVar3 + -1) = 0;
  iVar2 = param_2[1];
  param_1[1] = iVar2;
  param_1[2] = iVar2;
  return param_1;
}

