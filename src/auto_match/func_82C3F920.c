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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820F3FA0;


undefined8 fn_82C3F920(int param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  fVar4 = lbl_82002C5C;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  fVar3 = lbl_82002AE0 / (float)(longlong)*(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x3c) == 1) {
    iVar8 = 0;
    **(int **)(param_1 + 0x19c) = **(int **)(param_1 + 0x154) + -1;
    if (0 < **(int **)(param_1 + 0x154)) {
      puVar10 = &lbl_820F3FA0;
      do {
        if (((longlong)*(float *)(param_1 + 0x18c) & 0xffffffffU) < (ulonglong)*puVar10) {
          **(int **)(param_1 + 0x19c) = iVar8;
          break;
        }
        iVar8 = iVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar8 < **(int **)(param_1 + 0x154));
    }
    if (iVar8 == **(int **)(param_1 + 0x154)) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (**(int **)(param_1 + 0x19c) < 1) {
      return 0xffffffff80040000;
    }
  }
  else if (0 < *(int *)(param_1 + 0xf4)) {
    piVar5 = (int *)(*(int *)(param_1 + 0x158) + 4);
    iVar8 = 0;
    do {
      uVar2 = 1 << (uVar6 & 0x3f);
      trapWord(6,(ulonglong)uVar2,0);
      iVar9 = 1;
      *(int *)(*(int *)(param_1 + 0x19c) + iVar8) = *(int *)(iVar8 + *(int *)(param_1 + 0x154)) + -1
      ;
      uVar1 = *(uint *)(param_1 + 0xfc);
      trapWord(5,(ulonglong)uVar2 &
                 ~((((ulonglong)uVar1 & 0x7fffffff) << 1 | (ulonglong)(uVar1 >> 0x1f)) - 1),0xffff);
      piVar7 = piVar5;
      if (1 < *(int *)(iVar8 + *(int *)(param_1 + 0x154))) {
        do {
          if ((int)((float)(longlong)((int)uVar1 / (int)uVar2) * *(float *)(param_1 + 0x18c) * fVar3
                   + fVar4) < *piVar7) {
            *(int *)(*(int *)(param_1 + 0x19c) + iVar8) = iVar9 + -1;
            break;
          }
          iVar9 = iVar9 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar9 < *(int *)(iVar8 + *(int *)(param_1 + 0x154)));
      }
      if (*(int *)(*(int *)(param_1 + 0x19c) + iVar8) < 1) {
        return 0xffffffff80040000;
      }
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 0x1d;
      iVar8 = iVar8 + 4;
    } while ((int)uVar6 < *(int *)(param_1 + 0xf4));
  }
  *(undefined4 *)(param_1 + 400) = **(undefined4 **)(param_1 + 0x19c);
  return 0;
}

