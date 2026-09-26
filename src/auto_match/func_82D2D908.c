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
extern int fn_82D2BFD0();


undefined4 * fn_82D2D908(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  
  if (param_1[1] != 0) {
    iVar6 = *(int *)*param_1;
    if (*(int *)(iVar6 + 0x480) != 0) goto LAB_82d2d94c;
  }
  iVar6 = fn_82D2BFD0(param_1);
LAB_82d2d94c:
  puVar2 = *(undefined4 **)(iVar6 + 0x480);
  uVar3 = *puVar2;
  *(int *)(iVar6 + 0x484) = *(int *)(iVar6 + 0x484) + 1;
  *(undefined4 *)(iVar6 + 0x480) = uVar3;
  puVar2[2] = *(undefined4 *)(param_2 + 8);
  puVar2[3] = *(undefined4 *)(param_2 + 0xc);
  puVar2[4] = *(undefined4 *)(param_2 + 0x10);
  puVar2[5] = *(undefined4 *)(param_2 + 0x14);
  puVar2[6] = *(undefined4 *)(param_2 + 0x18);
  puVar2[7] = *(undefined4 *)(param_2 + 0x1c);
  uVar1 = *(ushort *)(puVar2 + 8);
  uVar4 = *(ushort *)(param_2 + 0x20) & 0xe000;
  *(ushort *)(puVar2 + 8) = uVar1 & 0x1fff | uVar4;
  uVar5 = *(ushort *)(param_2 + 0x20) & 0x1000;
  *(ushort *)(puVar2 + 8) = uVar5 | uVar1 & 0xfff | uVar4;
  *(ushort *)(puVar2 + 8) = uVar5 | uVar4 | *(ushort *)(param_2 + 0x20) & 0xfff;
  *(undefined2 *)((int)puVar2 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  puVar2[1] = 0;
  *puVar2 = param_1[3];
  if (param_1[3] != 0) {
    *(undefined4 **)(param_1[3] + 4) = puVar2;
  }
  param_1[3] = puVar2;
  param_1[4] = param_1[4] + 1;
  return puVar2;
}

