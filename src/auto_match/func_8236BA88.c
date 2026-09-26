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
extern int fn_822ABA88();


void fn_8236BA88(int *param_1)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = *(uint *)(*(int *)(param_1[4] * 4 + *param_1) + 8);
  if (uVar1 != 0) {
    do {
      piVar2 = (int *)fn_822ABA88(*(undefined4 *)(param_1[4] * 4 + *param_1),uVar3);
      if ((int *)piVar2[9] != (int *)0x0) {
        (**(code **)(*(int *)piVar2[9] + 8))();
      }
      if (piVar2[9] != 0) {
        piVar2[9] = 0;
        *(undefined4 *)(*(int *)(piVar2[5] + 0x8c0) + 0x90) = 0;
        (**(code **)(*piVar2 + 0x24))(piVar2,0);
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)uVar1);
  }
  return;
}

