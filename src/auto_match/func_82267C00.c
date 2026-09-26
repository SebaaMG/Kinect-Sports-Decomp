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
extern int fn_8252D240();


void fn_82267C00(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  param_1[0x11] = 1;
  if (param_1[0xf] != 0) {
    puVar4 = (undefined4 *)*param_1;
    for (puVar1 = (undefined4 *)*puVar4; puVar1 != puVar4; puVar1 = (undefined4 *)*puVar1) {
      iVar2 = puVar1[2];
      if ((ulonglong)*(uint *)(iVar2 + 0x40) == (param_2 & 0xffffffff)) {
        puVar3 = (uint *)(iVar2 + 0x4c);
        if ((puVar3 != (uint *)0x0) &&
           (uVar5 = (ulonglong)*puVar3, uVar5 != (uVar5 - 1) + (ulonglong)(uVar5 == 0))) {
          fn_8252D240(*(undefined4 *)(iVar2 + 0xdc),puVar3,0);
        }
        puVar4 = (undefined4 *)param_1[8];
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(puVar4,param_2);
        }
        break;
      }
      puVar4 = (undefined4 *)*param_1;
    }
  }
  param_1[0x11] = 0;
  return;
}

