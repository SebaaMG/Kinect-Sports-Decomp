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
extern unsigned int *auStack_10;


void fn_824D4418(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_10 [16];
  
  if (*(int *)(param_2 + 0x120) == 0) {
    puVar5 = auStack_10;
    puVar1 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  else {
    iVar3 = 0;
    uVar4 = *(uint *)(param_2 + 0x11c);
    if (*(int **)(param_2 + 0x110) != (int *)0x0) {
      iVar3 = **(int **)(param_2 + 0x110);
    }
    if (*(uint *)(iVar3 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar3 + 8);
    }
    puVar5 = (undefined1 *)(*(int *)(uVar4 * 4 + *(int *)(iVar3 + 4)) + (param_3 + 4) * 0x10);
  }
  puVar1 = (undefined4 *)((uint)(puVar5 + in_r0) & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  return;
}

