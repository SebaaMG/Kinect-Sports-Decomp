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


void fn_8264B3F8(undefined8 param_1,uint *param_2,ulonglong param_3)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = 0xffffffffffffffff;
  }
  do {
    puVar2 = param_2;
    for (uVar3 = (ulonglong)param_2[1]; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar4 = puVar2 + 2;
      puVar1 = (uint *)(*puVar4 * 4);
      if (puVar1 != (uint *)0x0) {
        if ((puVar2[3] & param_3) != 0) {
          puVar1[2] = (uint)param_1;
        }
        if ((*puVar4 & 0x40000000) != 0) {
          puVar1[3] = (uint)param_1;
        }
        if (((*puVar1 & 0xf) == 9) && (puVar1[0x1c] != 0)) {
          fn_8264B3F8(param_1,puVar1[0x1c],param_3);
        }
      }
      puVar2 = puVar4;
    }
    param_2 = (uint *)*param_2;
  } while (param_2 != (uint *)0x0);
  return;
}

