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
extern int fn_82CE5410();
extern int fn_83081C30();
extern unsigned int iStack_7c;
extern unsigned int uStack_78;


bool fn_82DAFBC0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piStack_80;
  int iStack_7c;
  uint uStack_78;
  int aiStack_74 [29];
  
  iVar1 = *(int *)(param_1 + 0x4c);
  lVar6 = 0;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      iVar7 = 0;
      iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x48));
      if (0 < *(int *)(iVar1 + 100)) {
        iVar8 = 0;
        do {
          iVar9 = *(int *)(iVar8 + *(int *)(iVar1 + 0x60) + 4);
          iVar9 = *(char *)(iVar9 + 0x10) + iVar9;
          if ((*(char *)(iVar9 + 0xe8) != '\x05') &&
             (fn_83081C30(param_2,lVar6,*(undefined2 *)(iVar9 + 0xa8)),
             **(int **)*param_2 == -param_2[1])) {
            return true;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 8;
        } while (iVar7 < *(int *)(iVar1 + 100));
      }
      iVar1 = *(int *)(param_1 + 0x4c);
      lVar6 = lVar6 + 1;
      iVar5 = iVar5 + 4;
    } while ((int)lVar6 < iVar1);
  }
  iVar5 = 0;
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      iVar8 = 0;
      iVar7 = *(int *)(iVar1 + *(int *)(param_1 + 0x48));
      if (*(short *)(iVar7 + 0xb0) != 0) {
        iVar9 = 0;
        do {
          iVar4 = iVar9 + *(int *)(iVar7 + 0xac);
          iVar2 = *(int *)(iVar4 + 4);
          if (((*(char *)(iVar2 + 0xe8) != '\x05') &&
              (iVar4 = *(int *)(iVar4 + 8), *(char *)(iVar4 + 0xe8) != '\x05')) &&
             (fn_83081C30(param_2,*(undefined2 *)(iVar2 + 0xa8),*(undefined2 *)(iVar4 + 0xa8)),
             **(int **)*param_2 == -param_2[1])) {
            return true;
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x30;
        } while (iVar8 < (int)(uint)*(ushort *)(iVar7 + 0xb0));
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x4c));
  }
  piStack_80 = aiStack_74;
  iStack_7c = 0;
  iVar1 = 0;
  uStack_78 = 0x8000000a;
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + *(int *)(param_1 + 0x38)) != 0) {
        iStack_7c = 0;
        piVar3 = *(int **)(iVar5 + *(int *)(param_1 + 0x38));
        (**(code **)(*piVar3 + 0x10))(piVar3,&piStack_80);
        iVar8 = 0;
        iVar7 = -1;
        piVar3 = piStack_80;
        do {
          if (iStack_7c <= iVar8) goto LAB_82dafe2c;
          if (*(char *)(*piVar3 + 0xe8) != '\x05') {
            iVar7 = iVar8;
          }
          iVar8 = iVar8 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar7 == -1);
        if (iVar8 < iStack_7c) {
          iVar9 = iVar8 * 4;
          piVar3 = piStack_80;
          iVar2 = iStack_7c;
          do {
            if ((*(char *)(*(int *)(iVar9 + (int)piVar3) + 0xe8) != '\x05') &&
               (fn_83081C30(param_2,*(undefined2 *)(piVar3[iVar7] + 0xa8),
                                *(undefined2 *)(*(int *)(iVar9 + (int)piVar3) + 0xa8)),
               piVar3 = piStack_80, iVar2 = iStack_7c, **(int **)*param_2 == -param_2[1])) {
              iVar1 = fn_82CE5410();
              iStack_7c = 0;
              if ((uStack_78 & 0x80000000) == 0) {
                (**(code **)(**(int **)(iVar1 + 0x10) + 0x10))
                          (*(int **)(iVar1 + 0x10),piStack_80,uStack_78 & 0x3fffffff,4);
              }
              return true;
            }
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar8 < iVar2);
        }
      }
LAB_82dafe2c:
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x3c));
  }
  iVar1 = fn_82CE5410();
  iStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar1 + 0x10) + 0x10))
              (*(int **)(iVar1 + 0x10),piStack_80,uStack_78 & 0x3fffffff,4);
  }
  return -**(int **)*param_2 == param_2[1];
}

