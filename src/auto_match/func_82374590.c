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
extern int fn_822315A0();


/* WARNING: Removing unreachable block (ram,0x823745bc) */
/* WARNING: Removing unreachable block (ram,0x823745c4) */
/* WARNING: Removing unreachable block (ram,0x823745d8) */
/* WARNING: Removing unreachable block (ram,0x823745f0) */
/* WARNING: Removing unreachable block (ram,0x82374604) */
/* WARNING: Removing unreachable block (ram,0x82374608) */

void fn_82374590(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x184);
  if (piVar1 != *(int **)(param_1 + 0x188)) {
    piVar2 = *(int **)(param_1 + 0x188);
    if (piVar1 != piVar2) {
      piVar4 = piVar1 + 1;
      do {
        if (*piVar4 != 0) {
          fn_822315A0();
        }
        piVar3 = piVar4 + 1;
        piVar4 = piVar4 + 2;
      } while (piVar3 != piVar2);
    }
    *(int **)(param_1 + 0x188) = piVar1;
  }
  return;
}

