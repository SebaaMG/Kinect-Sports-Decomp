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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82522588();
extern unsigned int iStack_3c;
extern unsigned int lbl_821CC160;


void fn_824932C0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar1 = *(int **)(param_1 + 0x5c);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    puVar3 = (uint *)*piVar1;
    uVar6 = (ulonglong)*puVar3;
    if (uVar6 != puVar3[1]) {
      dVar7 = (double)lbl_821CC160;
      do {
        piVar5 = (int *)fn_82522588(auStack_40,uVar6);
        iVar4 = *piVar5;
        *(float *)(iVar4 + 0x2d0) = (float)dVar7;
        *(undefined4 *)(iVar4 + 0x2a8) = 0x831d33c8;
        *(undefined4 *)(iVar4 + 0x2b4) = uVar2;
        *(undefined4 *)(iVar4 + 0x284) = 2;
        if (iStack_3c != 0) {
          fn_822315A0();
        }
        uVar6 = uVar6 + 8;
      } while ((uVar6 & 0xffffffff) != (ulonglong)*(uint *)(*piVar1 + 4));
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}

