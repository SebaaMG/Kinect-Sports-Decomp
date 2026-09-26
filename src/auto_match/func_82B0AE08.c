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
extern int fn_82ACA5E0();
extern int fn_82B09C40();
extern int fn_82B83718();


undefined8 fn_82B0AE08(undefined8 param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  char cVar5;
  int iVar4;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  
LAB_82b0ae1c:
  uVar6 = 0;
  iVar7 = 0x2c;
LAB_82b0ae24:
  uVar8 = (ulonglong)*(uint *)(param_2 + 8);
  if ((*(uint *)(param_2 + 8) >> 0x13 & 7) <= uVar6) {
    return 0;
  }
  iVar3 = *(int *)(iVar7 + param_2);
  iVar1 = *(int *)(iVar3 + 0xc);
  cVar5 = fn_82ACA5E0(iVar1);
  if ((cVar5 != '\0') && ((*(uint *)(iVar1 + 8) & 0x1c000) < 0x10000)) {
    uVar9 = 0;
    for (piVar10 = (int *)(param_2 + 0x2c);
        ((uVar9 & 0xffffffff) < (uVar8 >> 0x13 & 7) && (*piVar10 != iVar3)); piVar10 = piVar10 + 1)
    {
      if (*(int *)(*piVar10 + 0xc) != iVar1) {
        iVar4 = fn_82B09C40(param_1,iVar1);
        if (iVar4 != 0) {
          fn_82B83718(param_1,*(undefined4 *)(param_2 + 0x1c));
          return 1;
        }
        uVar8 = (ulonglong)*(uint *)(param_2 + 8);
        if ((*(uint *)(param_2 + 8) & 0x3f80) == 0x3980) {
          puVar2 = *(uint **)(iVar1 + 4);
          goto LAB_82b0aec0;
        }
      }
      uVar9 = uVar9 + 1;
    }
    goto LAB_82b0af0c;
  }
  goto LAB_82b0af14;
LAB_82b0aec0:
  if (puVar2 == (uint *)0x0) goto LAB_82b0af00;
  param_2 = puVar2[4];
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x3f80) == 0x3700)) &&
     ((*puVar2 & 0xe000000) != 0)) goto LAB_82b0af04;
  puVar2 = (uint *)puVar2[2];
  goto LAB_82b0aec0;
LAB_82b0af00:
  param_2 = 0;
LAB_82b0af04:
  if (param_2 != 0) goto LAB_82b0ae1c;
LAB_82b0af0c:
  if (param_2 == 0) {
    return 0;
  }
LAB_82b0af14:
  uVar6 = uVar6 + 1;
  iVar7 = iVar7 + 4;
  goto LAB_82b0ae24;
}

