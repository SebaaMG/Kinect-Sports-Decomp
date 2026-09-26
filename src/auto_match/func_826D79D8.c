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


ulonglong fn_826D79D8(int *param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  uVar2 = (uint)param_3;
  iVar3 = uVar2 * 0x10 + *param_1;
  puVar4 = (uint *)(iVar3 + 8);
  if ((*puVar4 != 0xfffffffe) && (*(uint *)(iVar3 + 0xc) == uVar2)) {
    while( true ) {
      if ((puVar4[1] == uVar2) && (puVar4[2] == *param_2)) {
        return param_3;
      }
      uVar1 = *puVar4;
      param_3 = (ulonglong)uVar1;
      if (uVar1 == 0xffffffff) break;
      puVar4 = (uint *)(uVar1 * 0x10 + *param_1 + 8);
    }
  }
  return 0xffffffffffffffff;
}

