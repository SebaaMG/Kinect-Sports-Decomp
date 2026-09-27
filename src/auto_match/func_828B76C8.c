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
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_828B7258();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_828B76C8(undefined4 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  struct { undefined4 first; int second; } stack_pair_30;

  undefined4 auStack_28 [1];
  
  puVar4 = (undefined4 *)(param_2 + -8);
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  if (&stack_pair_30.first != puVar4) {
    stack_pair_30.second = *(int *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = 0;
    stack_pair_30.first = *puVar4;
    *puVar4 = 0;
  }
  uVar2 = 0;
  uVar3 = 0;
  if (auStack_28 != param_1) {
    uVar3 = param_1[1];
    param_1[1] = 0;
    uVar2 = *param_1;
    *param_1 = 0;
  }
  iVar1 = *(int *)(param_2 + -4);
  *(undefined4 *)(param_2 + -4) = uVar3;
  *puVar4 = uVar2;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  fn_828B7258(param_1,0,(param_2 - (int)param_1) + -8 >> 3,&stack_pair_30.first,param_3);
  if (stack_pair_30.second != 0) {
    fn_822315A0();
  }
  return;
}

