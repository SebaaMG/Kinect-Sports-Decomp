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
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern int fn_82D74740();
extern unsigned int iStack_260;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;


void fn_82D55DC8(int param_1,int *param_2,undefined4 *param_3,int *param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_270 [16];
  int iStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 *puStack_254;
  undefined1 auStack_250 [592];
  
  piVar2 = (int *)(**(code **)(*(int *)*param_3 + 0x10))();
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar9 = 0;
    do {
      iStack_260 = (**(code **)(*piVar2 + 0x14))
                             (piVar2,*(undefined4 *)(iVar9 + *(int *)(param_1 + 0xc)),auStack_250);
      uStack_258 = param_3[2];
      puVar6 = (undefined4 *)(iVar9 + *(int *)(param_1 + 0xc));
      uStack_25c = *puVar6;
      puStack_254 = param_3;
      pcVar3 = (char *)(**(code **)(*(int *)(param_4[3] + 0xc) + 4))
                                 (auStack_270,param_4[3] + 0xc,param_4,param_2,param_3,piVar2,
                                  *puVar6);
      iVar8 = iVar9 + *(int *)(param_1 + 0xc);
      if (*pcVar3 == '\0') {
        iVar4 = fn_82D74740();
        if (*(int *)(iVar8 + 8) != iVar4) {
          piVar1 = *(int **)(iVar9 + *(int *)(param_1 + 0xc) + 8);
          (**(code **)(*piVar1 + 0x1c))(piVar1,param_5);
          iVar8 = *(int *)(param_1 + 0xc);
          uVar5 = fn_82D74740();
          *(undefined4 *)(iVar9 + iVar8 + 8) = uVar5;
        }
      }
      else {
        iVar4 = fn_82D74740();
        if (*(int *)(iVar8 + 8) == iVar4) {
          iVar8 = *param_4;
          iVar4 = iVar8 + 0x5a0;
          if (param_4[5] == 0) {
            iVar4 = iVar8 + 0x1a0;
          }
          uVar5 = (**(code **)((uint)*(byte *)(*(int *)(*param_2 + 0xc) * 0x20 + iVar4 +
                                              *(int *)(iStack_260 + 0xc)) * 0x14 + iVar8 + 0x9a0))
                            (param_2,&iStack_260,param_4,*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(iVar9 + *(int *)(param_1 + 0xc) + 8) = uVar5;
        }
        else {
          piVar1 = *(int **)(iVar9 + *(int *)(param_1 + 0xc) + 8);
          (**(code **)(*piVar1 + 0x20))(piVar1,param_2,&iStack_260,param_4,param_5);
        }
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iVar7 < *(int *)(param_1 + 0x10));
  }
  return;
}

