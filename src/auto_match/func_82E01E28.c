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


char fn_82E01E28(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  char cVar4;
  int iVar5;
  char cVar7;
  int iVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0x28))();
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xd4);
  if (iVar1 < 1) {
    cVar4 = '\0';
  }
  else {
    cVar4 = *(char *)(*(int *)(param_2 + 0x1c) + 0x20);
    if ('\0' < cVar4) {
      iVar6 = 0;
      do {
        iVar5 = iVar6 * 0xe0 + *(int *)(param_2 + 0x48);
        puVar2 = (undefined4 *)(iVar5 + 0x50U & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (undefined4 *)(iVar5 + 0x60U & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(param_5 + 0x10U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        *(undefined4 *)(param_5 + 0x20) = *(undefined4 *)(param_1 + 0xc);
        iVar5 = param_3 + 0x10;
        if (param_3 == 0) {
          iVar5 = 0;
        }
        *(int *)(param_5 + 0x24) = iVar5;
        cVar7 = (char)iVar6 + '\x01';
        *(undefined4 *)(param_5 + 0x30) = *(undefined4 *)(param_3 + 0x20);
        iVar6 = (int)cVar7;
        *(undefined4 *)(param_5 + 0x34) = param_4;
        *(undefined1 *)(param_5 + 0x4c) = 0;
        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xd0);
        *(int *)(param_5 + 0x40) = param_6;
        param_6 = param_6 + 0x60;
        *(undefined4 *)(param_5 + 0x38) = uVar8;
        *(int *)(param_5 + 0x3c) = iVar1;
        *(undefined4 *)(param_5 + 0x44) = 1;
        *(undefined4 *)(param_5 + 0x48) = 0;
        param_5 = param_5 + 0x50;
      } while (cVar7 < cVar4);
    }
  }
  return cVar4;
}

