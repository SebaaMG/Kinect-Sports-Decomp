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


void fn_82AF7650(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  while( true ) {
    puVar4 = (undefined4 *)(-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4));
    puVar3 = (uint *)((uint)puVar4 & 0xfffffffe);
    uVar1 = puVar3[1];
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (uVar1 == 0) break;
    *(uint *)(uVar1 & 0xfffffffe) = *puVar3;
    *(uint *)(*puVar3 & 0xfffffffe) = puVar3[1];
    iVar2 = *(int *)(param_1 & 0xfffff000);
    *puVar4 = *(undefined4 *)(iVar2 + 0x2c);
    *(undefined4 **)(iVar2 + 0x2c) = puVar4;
  }
  return;
}

