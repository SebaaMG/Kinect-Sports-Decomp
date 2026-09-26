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


undefined4 * fn_82D03510(int *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = param_2 + 0x1fU & 0xfffffff0;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))(param_1,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1[0x26] + 0x24))((int *)param_1[0x26],uVar1);
    if (puVar2 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = puVar2 + 4;
      *puVar2 = 0;
    }
  }
  else {
    puVar3 = puVar2 + 4;
    *puVar2 = 1;
  }
  return puVar3;
}

