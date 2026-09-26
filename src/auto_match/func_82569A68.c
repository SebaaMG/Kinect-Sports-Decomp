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
extern int fn_82574268();


void fn_82569A68(int param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xd4)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0xd8) + 0x10);
      if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x8c0), iVar2 != 0)) {
        puVar5 = (undefined4 *)(iVar2 + 0x198);
        if (puVar5 != (undefined4 *)0x0) {
          iVar2 = (**(code **)(*(int *)*puVar5 + 0x1c))();
          if (iVar2 != 0) {
            uVar1 = (**(code **)(*(int *)*puVar5 + 0x1c))();
            fn_82574268(uVar1,param_2);
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x30;
    } while (iVar3 < *(int *)(param_1 + 0xd4));
  }
  return;
}

