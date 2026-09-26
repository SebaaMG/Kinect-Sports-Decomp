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
extern int fn_82D9AA48();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_8213A434;
extern unsigned int lbl_8214183C;
extern unsigned int uStack_3a;


void fn_82D9C148(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined **ppuStack_40;
  undefined2 uStack_3a;
  
  *param_1 = &lbl_8213A434;
  ppuStack_40 = &lbl_8214183C;
  uVar4 = (ulonglong)(uint)param_1[0x59] - 1;
  uStack_3a = 1;
  if (-1 < (longlong)uVar4) {
    lVar3 = (uVar4 & 0x1fffffff) << 3;
    do {
      piVar1 = *(int **)(param_1[0x58] + (int)lVar3);
      (**(code **)(*piVar1 + 0x1c))(piVar1,&ppuStack_40);
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -8;
    } while (-1 < (longlong)uVar4);
  }
  param_1[0x59] = 0;
  ppuStack_40 = &lbl_8212FC60;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x59] = 0;
  if ((param_1[0x5a] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x58],param_1[0x5a] & 0x3fffffff,8);
  }
  param_1[0x58] = 0;
  param_1[0x5a] = 0x80000000;
  fn_82D9AA48(param_1);
  return;
}

