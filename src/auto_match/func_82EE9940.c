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
extern int fn_82E4FE40();
extern int fn_82E58B58();
extern int fn_82E58BE8();
extern int fn_82EE80A8();
extern int fn_82EEA360();


undefined8 fn_82EE9940(int *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puStack_50;
  int *apiStack_4c [19];
  
  iVar5 = param_1[0x1d];
  lVar4 = fn_82EE80A8(iVar5);
  lVar6 = *(longlong *)(iVar5 + 0x28);
  piVar8 = param_1 + 0x14;
  RtlEnterCriticalSection(piVar8);
  piVar7 = param_1 + 0x426;
  puVar9 = (uint *)(-(uint)(param_1 + 0x427 != (int *)param_1[0x427]) & (uint)param_1[0x427]);
  if (puVar9 != (uint *)0x0) {
    do {
      puVar10 = (uint *)(-(uint)(param_1 + 0x427 != (int *)*puVar9) & *puVar9);
      puStack_50 = puVar9;
      if (puVar9[5] == 0) {
        fn_82E58B58(param_2);
      }
      else {
        *piVar7 = *piVar7 + -1;
        uVar1 = *puVar9;
        puVar2 = (uint *)puVar9[1];
        *puVar2 = uVar1;
        *(uint **)(uVar1 + 4) = puVar2;
        piVar3 = (int *)puVar9[3];
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3,puVar9);
          puStack_50[3] = 0;
        }
        if (puStack_50 != (uint *)0x0) {
          fn_82E4FE40();
        }
      }
      puVar9 = puVar10;
    } while (puVar10 != (uint *)0x0);
  }
  RtlLeaveCriticalSection(piVar8);
  while (*(int *)(param_2 + 0xe8) != 0) {
    fn_82E58BE8(param_2,&puStack_50);
    (*(code *)puStack_50[2])(puStack_50[3]);
  }
  RtlEnterCriticalSection(piVar8);
  while( true ) {
    iVar5 = fn_82EEA360(param_1 + 0x1e,lVar4 - lVar6,apiStack_4c);
    RtlLeaveCriticalSection(piVar8);
    if (iVar5 != 0) break;
    if (apiStack_4c[0][6] != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    (**(code **)(*apiStack_4c[0] + 8))(apiStack_4c[0]);
    apiStack_4c[0] = (int *)0x0;
    RtlEnterCriticalSection(piVar8);
  }
  RtlEnterCriticalSection(piVar8);
  if ((iVar5 == 2) && (*piVar7 == 0)) {
    param_1[0x42b] = 0;
  }
  RtlLeaveCriticalSection(piVar8);
  return 0;
}

