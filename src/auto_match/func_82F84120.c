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
extern int fn_82A28568();
extern int fn_82A2A360();
extern int fn_82F68240();
extern int fn_82F800C8();
extern int iRam83263614;


ulonglong fn_82F84120(ulonglong param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined4 *puVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar5;
  
  if (((param_1 & 0xffffffff) == 0) ||
     (trapWord(6,param_1,0), (param_2 & 0xffffffff) <= 0xfffff000 / (param_1 & 0xffffffff))) {
    uVar5 = (longlong)(int)param_1 * (longlong)(int)param_2;
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    do {
      uVar1 = 0;
      if ((uVar5 & 0xffffffff) < 0xfffff001) {
        uVar2 = fn_82A2A360(0);
        uVar1 = fn_82A28568(uVar2,8,uVar5);
        if ((uVar1 & 0xffffffff) != 0) {
          return uVar1;
        }
      }
      if (iRam83263614 == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 0xc;
          return uVar1;
        }
        return uVar1;
      }
      iVar4 = fn_82F800C8(uVar5);
    } while (iVar4 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    puVar3 = (undefined4 *)fn_82F68240();
    *puVar3 = 0xc;
  }
  return 0;
}

