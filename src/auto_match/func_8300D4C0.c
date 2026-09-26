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
extern int fn_83036648();
extern int fn_83036710();
extern unsigned int iStack_60;


void fn_8300D4C0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iStack_60;
  int aiStack_5c [23];
  
  uVar2 = 0;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    do {
      uVar3 = 0;
      piVar6 = param_1 + (uVar2 + 1) * 3;
      iVar4 = param_1[(uVar2 + 1) * 3];
      if (piVar6[1] - iVar4 >> 3 != 0) {
        iVar5 = 0;
        do {
          iVar4 = iVar5 + iVar4;
          if (*(int *)(iVar4 + 4) != 0) {
            iVar1 = *param_1;
            uVar7 = 0;
            if (param_1[1] - iVar1 >> 3 != 0) {
              iVar8 = 0;
              do {
                fn_83036648(*(undefined4 *)(iVar1 + 4),uVar2,*(undefined4 *)(iVar5 + *piVar6),
                                &iStack_60,aiStack_5c);
                if ((iStack_60 != 0) && (*(short *)(iStack_60 + 0xe) != 0)) {
                  (**(code **)(**(int **)(iVar4 + 4) + 0x18))();
                }
                if ((aiStack_5c[0] != 0) && (*(short *)(aiStack_5c[0] + 0xe) != 0)) {
                  (**(code **)(**(int **)(iVar4 + 4) + 0x1c))();
                }
                uVar7 = uVar7 + 1;
                iVar8 = iVar8 + 8;
                iVar1 = iVar8 + *param_1;
              } while (uVar7 < (uint)(param_1[1] - *param_1 >> 3));
            }
            (**(code **)(**(int **)(iVar4 + 4) + 0x20))();
          }
          iVar4 = *piVar6;
          uVar3 = uVar3 + 1;
          iVar5 = iVar5 + 8;
        } while (uVar3 < (uint)(piVar6[1] - iVar4 >> 3));
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)((int)param_1 + 0x4d));
  }
  iVar4 = *param_1;
  uVar2 = 0;
  if (param_1[1] - iVar4 >> 3 != 0) {
    iVar5 = 0;
    do {
      fn_83036710(*(undefined4 *)(iVar4 + 4));
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + 8;
      iVar4 = iVar5 + *param_1;
    } while (uVar2 < (uint)(param_1[1] - *param_1 >> 3));
  }
  return;
}

