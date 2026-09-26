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
extern int fn_826859B0();
extern int fn_82685C28();


void fn_82685EC0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) {
    iVar2 = fn_82685C28(param_1 + 0x40);
    *(int *)(iVar2 + 8) = param_2;
    *(int *)(param_2 + 0x1c) = iVar2;
    *(int *)(param_2 + 0x18) = param_1;
  }
  *(int *)(param_1 + 0x88) = iVar2;
  puVar3 = (undefined4 *)fn_826859B0(param_1 + 0x1c);
  puVar3[4] = param_3;
  puVar3[5] = iVar2;
  *puVar3 = *(undefined4 *)(param_1 + 0x30);
  puVar3[1] = param_1 + 0x30;
  *(undefined4 **)(*(int *)(param_1 + 0x30) + 4) = puVar3;
  *(undefined4 **)(param_1 + 0x30) = puVar3;
  uVar1 = *(undefined4 *)(iVar2 + 0x18);
  puVar3[3] = iVar2 + 0x10;
  puVar3[2] = uVar1;
  *(undefined4 **)(*(int *)(iVar2 + 0x18) + 0xc) = puVar3;
  *(undefined4 **)(iVar2 + 0x18) = puVar3;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

