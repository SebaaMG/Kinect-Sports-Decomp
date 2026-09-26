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
#define CARRY8(a,b) ((((U64)(a)) + ((U64)(b))) < ((U64)(a)))


byte * fn_82D40698(byte *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  else {
    bVar3 = 1;
    if (*(int *)(iVar1 + 0xc) == 9) {
      uVar2 = (**(code **)(*(int *)(iVar1 + 0x10) + 4))(iVar1 + 0x10);
      bVar3 = -!CARRY8(100 - uVar2,uVar2 ^ 0x80000000) & 1;
    }
    iVar1 = *param_2;
    if (*(int *)(iVar1 + 0xc) == 0x18) {
      uVar2 = (**(code **)(*(int *)(iVar1 + 0x10) + 4))(iVar1 + 0x10);
      bVar3 = -!CARRY8(100 - uVar2,uVar2 ^ 0x80000000) & bVar3;
    }
    iVar1 = *param_2;
    if (*(int *)(iVar1 + 0xc) == 7) {
      uVar2 = (**(code **)(*(int *)(iVar1 + 0x10) + 4))(iVar1 + 0x10);
      bVar3 = -!CARRY8(100 - uVar2,uVar2 ^ 0x80000000) & bVar3;
    }
    *param_1 = -(*(int *)(*param_2 + 0xc) != 0xf) & bVar3;
  }
  return param_1;
}

