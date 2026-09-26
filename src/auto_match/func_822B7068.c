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
extern int fn_82F68B78();


void fn_822B7068(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  
  piVar1 = *(int **)(param_1 + 0x11c);
  if (*(int *)(*(int *)(*piVar1 + 0x8c0) + 0x90) == 0) {
    fn_82F68B78(param_2);
    return;
  }
  uVar4 = 0;
  piVar3 = piVar1 + 4;
  do {
    if (*piVar3 == param_2) {
      *(undefined4 *)(param_2 + 0x1b4) = 0;
      lVar6 = 2;
      *(undefined1 *)(piVar1 + (uVar4 + 1) * 0x10) = 1;
      puVar5 = (uint *)(param_2 + 0x1dc);
      do {
        puVar2 = puVar5 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = *puVar2 & 0xfffffffd;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      return;
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x10;
  } while (uVar4 < 2);
  return;
}

