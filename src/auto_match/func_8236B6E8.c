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
extern int fn_82528EE0();


undefined8 fn_8236B6E8(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  param_2 = param_2 * 4;
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + param_2);
  uVar2 = piVar1[1] - *piVar1 >> 2;
  uVar4 = (ulonglong)(int)uVar2;
  if (1 < uVar2) {
    piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2);
    fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),1,uVar4,param_2,0);
  }
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2);
  lVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
  lVar5 = lVar3 + 0x30;
  if (lVar3 + 0x30 == 0) {
    lVar5 = -0x7de4d1ac;
  }
  if ((uVar4 & 0xffffffff) == 2) {
    fn_82528EE0(param_3,0x60,0xffffffff821b2e60,lVar5);
  }
  else {
    fn_82528EE0(param_3,0x60,0xffffffff821a9944,lVar5);
  }
  return 1;
}

