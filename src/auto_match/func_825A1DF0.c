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
extern int fn_825A27B8();


void fn_825A1DF0(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)fn_825A27B8();
  if (piVar2 != (int *)0x0) {
    piVar5 = piVar2 + 2;
    iVar4 = 0;
    uVar3 = 0;
    if (0 < *piVar2) {
      do {
        if (piVar5 == (int *)0x0) break;
        iVar4 = iVar4 + 1;
        pbVar1 = (byte *)((int)piVar5 + 1);
        uVar3 = piVar5[1] | uVar3;
        piVar5 = (int *)((uint)*pbVar1 + (int)piVar5);
        if (*pbVar1 == 0) {
          piVar5 = (int *)0x0;
        }
      } while (iVar4 < *piVar2);
    }
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) | uVar3;
  }
  *(undefined4 *)(param_1 + 0x8b4) = 0;
  return;
}

