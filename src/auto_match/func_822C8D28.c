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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_5c;


void fn_822C8D28(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  puVar6 = (undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar7 = (undefined4 *)(param_1 + 0x20);
    (**(code **)(**(int **)(param_1 + 0x20) + 8))();
    iVar3 = fn_82365BD8(auStack_58,puVar7);
    iVar4 = fn_82365BD8(auStack_50,puVar6);
    fn_82365BD8(auStack_40,iVar4);
    fn_82365BD8(auStack_38,iVar3);
    if (*(int *)(iVar4 + 4) != 0) {
      fn_822315A0();
    }
    if (*(int *)(iVar3 + 4) != 0) {
      fn_822315A0();
    }
    puVar5 = (undefined4 *)fn_82365BD8(auStack_60,puVar6);
    uVar1 = puVar5[1];
    puVar5[1] = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    uVar1 = *puVar5;
    *puVar5 = *puVar7;
    *puVar7 = uVar1;
    if (iStack_5c != 0) {
      fn_822315A0();
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *puVar6 = 0;
    if (iVar3 != 0) {
      fn_822315A0();
    }
    (**(code **)(*(int *)*puVar7 + 4))();
    piVar2 = *(int **)(*(int *)(param_1 + 0x3c) + 0xc);
    for (piVar8 = *(int **)(*(int *)(param_1 + 0x3c) + 8); piVar8 != piVar2; piVar8 = piVar8 + 1) {
      (**(code **)((*(uint *)(*piVar8 + 8) & 0xfffffffe) + 4))(*piVar8 + 0x10,auStack_40);
    }
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  return;
}

