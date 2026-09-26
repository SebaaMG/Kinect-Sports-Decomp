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
extern unsigned int iStack_18;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_822688A0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  if (param_2 < 3) {
    pcVar2 = *(code **)(param_1 + 0x5b8);
    if (pcVar2 == (code *)0x0) {
      return;
    }
    uStack_14 = *(undefined4 *)(param_1 + 0x5bc);
    uStack_20 = 0;
    for (puVar1 = *(undefined4 **)**(int **)(param_1 + 0x5c0);
        puVar1 != (undefined4 *)**(int **)(param_1 + 0x5c0); puVar1 = (undefined4 *)*puVar1) {
      iVar3 = puVar1[2];
      if (*(uint *)(iVar3 + 0x40) == param_2) goto LAB_82268970;
    }
    iVar3 = 0;
LAB_82268970:
    uStack_1c = *(undefined4 *)(iVar3 + 0xdc);
    iStack_18 = (param_2 - *(int *)(param_1 + 0x4bc)) * 0x38 + param_1 + 0x638;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    pcVar2 = *(code **)(param_1 + 0x5b8);
    if (pcVar2 == (code *)0x0) {
      return;
    }
    uStack_14 = *(undefined4 *)(param_1 + 0x5bc);
    uStack_20 = 1;
    for (puVar1 = *(undefined4 **)**(int **)(param_1 + 0x5c0);
        puVar1 != (undefined4 *)**(int **)(param_1 + 0x5c0); puVar1 = (undefined4 *)*puVar1) {
      iVar3 = puVar1[2];
      if (*(int *)(iVar3 + 0x40) == *(int *)(param_1 + 0x4bc) + 3) goto LAB_82268910;
    }
    iVar3 = 0;
LAB_82268910:
    uStack_1c = *(undefined4 *)(iVar3 + 0xdc);
    iStack_18 = 0;
  }
  (*pcVar2)(&uStack_20);
  return;
}

