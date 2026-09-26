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
extern int fn_82236200();
extern int fn_8289D8D0();
extern int fn_82F68CC0();


void fn_82245B30(int param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
  }
  if (iVar2 == 0) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
    }
    if (iVar2 == 0) {
      if (*(uint *)(param_1 + 0x10) < 5) {
        param_1 = param_1 + 0xc;
      }
      else {
        param_1 = *(int *)(param_1 + 0xc);
      }
      goto LAB_82245be0;
    }
  }
  uVar1 = fn_8289D8D0(*(undefined4 *)(param_1 + 0x28));
  param_1 = fn_82236200(param_1,uVar1);
LAB_82245be0:
  fn_82F68CC0(param_2,param_1 + param_3,param_4);
  return;
}

