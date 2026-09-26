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


void fn_82A1FBD8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x2c);
  piVar2 = (int *)(param_1 + 0x2c);
  if ((piVar3 != piVar2) && ((uint)param_2[4] < *(uint *)(*(int *)(param_1 + 0x30) + 0x10))) {
    do {
      if ((uint)param_2[4] <= (uint)piVar3[4]) {
        puVar1 = (undefined4 *)piVar3[1];
        *param_2 = piVar3;
        param_2[1] = puVar1;
        *puVar1 = param_2;
        piVar3[1] = (int)param_2;
        return;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar2);
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  *param_2 = piVar2;
  param_2[1] = puVar1;
  *puVar1 = param_2;
  *(undefined4 **)(param_1 + 0x30) = param_2;
  return;
}

