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
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_82722540();
extern int fn_82724448();
extern int fn_82728DD0();


void fn_82729220(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar7;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int aiStack_30 [12];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar7 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar7 == 4) {
      iVar7 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar7 = 0;
      }
      iVar2 = *(int *)(iVar7 + 0xe8);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
      }
      iVar7 = *(int *)(iVar7 + 0xe8);
    }
    else {
      iVar7 = (**(code **)(**(int **)(param_1 + 8) + 8))();
      if (iVar7 != 0xd) {
        return;
      }
      iVar7 = *(int *)(param_1 + 8) + -0x10;
      if (*(int *)(param_1 + 8) == 0) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        *(uint *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1U & 0x8fffffff;
      }
    }
    if (iVar7 != 0) {
      lVar4 = fn_82724448(iVar7);
      if (lVar4 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x18);
        uVar5 = fn_826957D0(param_1,0);
        fn_82696D38(aiStack_30,uVar5,uVar3,0xffffffffffffffff,0);
        uVar6 = fn_82722540(aiStack_30);
        if ((int)uVar6 < 5) {
          fn_82728DD0(param_1,(uVar6 & 0xfffffff) * 0x10 + lVar4);
        }
        lVar4 = (ulonglong)*(uint *)(aiStack_30[0] + 8) - 1;
        *(int *)(aiStack_30[0] + 8) = (int)lVar4;
        if (lVar4 == 0) {
          fn_826944C8(aiStack_30[0]);
        }
      }
      fn_826824B0(iVar7);
    }
  }
  return;
}

