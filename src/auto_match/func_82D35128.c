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
extern int fn_82D34E10();


void fn_82D35128(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if (param_1[4] == 0) {
    fn_82D34E10(param_1,param_1[1] + 0x80U & 0xffff,param_2,param_3);
  }
  puVar2 = (undefined4 *)(param_4 + -4);
  lVar4 = 5;
  uVar1 = *(ushort *)(param_1[4] * 2 + param_1[3] + -2);
  param_1[4] = param_1[4] + -1;
  puVar3 = (undefined4 *)((uint)uVar1 * 0x14 + *param_1 + -4);
  do {
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

