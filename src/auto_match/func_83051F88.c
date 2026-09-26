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
extern int fn_82FA5190();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC978;
extern unsigned int lbl_8326459C;


uint fn_83051F88(int param_1,undefined4 *param_2,float *param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar5;
  longlong lVar4;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  piVar8 = *(int **)(param_1 + 0x58);
  piVar7 = (int *)0x0;
  while( true ) {
    while( true ) {
      piVar6 = piVar8;
      if (piVar6 == (int *)0x0) {
        return 0;
      }
      uVar1 = piVar6[0x1d];
      if ((uVar1 >> 0x1b & 1) == 0) break;
      cVar5 = (**(code **)(*piVar6 + 4))(piVar6);
      if (cVar5 == '\0') goto LAB_8305208c;
      piVar8 = (int *)piVar6[3];
      if (piVar6 == *(int **)(param_1 + 0x58)) {
        *(int **)(param_1 + 0x58) = piVar8;
      }
      else {
        piVar7[3] = (int)piVar8;
      }
      uVar3 = lbl_831BC978;
      if (piVar6 != (int *)0x0) {
        (**(code **)*piVar6)(piVar6,0);
        fn_82FA5190(uVar3,piVar6);
      }
    }
    if (((uVar1 & 0xc0000000) == 0) && ((uVar1 >> 0x18 & 1) != 0)) break;
LAB_8305208c:
    piVar8 = (int *)piVar6[3];
    piVar7 = piVar6;
  }
  dVar9 = (double)(**(code **)(*piVar6 + 0x28))(piVar6);
  piVar8 = (int *)piVar6[3];
  if (piVar8 != (int *)0x0) {
    dVar11 = (double)lbl_82002AE0;
    dVar12 = (double)lbl_821AAD20;
    piVar7 = piVar6;
    do {
      uVar1 = piVar8[0x1d];
      if ((uVar1 >> 0x1b & 1) == 0) {
        if (((uVar1 & 0xc0000000) == 0) && ((uVar1 >> 0x18 & 1) != 0)) {
          dVar10 = (double)(**(code **)(*piVar8 + 0x28))(piVar8);
          if (dVar10 == dVar12) {
            if ((*(char *)(piVar6 + 0x1c) < *(char *)(piVar8 + 0x1c)) || (dVar12 < dVar9)) {
LAB_83052274:
              dVar9 = dVar10;
              piVar6 = piVar8;
            }
            else if ((*(char *)(piVar8 + 0x1c) == *(char *)(piVar6 + 0x1c)) &&
                    ((float)(*(longlong *)(param_1 + 0x50) - *(longlong *)(piVar6 + 0x16)) *
                     (float)(dVar11 / (double)lbl_8326459C) <
                     (float)(*(longlong *)(param_1 + 0x50) - *(longlong *)(piVar8 + 0x16)) *
                     (float)(dVar11 / (double)lbl_8326459C))) {
              dVar9 = dVar10;
              piVar6 = piVar8;
              piVar7 = piVar8;
              piVar2 = (int *)piVar8[3];
              goto LAB_8305216c;
            }
          }
          else if (dVar10 < dVar9) goto LAB_83052274;
        }
LAB_8305227c:
        piVar7 = piVar8;
        piVar2 = (int *)piVar8[3];
      }
      else {
        cVar5 = (**(code **)(*piVar8 + 4))(piVar8);
        if (cVar5 == '\0') goto LAB_8305227c;
        piVar2 = (int *)piVar8[3];
        if (piVar8 == *(int **)(param_1 + 0x58)) {
          *(int **)(param_1 + 0x58) = piVar2;
        }
        else {
          piVar7[3] = (int)piVar2;
        }
        uVar3 = lbl_831BC978;
        if (piVar8 != (int *)0x0) {
          (**(code **)*piVar8)(piVar8,0);
          fn_82FA5190(uVar3,piVar8);
        }
      }
LAB_8305216c:
      piVar8 = piVar2;
    } while (piVar8 != (int *)0x0);
  }
  *param_3 = (float)dVar9;
  lVar4 = (**(code **)(*piVar6 + 0x20))(piVar6);
  *param_2 = (int)lVar4;
  return -(uint)(lVar4 != 0) & (uint)piVar6;
}

