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


void fn_8275FFC0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint *puVar4;
  uint uVar5;
  
  pbVar2 = *(byte **)(param_1 + 4);
  bVar1 = *pbVar2;
  if (((bVar1 & 1) == 0) && ((bVar1 & 6) != 2)) {
    if ((bVar1 & 7) == 0) {
      return;
    }
    if ((bVar1 & 6) == 4) {
      puVar3 = (ushort *)((uint)(pbVar2 + 2) & 0xfffffffe);
      *param_2 = (uint)*puVar3;
      *param_3 = (uint)puVar3[1];
      uVar5 = (uint)puVar3[2];
    }
    else {
      puVar4 = (uint *)((uint)(pbVar2 + 4) & 0xfffffffc);
      *param_2 = *puVar4;
      *param_3 = puVar4[1];
      uVar5 = puVar4[2];
    }
  }
  else {
    *param_2 = (uint)pbVar2[1];
    *param_3 = (uint)pbVar2[2];
    uVar5 = (uint)pbVar2[3];
  }
  *param_4 = uVar5;
  return;
}

