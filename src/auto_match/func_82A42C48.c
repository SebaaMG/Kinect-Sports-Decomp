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
extern int fn_82A3FF60();
extern int fn_82A429A8();
extern int fn_82A42B30();
extern int fn_82A4F4E0();


int * fn_82A42C48(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_2 + 0xe0);
  do {
    if (puVar3 == (undefined4 *)0x0) goto LAB_82a42cdc;
    if (puVar3 == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)*puVar3;
      puVar3 = (undefined4 *)puVar3[1];
    }
  } while (*piVar1 != 0);
  if (piVar1[1] == 0x7fffffff) {
    iVar2 = fn_82A429A8(param_1,param_3,param_4,param_5);
    piVar1[1] = iVar2;
  }
  if (piVar1[1] == 0x7fffffff) {
LAB_82a42cdc:
    piVar1 = (int *)fn_82A3FF60(0xffffffff83219d50,8,0x20970003,0);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1[1] = 0x7fffffff;
      *piVar1 = 0;
    }
    if (piVar1 != (int *)0x0) {
      iVar2 = fn_82A42B30(param_2 + 0x14,piVar1);
      if (iVar2 == 0) {
        fn_82A4F4E0(piVar1);
        piVar1 = (int *)0x0;
      }
      else {
        iVar2 = fn_82A429A8(param_1,param_3,param_4,param_5);
        piVar1[1] = iVar2;
      }
    }
  }
  return piVar1;
}

