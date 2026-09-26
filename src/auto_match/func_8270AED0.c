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


undefined4 * fn_8270AED0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  else {
    uVar4 = (ulonglong)(uint)param_2[4];
    uVar5 = uVar4;
    param_1 = puVar1;
    if ((uint)puVar1[4] == uVar4) {
      return puVar1;
    }
    while( true ) {
      uVar2 = uVar5 >> 0x1f;
      uVar5 = (uVar5 & 0x7fffffff) << 1;
      iVar3 = (int)uVar2 + 1;
      puVar1 = (undefined4 *)param_1[iVar3];
      if (puVar1 == (undefined4 *)0x0) break;
      param_1 = puVar1;
      if ((uint)puVar1[4] == uVar4) {
        return puVar1;
      }
    }
    param_1[iVar3] = param_2;
  }
  *param_2 = param_1;
  return (undefined4 *)0x0;
}

