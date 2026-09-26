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


void fn_82D58828(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1e30);
  if (iVar3 != 0) {
    iVar2 = fn_82CE5410();
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(*(int **)(iVar2 + 0x14),iVar3,0xc00);
    uVar1 = *(undefined4 *)(param_1 + 0x1e34);
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(*(int **)(iVar3 + 0x14),uVar1,0xc00);
    uVar1 = *(undefined4 *)(param_1 + 0x1e38);
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(*(int **)(iVar3 + 0x14),uVar1,0xc00);
    uVar1 = *(undefined4 *)(param_1 + 0x1e3c);
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(*(int **)(iVar3 + 0x14),uVar1,0xc00);
    *(undefined4 *)(param_1 + 0x1e30) = 0;
    *(undefined4 *)(param_1 + 0x1e34) = 0;
    *(undefined4 *)(param_1 + 0x1e38) = 0;
    *(undefined4 *)(param_1 + 0x1e3c) = 0;
  }
  return;
}

