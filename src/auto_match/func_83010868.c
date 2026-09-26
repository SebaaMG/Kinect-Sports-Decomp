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
extern int fn_8300F2C0();
extern int fn_8300F848();
extern int fn_83019E38();


undefined8 fn_83010868(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int aiStack_40 [16];
  
  if (param_2 != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x50);
    puVar2 = (undefined4 *)0x0;
    while (puVar4 = puVar5, puVar4 != (undefined4 *)0x0) {
      iVar1 = puVar4[2];
      iVar6 = *(int *)(iVar1 + 8);
      if (iVar1 == param_2) {
        iVar7 = 0;
        if ((*(uint *)(iVar6 + 0x14) & 0xffffff00) == 0x501100) {
          iVar7 = *(int *)(iVar6 + 0x9c) + -1;
          *(undefined4 *)(iVar6 + 0x9c) = 0;
        }
        uVar3 = *(undefined4 *)(iVar6 + 0x10);
        *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x90);
        *(int *)(iVar1 + 0x30) = iVar7;
        aiStack_40[0] = iVar1;
        iVar6 = fn_83019E38(param_1 + 0x70,uVar3,aiStack_40);
        if (iVar6 != 1) {
          fn_8300F848(param_1,iVar1,0);
          fn_8300F2C0(param_1,iVar1);
        }
        if (puVar4 == *(undefined4 **)(param_1 + 0x50)) {
          *(undefined4 *)(param_1 + 0x50) = *puVar4;
        }
        else {
          *puVar2 = *puVar4;
        }
        if (puVar4 == *(undefined4 **)(param_1 + 0x54)) {
          *(undefined4 **)(param_1 + 0x54) = puVar2;
        }
        *puVar4 = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 **)(param_1 + 0x58) = puVar4;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        return 1;
      }
      puVar2 = puVar4;
      puVar5 = (undefined4 *)*puVar4;
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x70); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      iVar1 = puVar2[2];
      if (iVar1 == param_2) {
        if ((*(uint *)(*(int *)(iVar1 + 8) + 0x14) & 0xffffff00) == 0x501100) {
          *(int *)(iVar1 + 0x30) = *(int *)(*(int *)(iVar1 + 8) + 0x9c) + *(int *)(iVar1 + 0x30);
          return 1;
        }
        *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
        return 1;
      }
    }
  }
  return 1;
}

