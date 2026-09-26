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


void fn_8300D9A8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = 0;
  piVar2 = param_1;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    do {
      piVar6 = piVar2 + 3;
      uVar4 = 0;
      if (piVar2[4] - *piVar6 >> 3 != 0) {
        iVar5 = 0;
        do {
          piVar1 = *(int **)(*piVar6 + iVar5 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x28))();
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 8;
        } while (uVar4 < (uint)(piVar2[4] - *piVar6 >> 3));
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar6;
    } while (uVar3 < *(byte *)((int)param_1 + 0x4d));
  }
  return;
}

