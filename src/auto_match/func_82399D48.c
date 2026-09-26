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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8239D390();
extern int fn_824C97F0();
extern int fn_82536070();
extern int fn_82552720();
extern int fn_825529B0();
extern int fn_82552B50();
extern unsigned int lbl_821B3ED0;
extern unsigned int lbl_821B3F50;


void fn_82399D48(int param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  
  piVar7 = (int *)**(int **)(param_1 + 8);
  if (*(int *)(param_1 + 0x178) == 1) {
    fn_8239D390(param_1,(int)*(float *)(*(int *)(((int *)*piVar7)[4] * 4 + *(int *)*piVar7) +
                                             0x20));
  }
  else {
    uVar1 = (uint)*(float *)(*(int *)(((int *)*piVar7)[4] * 4 + *(int *)*piVar7) + 0x20);
    uVar2 = (uint)*(float *)(*(int *)(((int *)piVar7[1])[4] * 4 + *(int *)piVar7[1]) + 0x20);
    if (uVar2 + uVar1 != *(int *)(param_1 + 600)) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x34))();
      piVar7 = (int *)**(int **)(param_1 + 0xa8);
      piVar3 = (int *)(*(int **)(param_1 + 0xa8))[1];
      if (piVar7 != piVar3) {
        if (iVar4 == 0) {
          do {
            fn_824C97F0(*(undefined4 *)(*piVar7 + 0x28),0xffffffff821a6a9c);
            piVar7 = piVar7 + 2;
          } while (piVar7 != piVar3);
        }
        else {
          do {
            fn_824C97F0(*(undefined4 *)(*piVar7 + 0x28),0xffffffff821a6b18);
            piVar7 = piVar7 + 2;
          } while (piVar7 != piVar3);
        }
      }
      if ((uVar1 < 0x1f) && (uVar2 < 0x1f)) {
        *(uint *)(param_1 + 600) = uVar2 + uVar1;
        uVar6 = uVar1;
        if (0x1d < (int)uVar1) {
          uVar6 = 0x1e;
        }
        uVar8 = uVar2;
        if (0x1d < (int)uVar2) {
          uVar8 = 0x1e;
        }
        if (uVar1 == uVar2) {
          fn_82536070(0xffffffff821b4bbc,(&lbl_821B3F50)[uVar6]);
          uVar5 = 0xffffffff821b3d30;
        }
        else {
          fn_82536070(0xffffffff821b4bbc,(&lbl_821B3ED0)[uVar6]);
          uVar5 = ZEXT48((&lbl_821B3ED0)[uVar8]);
        }
        fn_82536070(0xffffffff821b4bd8,uVar5);
        iVar9 = param_1 + 0x244;
        iVar4 = fn_825529B0(iVar9);
        if (iVar4 != 0) {
          fn_82552B50(iVar9,1);
        }
        fn_82552720(param_2 + 0x84c,iVar9,param_1 + 0x250,0,1,0,0);
      }
    }
  }
  return;
}

