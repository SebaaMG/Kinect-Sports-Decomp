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
extern unsigned int *auStack_a0;
extern int fn_8253B7C0();
extern unsigned int iStack_58;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_a8;


void fn_82555EA8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [72];
  int iStack_58;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar8 = 0;
    dVar10 = (double)lbl_821CC160;
    dVar11 = (double)lbl_821CA460;
    do {
      piVar2 = *(int **)(iVar8 + *(int *)(param_1 + 0x24));
      if (((piVar2[9] & 0x10000000U) == 0) && ((piVar2[9] & 0x8000000U) == 0)) {
        (**(code **)(**(int **)(*piVar2 + 0x1a8) + 0xc))(*(int **)(*piVar2 + 0x1a8),0);
        piVar1 = *(int **)(*piVar2 + 0x1a8);
        iVar4 = *piVar1;
        fn_8253B7C0(dVar11,dVar11,dVar10);
        uVar3 = fn_8253B7C0();
        (**(code **)(iVar4 + 4))(piVar1,0,uVar3);
        puVar6 = &uStack_a8;
        puVar5 = (undefined8 *)(param_2 + -8);
        lVar9 = 10;
        do {
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar5;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        iStack_58 = piVar2[0x53];
        (**(code **)(**(int **)(*piVar2 + 0x1ac) + 4))
                  (*(int **)(*piVar2 + 0x1ac),auStack_a0,piVar2[2],
                   (longlong)(piVar2[3] - piVar2[2] >> 6) + 1,0xffffffff82196290,0,
                   0xffffffffffffffff);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x28));
  }
  return;
}

