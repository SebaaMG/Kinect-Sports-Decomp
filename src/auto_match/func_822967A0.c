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
extern unsigned int *auStack_48;
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_8223FE60();
extern int fn_82240070();
extern int fn_82296E38();
extern int fn_82297388();
extern int fn_82297CF0();


int * fn_822967A0(int *param_1,longlong param_2)

{
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar1;
  short sVar5;
  int iVar4;
  char *pcVar7;
  longlong lVar6;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int aiStack_50 [2];
  undefined1 auStack_48 [4];
  char cStack_44;
  
  uVar8 = 0;
  lVar6 = param_2;
  do {
    pcVar7 = (char *)lVar6;
    lVar6 = lVar6 + 1;
  } while (*pcVar7 != '\0');
  uVar10 = (lVar6 - param_2) - 1U & 0xffffffff;
  lVar6 = *(longlong *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  if ((lVar6 < 1) || (lVar9 = lVar6 - uVar10, lVar6 <= (longlong)uVar10)) {
    lVar9 = 0;
  }
  fn_82297CF0(auStack_48,param_1);
  if (cStack_44 == '\0') {
    uVar8 = 4;
    goto LAB_82296978;
  }
  iVar4 = **(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x30);
  aiStack_50[0] = iVar4;
  fn_8223F508(iVar4);
  piVar2 = (int *)fn_82297388(aiStack_50);
  if ((iVar4 != 0) && (puVar3 = (undefined4 *)fn_8223F5A0(iVar4), puVar3 != (undefined4 *)0x0)
     ) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x14) & 0x1c0) != 0x40) {
    for (; 0 < lVar9; lVar9 = lVar9 + -1) {
      sVar5 = fn_82296E38(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                              *(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
      if (sVar5 == -1) goto LAB_82296960;
    }
  }
  do {
    if ((longlong)uVar10 < 1) break;
    uVar1 = (**(code **)(*piVar2 + 0x28))(piVar2,*(undefined1 *)param_2);
    sVar5 = fn_82296E38(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),uVar1);
    if (sVar5 == -1) {
      uVar8 = 4;
    }
    uVar10 = uVar10 - 1;
    param_2 = param_2 + 1;
  } while (uVar8 == 0);
  if (uVar8 == 0) {
    for (; 0 < lVar9; lVar9 = lVar9 + -1) {
      sVar5 = fn_82296E38(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                              *(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
      if (sVar5 == -1) goto LAB_82296960;
    }
  }
LAB_82296964:
  *(undefined8 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20) = 0;
LAB_82296978:
  iVar4 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar8 != 0) {
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar8;
    if (*(int *)(iVar4 + 0x38) == 0) {
      uVar8 = uVar8 | 4;
    }
    fn_82240070(iVar4,uVar8,0);
  }
  fn_8223FE60(auStack_48);
  return param_1;
LAB_82296960:
  uVar8 = 4;
  goto LAB_82296964;
}

