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
extern int fn_83081A78();


void fn_82D95B28(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x20);
  iVar2 = 0;
  if (*(ushort *)(param_1 + 0x24) != 0) {
    piVar1 = (int *)*piVar3;
    do {
      if (*piVar1 == 0) {
        if (-1 < iVar2) {
          ((int *)*piVar3)[iVar2] = param_2;
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x24));
  }
  if (*(ushort *)(param_1 + 0x24) == (*(ushort *)(param_1 + 0x26) & 0x3fff)) {
    fn_83081A78(piVar3,4);
  }
  *(int *)((uint)*(ushort *)(param_1 + 0x24) * 4 + *piVar3) = param_2;
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  return;
}

