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
extern unsigned int iStack_14;
extern unsigned int iStack_1c;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_822673B0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar2 = *(int *)(param_1 + 0x5d8) + param_2;
  if (*(code **)(param_1 + 0x5b0) != (code *)0x0) {
    uStack_18 = *(undefined4 *)(param_1 + 0x5b4);
    for (puVar1 = *(undefined4 **)**(int **)(param_1 + 0x5c0);
        puVar1 != (undefined4 *)**(int **)(param_1 + 0x5c0); puVar1 = (undefined4 *)*puVar1) {
      iVar3 = puVar1[2];
      if (*(int *)(iVar3 + 0x40) == param_2) goto LAB_82267408;
    }
    iVar3 = 0;
LAB_82267408:
    uStack_20 = *(undefined4 *)(iVar3 + 0xdc);
    iStack_1c = iVar2 - *(int *)(param_1 + 0x47c);
    if (*(int *)(param_1 + 0x5dc) == 0) {
      iStack_14 = 0;
    }
    else {
      iStack_14 = iVar2 * 0x24 + *(int *)(param_1 + 0x5dc);
    }
    (**(code **)(param_1 + 0x5b0))(&uStack_20);
  }
  return;
}

