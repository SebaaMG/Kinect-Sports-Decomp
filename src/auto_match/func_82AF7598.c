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


undefined4 fn_82AF7598(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  puVar4 = (undefined4 *)(-(uint)((uVar1 & 1) == 0) & uVar1);
  iVar5 = *(int *)(param_1 + 8) + 1;
  uVar3 = puVar4[*(int *)(param_1 + 8) + 2];
  *(int *)(param_1 + 8) = iVar5;
  uVar1 = *(uint *)((-(uint)((uVar1 & 1) == 0) & uVar1 & 0xfffffffe) + 4);
  if (((uVar1 & 1) == 0) && (uVar1 != 0)) {
    if (iVar5 != 10) {
      return uVar3;
    }
    puVar2 = (uint *)((uint)puVar4 & 0xfffffffe);
    *(uint *)(puVar2[1] & 0xfffffffe) = *puVar2;
    *(uint *)(*puVar2 & 0xfffffffe) = puVar2[1];
    iVar5 = *(int *)(param_1 & 0xfffff000);
    *puVar4 = *(undefined4 *)(iVar5 + 0x2c);
    *(undefined4 **)(iVar5 + 0x2c) = puVar4;
    *(undefined4 *)(param_1 + 8) = 0;
    return uVar3;
  }
  if (iVar5 != 10) {
    return uVar3;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar3;
}

