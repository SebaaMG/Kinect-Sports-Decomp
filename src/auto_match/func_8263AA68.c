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
extern int fn_82F691F0();


void fn_8263AA68(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = (0x5fU - param_2) / 3;
  iVar1 = (uVar3 + 0x30) * 0x18;
  uVar2 = *(uint *)(iVar1 + param_1);
  puVar4 = (uint *)(iVar1 + param_1);
  if (((uVar2 & 3) != 0) && ((uVar2 & 3) != 2)) {
    *puVar4 = *puVar4 & 0xfffffffc | 1;
    uVar2 = *(int *)(param_3 + 0x18) + param_4;
    (puVar4 + ((0x5fU - param_2) % 3) * 2)[1] =
         *(int *)(param_3 + 0x1c) - param_4 & 0xcfffffffU | 0x10000000;
    puVar4[((0x5fU - param_2) % 3) * 2] = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff);
    *(ulonglong *)(param_1 + 0x18) =
         0x8000000000000000U >> (uVar3 + 0x20 & 0x7f) | *(ulonglong *)(param_1 + 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar4,0,0x18);
}

