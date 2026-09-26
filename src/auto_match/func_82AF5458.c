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


void fn_82AF5458(undefined8 param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_2 + 0x20);
  piVar3 = (int *)(param_2 + 0x20);
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    puVar2 = (uint *)*piVar1;
    uVar5 = 0;
    if ((*puVar2 & 0x1fff) != 0) {
      puVar4 = puVar2 + 6;
      do {
        if (*puVar4 == param_2) {
          puVar2[uVar5 + 6] = param_3;
          *piVar3 = piVar1[1];
          piVar1[1] = *(int *)(param_3 + 0x20);
          *(int **)(param_3 + 0x20) = piVar1;
          break;
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 < (*puVar2 & 0x1fff));
    }
    if (uVar5 == (*puVar2 & 0x1fff)) {
      piVar3 = piVar1 + 1;
    }
    piVar1 = (int *)*piVar3;
  } while( true );
}

