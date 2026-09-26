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
extern unsigned int lbl_82141B64;


void fn_82DAB540(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort uVar5;
  
  param_2 = *(char *)(param_2 + 0x10) + param_2;
  param_3 = *(char *)(param_3 + 0x10) + param_3;
  iVar3 = fn_82CE5410();
  puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x1c);
  *(undefined2 *)(puVar4 + 1) = 0x1c;
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)((int)puVar4 + 6) = 1;
  puVar4[2] = 1;
  *puVar4 = &lbl_82141B64;
  uVar5 = *(ushort *)(param_3 + 0xaa);
  uVar1 = *(ushort *)(param_2 + 0xaa);
  if (uVar1 < uVar5) {
    uVar5 = uVar1;
  }
  *(ushort *)(puVar4 + 6) = uVar5;
  puVar4[3] = uVar2;
  puVar4[4] = param_2;
  puVar4[5] = param_3;
  return;
}

