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
extern int fn_82250A18();
extern int fn_8288B760();
extern int fn_8288D868();
extern int fn_8288F948();
extern int fn_828904D8();
extern int fn_828A12E8();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int lbl_832975B0;


void fn_82359718(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar5;
  char cVar7;
  char cVar8;
  int *piVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar9;
  
  bVar2 = true;
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) != '\0') {
    if (param_1[0x21] == 0) {
      cVar7 = fn_828AD740(param_1[1]);
      cVar8 = fn_828ACCE8(param_1[1]);
      if (cVar8 == '\0') {
        return;
      }
      if (cVar7 == '\0') {
        iVar5 = param_1[1];
        uVar3 = (**(code **)(*param_1 + 0xbc))(param_1);
        uVar4 = fn_828A12E8(iVar5);
        iVar5 = fn_8288F948(uVar4,uVar3);
        piVar6 = (int *)**(int **)(iVar5 + 4);
        if (piVar6 == *(int **)(iVar5 + 4)) {
          return;
        }
        piVar6 = (int *)piVar6[5];
        param_1[0x21] = (int)piVar6;
        piVar6[0x20] = (int)param_1;
        (**(code **)(*piVar6 + 0x40))();
      }
      else {
        piVar6 = (int *)(**(code **)(*param_1 + 0xb8))(param_1,param_1[1]);
        param_1[0x21] = (int)piVar6;
        (**(code **)(*piVar6 + 0x40))();
        fn_828904D8(piVar6);
      }
    }
    for (puVar9 = (undefined4 *)param_1[8]; puVar9 != (undefined4 *)param_1[9]; puVar9 = puVar9 + 1)
    {
      puVar1 = (undefined4 *)*puVar9;
      for (piVar6 = (int *)*puVar1; piVar6 != (int *)puVar1[1]; piVar6 = piVar6 + 1) {
        iVar5 = *piVar6;
        if ((*(int *)(iVar5 + 0x14) == 0) ||
           ((cVar7 = fn_8288B760(), cVar7 != '\0' &&
            (cVar7 = fn_8288D868(*(undefined4 *)(iVar5 + 0x14)), cVar7 == '\0')))) {
          bVar2 = false;
          break;
        }
        puVar1 = (undefined4 *)*puVar9;
      }
      if (!bVar2) {
        return;
      }
    }
    iVar5 = (**(code **)(*param_1 + 0x94))(param_1);
    if (iVar5 == 0) {
      return;
    }
  }
  param_1[0x22] = 1;
  return;
}

