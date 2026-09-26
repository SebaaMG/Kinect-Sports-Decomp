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


void fn_827C86F0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1[0x2b] == 0) {
    if (4 < param_1[0xf]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1a;
      *(int *)(*param_1 + 0x18) = param_1[0xf];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar4 = 0;
    param_1[0x39] = param_1[0xf];
    if (0 < param_1[0xf]) {
      iVar6 = 0;
      piVar5 = param_1 + 0x39;
      do {
        iVar4 = iVar4 + 1;
        iVar2 = param_1[0x11] + iVar6;
        iVar6 = iVar6 + 0x54;
        piVar5 = piVar5 + 1;
        *piVar5 = iVar2;
      } while (iVar4 < param_1[0xf]);
    }
    param_1[0x4b] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0x3f;
    param_1[0x4e] = 0;
  }
  else {
    iVar4 = 0;
    piVar5 = (int *)(*(int *)(param_1[0x4f] + 0x1c) * 0x24 + param_1[0x2b]);
    param_1[0x39] = *piVar5;
    if (0 < *piVar5) {
      piVar1 = param_1 + 0x39;
      piVar3 = piVar5;
      do {
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 1;
        *piVar1 = *piVar3 * 0x54 + param_1[0x11];
      } while (iVar4 < *piVar5);
    }
    param_1[0x4b] = piVar5[5];
    param_1[0x4c] = piVar5[6];
    param_1[0x4d] = piVar5[7];
    param_1[0x4e] = piVar5[8];
  }
  return;
}

