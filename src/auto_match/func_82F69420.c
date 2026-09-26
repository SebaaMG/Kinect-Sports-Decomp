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
extern int fn_82F80110();
extern int fn_82F80368();


void fn_82F69420(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_3 + 0xc) != 0) && (*(int *)(param_1 + 4) != 0)) {
    param_1 = *(int *)(*(int *)(param_1 + 4) + 4);
  }
  iVar1 = fn_82F80110(param_3,*param_2);
  iVar4 = *(int *)(param_3 + 0xc);
  if (iVar4 != 0) {
    iVar3 = iVar4 * 0x14;
    do {
      iVar5 = iVar3 + *(int *)(param_3 + 0x10);
      iVar6 = iVar5 + -0x14;
      if ((*(int *)(iVar5 + -0x10) < iVar1) && (iVar1 <= *(int *)(iVar5 + -0xc))) goto LAB_82f694a8;
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + -0x14;
    } while (iVar4 != 0);
  }
  iVar6 = 0;
LAB_82f694a8:
  if (iVar6 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = (ulonglong)*(uint *)(iVar6 + 4) + 1;
  }
  fn_82F80368(param_1,param_2,param_3,lVar2);
  return;
}

