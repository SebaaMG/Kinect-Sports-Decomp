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
extern int fn_824CD030();


void fn_82342E10(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar4 = fn_824CD030(param_2);
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0xf8) != 0) {
      puVar2 = (undefined4 *)(*(int *)(param_2 + 0xfc) + 0x90U & 0xfffffff0);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)(**(int **)(param_1 + 0xc) + 0x80U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
    }
  }
  else {
    iVar4 = **(int **)(param_1 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x24);
    puVar2 = (undefined4 *)(iVar4 + 0xe0U & 0xfffffff0);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    puVar2 = (undefined4 *)(iVar4 + 0x80U & 0xfffffff0);
    uVar9 = puVar2[1];
    uVar10 = puVar2[2];
    uVar11 = puVar2[3];
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0xfc) + 0x90U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0xfc) + 0xa0U & 0xfffffff0);
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    *(undefined4 *)(*(int *)(iVar1 + 0xfc) + 0xb0) = 1;
  }
  return;
}

