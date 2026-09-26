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
extern int fn_82F68CC0();


void fn_82CA3EE0(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5,
                  int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  if (param_6 <= param_4) {
    param_4 = param_6;
  }
  uVar2 = param_4 >> 3;
  if (0 < (int)param_3) {
    do {
      puVar4 = param_2;
      puVar3 = param_1;
      if (0 < (int)uVar2) {
        lVar5 = (longlong)(int)uVar2;
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 2;
          *puVar3 = uVar1;
          puVar3[1] = *(undefined4 *)((int)puVar3 + (int)param_2 + (4 - (int)param_1));
          puVar3 = puVar3 + 2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      fn_82F68CC0(puVar3,puVar4,param_4 + (uVar2 & 0x1fffffff) * -8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((int)param_1 + param_6);
      param_2 = (undefined4 *)((int)param_2 + param_5);
    } while (param_3 != 0);
  }
  return;
}

