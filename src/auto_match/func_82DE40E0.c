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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern unsigned int lbl_8212FC60;


void fn_82DE40E0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  if (param_1[5] != 0) {
    fn_82CE4118();
  }
  param_1[5] = 0;
  iVar2 = fn_82CE5410();
  uVar3 = (ulonglong)(uint)param_1[3];
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)param_1[3]) {
    puVar4 = (undefined4 *)(param_1[2] + -4);
    do {
      if (puVar4[1] != 0) {
        fn_82CE4118();
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    } while (uVar3 != 0);
  }
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[2],param_1[4] & 0x3fffffff,4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = &lbl_8212FC60;
  return;
}

