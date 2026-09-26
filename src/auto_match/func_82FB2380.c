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
extern int fn_83037EB8();


undefined8 fn_82FB2380(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb8);
  if (param_2 != 0) {
    piVar8 = (int *)(param_3 + -4);
    do {
      piVar2 = *(int **)(param_1 + 0xbc);
      iVar3 = piVar8[1];
      piVar1 = *(int **)(param_1 + 0xb8);
      for (piVar6 = piVar1; (piVar6 != piVar2 && (*piVar6 != iVar3)); piVar6 = piVar6 + 2) {
      }
      piVar6 = (int *)(-(uint)(piVar2 != piVar6) & (uint)(piVar6 + 1));
      if (piVar6 == (int *)0x0) {
        uVar4 = (int)piVar2 - (int)piVar1 >> 3;
        if (((*(uint *)(param_1 + 0xc0) <= uVar4) &&
            (cVar5 = fn_83037EB8((int *)(param_1 + 0xb8),8), cVar5 == '\0')) ||
           (*(uint *)(param_1 + 0xc0) <= uVar4)) {
          return 2;
        }
        piVar1 = *(int **)(param_1 + 0xbc);
        *(int **)(param_1 + 0xbc) = piVar1 + 2;
        if (piVar1 == (int *)0x0) {
          return 2;
        }
        piVar6 = piVar1 + 1;
        *piVar1 = iVar3;
        if (piVar6 == (int *)0x0) {
          return 2;
        }
      }
      piVar8 = piVar8 + 2;
      uVar7 = uVar7 + 1;
      *piVar6 = *piVar8;
    } while (uVar7 < param_2);
  }
  return 1;
}

