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
extern unsigned int lbl_8213A5A4;
extern unsigned int lbl_8213A5B8;
extern unsigned int lbl_8213A5CC;


void fn_82D9C8B0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = fn_82CE5410();
  puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x28);
  *puVar4 = &lbl_8213A5A4;
  *(undefined2 *)(puVar4 + 1) = 0x28;
  *(undefined2 *)((int)puVar4 + 6) = 1;
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar4 = &lbl_8213A5B8;
  *(undefined1 *)(puVar4 + 2) = uVar1;
  puVar4[3] = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *puVar4 = &lbl_8213A5CC;
  puVar4[4] = uVar2;
  puVar4[5] = *(undefined4 *)(param_1 + 0x14);
  puVar4[6] = *(undefined4 *)(param_1 + 0x18);
  puVar4[7] = *(undefined4 *)(param_1 + 0x1c);
  puVar4[8] = *(undefined4 *)(param_1 + 0x20);
  puVar4[9] = *(undefined4 *)(param_1 + 0x24);
  return;
}

