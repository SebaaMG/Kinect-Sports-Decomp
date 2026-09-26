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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82DF0E70();
extern int fn_82DF1050();
extern int fn_82DF1108();
extern int fn_82DF1328();


void fn_82DF13F0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7,char param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  iVar5 = (int)param_5;
  if (param_7 == '\0') {
    if (param_8 != '\0') {
      if (*(int *)(param_2 + 0x24) == *(int *)(param_2 + 0x2c)) {
        if (*(int *)(param_2 + 0x24) != 0) {
          fn_82DF1050(param_2,0);
        }
        iVar1 = *(int *)(param_2 + 0x18);
        iVar6 = 0;
        puVar3 = (undefined4 *)(iVar5 + 0x120U & 0xfffffff0);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        if (0 < iVar1) {
          iVar5 = 0;
          do {
            piVar2 = *(int **)(*(int *)(param_2 + 0x14) + iVar5);
            (**(code **)(*piVar2 + 0x14))(piVar2,auStack_50,0);
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar6 < *(int *)(param_2 + 0x18));
        }
      }
      else {
        fn_82DF1328(param_2,param_6,param_5,param_4);
        iVar1 = *(int *)(param_2 + 0x18);
        iVar6 = 0;
        puVar3 = (undefined4 *)((int)param_6 + 0x30U & 0xfffffff0);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (undefined4 *)(iVar5 + 0x120U & 0xfffffff0);
        uVar10 = *puVar4;
        uVar11 = puVar4[1];
        uVar12 = puVar4[2];
        uVar13 = puVar4[3];
        puVar4 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        puVar3 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
        *puVar3 = uVar10;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
        puVar3[3] = uVar13;
        if (0 < iVar1) {
          iVar5 = 0;
          do {
            piVar2 = *(int **)(*(int *)(param_2 + 0x14) + iVar5);
            (**(code **)(*piVar2 + 0x14))(piVar2,auStack_60,auStack_70);
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar6 < *(int *)(param_2 + 0x18));
        }
      }
    }
  }
  else {
    fn_82DF1108(param_2,param_6,param_5,param_4);
    iVar1 = *(int *)(param_2 + 0x18);
    iVar6 = 0;
    puVar3 = (undefined4 *)(iVar5 + 0x120U & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        piVar2 = *(int **)(*(int *)(param_2 + 0x14) + iVar5);
        (**(code **)(*piVar2 + 0x14))(piVar2,auStack_80,0);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < *(int *)(param_2 + 0x18));
    }
  }
  fn_82DF0E70(param_1,param_2);
  return;
}

