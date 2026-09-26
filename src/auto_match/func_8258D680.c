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
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_824CD420();
extern int fn_8265CA20();
extern int fn_82BE3DD0();


/* WARNING: Removing unreachable block (ram,0x8258d704) */
/* WARNING: Removing unreachable block (ram,0x8258d708) */
/* WARNING: Removing unreachable block (ram,0x8258d71c) */
/* WARNING: Removing unreachable block (ram,0x8258d734) */
/* WARNING: Removing unreachable block (ram,0x8258d748) */
/* WARNING: Removing unreachable block (ram,0x8258d74c) */

void fn_8258D680(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  if ((*(int *)(param_1 + 0x1a0) != 0) && (*(int *)(param_1 + 500) != 0)) {
    puVar4 = (undefined4 *)(param_1 + 400);
    if (0xf < *(uint *)(param_1 + 0x1a4)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    fn_82BE3DD0(puVar4);
  }
  puVar4 = (undefined4 *)(param_1 + 400);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (0xf < *(uint *)(param_1 + 0x1a4)) {
    puVar4 = (undefined4 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  piVar2 = *(int **)(param_1 + 0x1d0);
  if (piVar2 != *(int **)(param_1 + 0x1d4)) {
    piVar3 = *(int **)(param_1 + 0x1d4);
    if (piVar2 != piVar3) {
      piVar6 = piVar2 + 1;
      do {
        if (*piVar6 != 0) {
          fn_822315A0();
        }
        piVar5 = piVar6 + 1;
        piVar6 = piVar6 + 2;
      } while (piVar5 != piVar3);
    }
    *(int **)(param_1 + 0x1d4) = piVar2;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e4) + 4);
  cVar1 = *(char *)((int)piVar2 + 0x31);
  while (cVar1 == '\0') {
    fn_824CD420(param_1 + 0x1e0,piVar2[2]);
    piVar3 = (int *)*piVar2;
    fn_82230300(piVar2 + 3,1,0);
    fn_8265CA20(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x31);
  }
  *(int *)(*(int *)(param_1 + 0x1e4) + 4) = *(int *)(param_1 + 0x1e4);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(int *)(*(int *)(param_1 + 0x1e4) + 8) = *(int *)(param_1 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0xffc) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  return;
}

