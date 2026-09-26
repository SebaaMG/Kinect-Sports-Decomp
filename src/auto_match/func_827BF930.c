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
extern int fn_827BEAC8();
extern int fn_827BF2B8();
extern int fn_827C1A20();
extern int fn_82F68CC0();


void fn_827BF930(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  short *psVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  if (param_2[5] != 100) {
    *(undefined4 *)(*param_2 + 0x14) = 0x14;
    *(int *)(*param_2 + 0x18) = param_2[5];
    (**(code **)*param_2)(param_2);
  }
  param_2[7] = *(int *)(param_1 + 0x1c);
  param_2[8] = *(int *)(param_1 + 0x20);
  param_2[9] = *(int *)(param_1 + 0x24);
  param_2[10] = *(int *)(param_1 + 0x28);
  fn_827BF2B8(param_2);
  fn_827BEAC8(param_2,*(undefined4 *)(param_1 + 0x28));
  piVar7 = (int *)(param_1 + 0x90);
  piVar8 = param_2 + 0x12;
  lVar5 = 4;
  iVar3 = 0;
  param_2[0xe] = *(int *)(param_1 + 0xc0);
  *(undefined1 *)((int)param_2 + 0xb3) = *(undefined1 *)(param_1 + 0x10a);
  do {
    if (*piVar7 != 0) {
      if (*piVar8 == 0) {
        iVar2 = fn_827C1A20(param_2);
        *piVar8 = iVar2;
      }
      fn_82F68CC0(*piVar8,*piVar7,0x80);
      *(undefined1 *)(*piVar8 + 0x80) = 0;
    }
    lVar5 = lVar5 + -1;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
  } while (lVar5 != 0);
  iVar2 = *(int *)(param_1 + 0x24);
  param_2[0xf] = iVar2;
  if ((iVar2 < 1) || (10 < iVar2)) {
    *(undefined4 *)(*param_2 + 0x14) = 0x1a;
    *(int *)(*param_2 + 0x18) = param_2[0xf];
    *(undefined4 *)(*param_2 + 0x1c) = 10;
    (**(code **)*param_2)(param_2);
  }
  puVar9 = *(undefined4 **)(param_1 + 0xc4);
  puVar4 = (undefined4 *)param_2[0x11];
  if (0 < param_2[0xf]) {
    do {
      *puVar4 = *puVar9;
      puVar4[2] = puVar9[2];
      puVar4[3] = puVar9[3];
      iVar2 = puVar9[4];
      puVar4[4] = iVar2;
      if (((iVar2 < 0) || (3 < iVar2)) || (*(int *)((iVar2 + 0x24) * 4 + param_1) == 0)) {
        *(undefined4 *)(*param_2 + 0x14) = 0x34;
        *(int *)(*param_2 + 0x18) = iVar2;
        (**(code **)*param_2)(param_2);
      }
      psVar6 = *(short **)((iVar2 + 0x24) * 4 + param_1);
      if (puVar9[0x13] != 0) {
        iVar1 = puVar9[0x13] - (int)psVar6;
        lVar5 = 0x40;
        do {
          if (*(short *)(iVar1 + (int)psVar6) != *psVar6) {
            *(undefined4 *)(*param_2 + 0x14) = 0x2c;
            *(int *)(*param_2 + 0x18) = iVar2;
            (**(code **)*param_2)(param_2);
          }
          lVar5 = lVar5 + -1;
          psVar6 = psVar6 + 1;
        } while (lVar5 != 0);
      }
      iVar3 = iVar3 + 1;
      puVar9 = puVar9 + 0x15;
      puVar4 = puVar4 + 0x15;
    } while (iVar3 < param_2[0xf]);
  }
  if (*(char *)(param_1 + 0x100) != '\0') {
    if (*(char *)(param_1 + 0x101) == '\x01') {
      *(undefined1 *)((int)param_2 + 0xc5) = 1;
      *(undefined1 *)((int)param_2 + 0xc6) = *(undefined1 *)(param_1 + 0x102);
    }
    *(undefined1 *)((int)param_2 + 199) = *(undefined1 *)(param_1 + 0x103);
    *(undefined2 *)(param_2 + 0x32) = *(undefined2 *)(param_1 + 0x104);
    *(undefined2 *)((int)param_2 + 0xca) = *(undefined2 *)(param_1 + 0x106);
  }
  return;
}

