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
extern int fn_82529320();
extern int fn_82575DF0();
extern int fn_8265CA20();


int * fn_82376BE0(int *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = param_1 + 0x74;
  lVar2 = 3;
  do {
    if (*piVar3 != 0) {
      fn_82575DF0(*(undefined4 *)(*(int *)(*param_1 + 0x4c) + 0x93c));
      *piVar3 = 0;
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
  if (*param_1 != 0) {
    fn_82529320(*param_1,0);
    *param_1 = 0;
  }
  puVar1 = (undefined4 *)param_1[0x834];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x834] = 0;
  piVar3 = (int *)param_1[0x858];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3,param_1 + 0x854 != piVar3);
    param_1[0x858] = 0;
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

