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
#define NAN(x) ((x) != (x))
extern int fn_822315A0();
extern int fn_822C72E0();
extern int fn_82330068();
extern int fn_82330618();
extern int fn_8288B760();
extern int fn_828AB870();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_8232FCB0(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar6;
  int iVar5;
  longlong lVar4;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  
  piVar10 = *(int **)(*(int *)(param_1 + 0xc) + 0x168);
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      fn_82330068(param_1,1);
    }
  }
  else if (*(int *)(param_1 + 0x28) == 1) {
    if (*(int *)(param_1 + 0x14) == 0) {
      if ((((piVar10 != (int *)0x0) && (cVar6 = fn_8288B760(piVar10), cVar6 == '\0')) &&
          (*(int *)(param_1 + 0x38) == 0)) && (iVar5 = piVar10[0x30], piVar10[0x30] = 0, iVar5 != 0)
         ) {
        fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20),
                          0xffffffff821acc28);
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
    }
    else {
      fn_82330618();
      piVar1 = *(int **)(param_1 + 0x14);
      fVar2 = lbl_821CA460 - (float)(uint)(piVar1[1] - *piVar1 >> 3) / (float)(uint)piVar1[0x40];
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar2 = lbl_821CC160;
      }
      fVar3 = lbl_821CA460;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar2 - lbl_821CA460 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar2 - lbl_821CA460) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar3 = fVar2;
      }
      *(float *)(*(int *)(param_1 + 0xc) + 0x794) = fVar3;
      if (**(int **)(param_1 + 0x14) == (*(int **)(param_1 + 0x14))[1]) {
        if (piVar10 == (int *)0x0) {
          lVar4 = (longlong)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          lbl_83265A28 = (int)lVar4;
          if (lVar4 < 1) {
            uVar7 = 0xffffffff821afe68;
          }
          else {
            uVar7 = 0xffffffff821acc28;
          }
        }
        else {
          uVar7 = 0xffffffff821acc28;
        }
        fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20),uVar7);
        iVar5 = *(int *)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        if (iVar5 != 0) {
          fn_822315A0();
        }
        if ((piVar10 != (int *)0x0) && (cVar6 = fn_8288B760(piVar10), cVar6 != '\0')) {
          iVar5 = (**(code **)(*piVar10 + 8))(piVar10);
          piVar10 = (int *)(iVar5 + 0x390);
          uVar9 = (ulonglong)*(uint *)(*(int *)(iVar5 + 0x3a8) + 0x60) + 1;
          lVar4 = (**(code **)(*piVar10 + 0x3c))(piVar10);
          uVar8 = lVar4 + 1;
          if ((uVar9 & 0xffffffff) <= (uVar8 & 0xffffffff)) {
            uVar8 = uVar8 - uVar9;
          }
          fn_828AB870(piVar10,uVar8);
        }
      }
    }
  }
  return;
}

