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
extern int fn_82D9FEB8();
extern int fn_82DA0080();
extern int fn_82DA0290();
extern int fn_82DA0450();


void fn_82DC7828(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  
  puVar2 = *(ushort **)(*(int *)(param_1 + 0x24) + 0x10);
  if (puVar2 != (ushort *)0x0) {
    uVar1 = *puVar2;
    while (uVar3 = (uint)uVar1, 0x16 < uVar3) {
      if (uVar3 - 0x17 < 6) {
        if (uVar3 == 0x17) {
          fn_82DA0450(puVar2,param_2,param_3,param_4,param_5,param_6);
        }
        else if (uVar3 == 0x18) {
          fn_82D9FEB8(puVar2,param_2,param_3,param_4,param_5,param_6);
        }
        else if (uVar3 != 0x19) {
          if (uVar3 == 0x1a) {
            fn_82DA0080(puVar2,param_2,param_3,param_4,param_5,param_6);
          }
          else if (uVar3 != 0x1b) {
            fn_82DA0290(puVar2,param_2,param_3,param_4,param_5,param_6);
          }
        }
      }
      puVar2 = *(ushort **)(puVar2 + 10);
      uVar1 = *puVar2;
    }
  }
  return;
}

