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


void fn_827171A8(int *param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x38))();
  if ((((*(byte *)((int)param_1 + 0x66) & 1) != 0) || (lVar3 == 0)) &&
     (uVar5 = 0, param_1[0x2a] != 0)) {
    iVar6 = 0;
    do {
      piVar1 = *(int **)(iVar6 + param_1[0x29]);
      if (piVar1 != (int *)0x0) {
        if ((*(byte *)((int)param_1 + 0x66) & 1) == 0) {
          bVar2 = false;
          if (lVar3 != 0) goto LAB_82717220;
        }
        else {
LAB_82717220:
          bVar2 = true;
        }
        if (bVar2) {
          bVar4 = *(byte *)((int)piVar1 + 0x66) | 1;
        }
        else {
          bVar4 = *(byte *)((int)piVar1 + 0x66) & 0xfe;
        }
        *(byte *)((int)piVar1 + 0x66) = bVar4;
        (**(code **)(*piVar1 + 0x3c))();
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < (uint)param_1[0x2a]);
  }
  return;
}

