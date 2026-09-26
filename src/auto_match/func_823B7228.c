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
extern int fn_82381BC0();
extern int fn_823B6790();
extern int fn_8243C3D0();
extern int fn_8288B760();
extern int fn_8289A0E0();
extern int fn_8289AB78();
extern int fn_828AB870();


void fn_823B7228(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar6;
  int *piVar7;
  longlong lVar4;
  char cVar8;
  char cVar9;
  longlong lVar5;
  undefined4 *apuStack_30 [12];
  
  if (param_1[0x14] == 0) goto LAB_823b75d8;
  iVar6 = fn_823B6790();
  if (iVar6 == 0) goto LAB_823b75d8;
  bVar2 = true;
  piVar7 = (int *)(param_1[3] + -0x68);
  if (param_1[3] == 0) {
    piVar7 = (int *)0x0;
  }
  lVar4 = (**(code **)(*piVar7 + 8))();
  iVar6 = fn_8243C3D0(lVar4 + 0x9c,0);
  if (iVar6 == 1) {
LAB_823b72c8:
    bVar2 = false;
  }
  else {
    piVar7 = (int *)(param_1[3] + -0x68);
    if (param_1[3] == 0) {
      piVar7 = (int *)0x0;
    }
    lVar4 = (**(code **)(*piVar7 + 8))();
    iVar6 = fn_8243C3D0(lVar4 + 0xf0,0);
    if (iVar6 == 1) goto LAB_823b72c8;
  }
  piVar7 = (int *)(param_1[3] + -0x68);
  if (param_1[3] == 0) {
    piVar7 = (int *)0x0;
  }
  iVar6 = (**(code **)(*piVar7 + 8))();
  cVar8 = (**(code **)(*(int *)(iVar6 + 0x144) + 0x3c))();
  if (cVar8 == '\0') {
    piVar7 = (int *)(param_1[3] + -0x68);
    if (param_1[3] == 0) {
      piVar7 = (int *)0x0;
    }
    lVar4 = (**(code **)(*piVar7 + 8))();
    cVar8 = fn_8289A0E0(lVar4 + 0x144);
    if (cVar8 == '\0') goto LAB_823b7340;
  }
  else {
LAB_823b7340:
    bVar2 = false;
  }
  piVar7 = (int *)(param_1[3] + -0x68);
  if (param_1[3] == 0) {
    piVar7 = (int *)0x0;
  }
  iVar6 = (**(code **)(*piVar7 + 8))();
  cVar8 = (**(code **)(*(int *)(iVar6 + 0x198) + 0x3c))();
  if (cVar8 == '\0') {
    piVar7 = (int *)(param_1[3] + -0x68);
    if (param_1[3] == 0) {
      piVar7 = (int *)0x0;
    }
    lVar4 = (**(code **)(*piVar7 + 8))();
    cVar8 = fn_8289A0E0(lVar4 + 0x198);
    if (cVar8 == '\0') goto LAB_823b73b8;
  }
  else {
LAB_823b73b8:
    bVar2 = false;
  }
  if (bVar2) {
    lVar4 = (ulonglong)(uint)param_1[3] - 0x68;
    if ((ulonglong)(uint)param_1[3] == 0) {
      lVar4 = 0;
    }
    cVar8 = fn_8288B760(lVar4);
    if (cVar8 != '\0') {
      piVar7 = (int *)(param_1[3] + -0x68);
      if (param_1[3] == 0) {
        piVar7 = (int *)0x0;
      }
      lVar4 = (**(code **)(*piVar7 + 8))();
      cVar8 = fn_8289AB78(lVar4 + 0x9c);
      bVar2 = false;
      if (cVar8 != '\0') {
        piVar7 = (int *)(param_1[3] + -0x68);
        if (param_1[3] == 0) {
          piVar7 = (int *)0x0;
        }
        lVar4 = (**(code **)(*piVar7 + 8))();
        cVar8 = fn_8289AB78(lVar4 + 0xf0);
        bVar2 = cVar8 != '\0';
        if (bVar2) {
          puVar1 = *(undefined4 **)(*param_1 + 0x200);
          apuStack_30[0] = (undefined4 *)*puVar1;
          while (puVar3 = apuStack_30[0], apuStack_30[0] != puVar1) {
            piVar7 = (int *)(param_1[3] + -0x68);
            if (param_1[3] == 0) {
              piVar7 = (int *)0x0;
            }
            iVar6 = (**(code **)(*piVar7 + 8))();
            cVar8 = (**(code **)(*(int *)(iVar6 + 0x144) + 0x38))((int *)(iVar6 + 0x144),puVar3[4]);
            piVar7 = (int *)(param_1[3] + -0x68);
            if (param_1[3] == 0) {
              piVar7 = (int *)0x0;
            }
            iVar6 = (**(code **)(*piVar7 + 8))();
            cVar9 = (**(code **)(*(int *)(iVar6 + 0x198) + 0x38))((int *)(iVar6 + 0x198),puVar3[4]);
            bVar2 = (bool)(cVar9 == '\0' & cVar8 == '\0' & bVar2);
            fn_82381BC0(apuStack_30);
            puVar1 = *(undefined4 **)(*param_1 + 0x200);
          }
        }
      }
    }
  }
  param_1[0x14] = (uint)!bVar2;
  if (bVar2) {
    lVar4 = (ulonglong)(uint)param_1[3] - 0x68;
    if ((ulonglong)(uint)param_1[3] == 0) {
      lVar4 = 0;
    }
    cVar8 = fn_8288B760(lVar4);
    if (cVar8 != '\0') {
      piVar7 = (int *)(param_1[3] + -0x68);
      if (param_1[3] == 0) {
        piVar7 = (int *)0x0;
      }
      iVar6 = (**(code **)(*piVar7 + 8))();
      piVar7 = (int *)(param_1[3] + -0x68);
      if (param_1[3] == 0) {
        piVar7 = (int *)0x0;
      }
      lVar4 = (**(code **)(*(int *)(iVar6 + 0x1ec) + 0x3c))();
      lVar5 = (**(code **)(*piVar7 + 8))(piVar7);
      fn_828AB870(lVar5 + 0x1ec,lVar4 + 1);
      param_1[0x16] = 1;
    }
  }
LAB_823b75d8:
  if ((param_1[0x16] != 0) && (param_1[3] != 0)) {
    cVar8 = fn_8288B760((ulonglong)(uint)param_1[3] - 0x68);
    if (cVar8 != '\0') {
      piVar7 = (int *)(param_1[3] + -0x68);
      if (param_1[3] == 0) {
        piVar7 = (int *)0x0;
      }
      lVar4 = (**(code **)(*piVar7 + 8))();
      cVar8 = fn_8289AB78(lVar4 + 0x1ec);
      if (cVar8 != '\0') {
        iVar6 = param_1[3] + -0x68;
        if (param_1[3] == 0) {
          iVar6 = 0;
        }
        *(undefined4 *)(iVar6 + 0x80) = 1;
        param_1[0x16] = 0;
      }
    }
  }
  return;
}

