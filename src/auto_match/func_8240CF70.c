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


undefined8 fn_8240CF70(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar4;
  undefined8 uVar3;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x44);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x44) + 4))(piVar5);
  if ((*(int *)(iVar4 + 0x7a0) != 0) || (bVar1 = false, *(int *)(param_1 + 0x58) != 0)) {
    bVar1 = true;
  }
  iVar4 = (**(code **)(*piVar5 + 8))(piVar5);
  if ((*(int *)(iVar4 + 0x7a0) != 0) || (bVar2 = false, *(int *)(param_1 + 0x70) != 0)) {
    bVar2 = true;
  }
  if (((bVar1) || (bVar2)) || (uVar3 = 1, *(int *)(param_1 + 0xf8) == 0)) {
    uVar3 = 0;
  }
  return uVar3;
}

