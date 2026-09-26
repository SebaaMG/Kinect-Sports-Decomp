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
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826C6070();
extern int fn_826C64E0();
extern int fn_826C65A0();
extern int fn_826C6638();
extern int fn_826CC2A0();


void fn_826CFFF0(undefined8 param_1,int *param_2,int *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int *piVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  int *apiStack_90 [4];
  float afStack_80 [32];
  
  fn_826CC2A0(apiStack_90,param_1);
  if ((apiStack_90[0] == (int *)0x0) ||
     (piVar3 = (int *)(**(code **)(*apiStack_90[0] + 0x54))(apiStack_90[0],0),
     piVar3 != apiStack_90[0])) {
    fn_826C6070(param_1,param_2,param_3,0);
  }
  if (apiStack_90[0] != (int *)0x0) {
    iVar4 = *param_3;
    if (*(int *)(iVar4 + 0xc) < 0) {
      iVar5 = *param_2;
      if (iVar4 == *(int *)(iVar5 + 0x244)) {
        uVar2 = (**(code **)(*apiStack_90[0] + 0x5c))(apiStack_90[0]);
        fn_82696D38(apiStack_90,param_4,uVar2,0xffffffffffffffff,0);
        fn_826C64E0(apiStack_90[0],apiStack_90);
      }
      else if (iVar4 == *(int *)(iVar5 + 0x248)) {
        uVar2 = (**(code **)(*apiStack_90[0] + 0x5c))(apiStack_90[0]);
        dVar8 = (double)fn_826972E0(param_4,uVar2);
        fn_826C65A0((double)(float)dVar8,apiStack_90[0]);
      }
      else if (iVar4 == *(int *)(iVar5 + 0x24c)) {
        uVar2 = (**(code **)(*apiStack_90[0] + 0x5c))(apiStack_90[0]);
        iVar4 = fn_82696958(param_4,uVar2);
        if (iVar4 != 0) {
          *(uint *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
          iVar5 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10);
          if (iVar5 == 7) {
            uVar6 = 0x10;
            if ((int)*(uint *)(iVar4 + 0x38) < 0x11) {
              uVar6 = (ulonglong)*(uint *)(iVar4 + 0x38);
            }
            if (uVar6 != 0) {
              iVar5 = 0;
              uVar7 = uVar6;
              do {
                uVar1 = *(undefined4 *)(*(int *)(iVar4 + 0x34) + iVar5);
                uVar2 = (**(code **)(*apiStack_90[0] + 0x5c))(apiStack_90[0]);
                dVar8 = (double)fn_826972E0(uVar1,uVar2);
                uVar7 = uVar7 - 1;
                *(float *)((int)afStack_80 + iVar5) = (float)dVar8;
                iVar5 = iVar5 + 4;
              } while (uVar7 != 0);
            }
            fn_826C6638(apiStack_90[0],afStack_80,uVar6);
          }
          fn_826824B0(iVar4);
        }
      }
    }
    fn_8267C498(apiStack_90[0]);
  }
  return;
}

