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
extern unsigned int lbl_820959F8;


undefined8 fn_82A7CF10(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  
  fVar2 = lbl_82002C5C;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  fVar1 = lbl_82002AE0 / (float)(longlong)*(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x3c) == 1) {
    iVar6 = 0;
    **(int **)(param_1 + 0x19c) = **(int **)(param_1 + 0x154) + -1;
    if (0 < **(int **)(param_1 + 0x154)) {
      puVar8 = &lbl_820959F8;
      do {
        if (((longlong)*(float *)(param_1 + 0x18c) & 0xffffffffU) < (ulonglong)*puVar8) {
          **(int **)(param_1 + 0x19c) = iVar6;
          break;
        }
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar6 < **(int **)(param_1 + 0x154));
    }
    if (iVar6 == **(int **)(param_1 + 0x154)) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (**(int **)(param_1 + 0x19c) < 1) {
      return 0xffffffff80040000;
    }
  }
  else if (0 < *(int *)(param_1 + 0xf4)) {
    piVar3 = (int *)(*(int *)(param_1 + 0x158) + 4);
    iVar6 = 0;
    do {
      iVar7 = 1;
      *(int *)(*(int *)(param_1 + 0x19c) + iVar6) = *(int *)(iVar6 + *(int *)(param_1 + 0x154)) + -1
      ;
      piVar5 = piVar3;
      if (1 < *(int *)(iVar6 + *(int *)(param_1 + 0x154))) {
        do {
          if ((int)((float)(longlong)(*(int *)(param_1 + 0xfc) / (1 << (uVar4 & 0x3f))) *
                    *(float *)(param_1 + 0x18c) * fVar1 + fVar2) < *piVar5) {
            *(int *)(*(int *)(param_1 + 0x19c) + iVar6) = iVar7 + -1;
            break;
          }
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar7 < *(int *)(iVar6 + *(int *)(param_1 + 0x154)));
      }
      if (*(int *)(*(int *)(param_1 + 0x19c) + iVar6) < 1) {
        return 0xffffffff80040000;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 0x1d;
      iVar6 = iVar6 + 4;
    } while ((int)uVar4 < *(int *)(param_1 + 0xf4));
  }
  *(undefined4 *)(param_1 + 400) = **(undefined4 **)(param_1 + 0x19c);
  return 0;
}

