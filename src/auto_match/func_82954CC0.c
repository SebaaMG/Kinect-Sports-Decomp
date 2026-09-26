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
extern int fn_8265C990();
extern int fn_828FCD88();
extern int fn_82968E90();
extern unsigned int lbl_82037BF8;


void fn_82954CC0(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  *param_1 = &lbl_82037BF8;
  fn_8265C990(param_1[0x44],0x24810000);
  fn_8265C990(param_1[0x4a],0x24810000);
  if ((int *)param_1[0x6d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x6d] + 4))();
    param_1[0x6d] = 0;
  }
  piVar3 = param_1 + 0x76;
  lVar2 = 7;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      fn_828FCD88(iVar1);
      fn_8265C990(iVar1,0x24810000);
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
  piVar3 = param_1 + 0x6e;
  lVar2 = 7;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      fn_828FCD88(iVar1);
      fn_8265C990(iVar1,0x24810000);
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
  fn_82968E90(param_1);
  return;
}

