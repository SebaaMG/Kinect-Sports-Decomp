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
extern int fn_82381BC0();
extern int fn_8265C9E0();
extern int fn_82897BD0();
extern int fn_828BE158();
extern int fn_828C77A8();
extern int fn_82A4AAA8();


void fn_8288DAD8(int param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar6;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar7;
  int aiStack_40 [16];
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x230);
  aiStack_40[0] = *piVar1;
  if ((int *)aiStack_40[0] != piVar1) {
    do {
      uVar7 = (ulonglong)*(uint *)(aiStack_40[0] + 0x10);
      if (uVar7 != (param_2 & 0xffffffff)) {
        iVar6 = fn_82A4AAA8(uVar7);
        if (iVar6 != 2) {
          uVar3 = fn_8265C9E0(0xa8);
          if ((uVar3 & 0xffffffff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = fn_828C77A8(uVar3,param_1,uVar7,param_2,param_3);
          }
          uVar2 = *(undefined4 *)(param_1 + 0x10);
          uVar5 = fn_82897BD0(uVar7);
          fn_828BE158(uVar2,uVar4,uVar5,1);
        }
      }
      fn_82381BC0(aiStack_40);
    } while (aiStack_40[0] != *(int *)(*(int *)(param_1 + 0x10) + 0x230));
  }
  return;
}

