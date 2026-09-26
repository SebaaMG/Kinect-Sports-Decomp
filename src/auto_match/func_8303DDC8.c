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
extern int fn_8302BBA8();


void fn_8303DDC8(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x1c);
  if (piVar4 != *(int **)(param_1 + 0x20)) {
    do {
      if (*piVar4 == param_2[3]) {
        return;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(param_1 + 0x20));
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  iVar2 = *param_2;
  uVar3 = fn_8302BBA8();
  (**(code **)(iVar2 + 0xcc))(param_2,uVar1 >> 3 & 0x1f,uVar3);
  return;
}

