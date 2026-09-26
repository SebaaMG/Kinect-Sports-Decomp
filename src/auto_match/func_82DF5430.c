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
extern int fn_82CE5410();
extern int fn_82DF5250();


int fn_82DF5430(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_2[1] == 2) && (*(int *)(param_3 + 4) == 0)) {
    iVar3 = fn_82CE5410();
    iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x60);
    *(undefined2 *)(iVar3 + 4) = 0x60;
    iVar3 = fn_82DF5250(iVar3,*(undefined4 *)*param_2,((undefined4 *)*param_2)[1],
                              *(undefined4 *)(param_1 + 0x10));
    puVar1 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(iVar3 + 0x30U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (undefined4 *)(param_1 + 0x40U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(iVar3 + 0x40U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(iVar3 + 0x5c) = *(undefined1 *)(param_1 + 0x5c);
    *(undefined1 *)(iVar3 + 0x5d) = *(undefined1 *)(param_1 + 0x5d);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

