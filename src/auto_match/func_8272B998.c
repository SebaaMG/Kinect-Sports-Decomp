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
extern int fn_82681E98();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_8269F500();
extern int fn_8272A678();
extern int fn_8272B128();
extern int fn_8272B2E8();


void fn_8272B998(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar4;
  char *pcVar5;
  undefined8 uVar3;
  int iVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  lVar9 = 0;
  *puVar1 = 2;
  puVar1[4] = 0;
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar4 == 4)) {
    piVar7 = (int *)(*(int *)(param_1 + 8) + -0x68);
    if (*(int *)(param_1 + 8) == 0) {
      piVar7 = (int *)0x0;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      pcVar5 = (char *)fn_826957D0(param_1,0);
      if (*pcVar5 == '\x01') {
        fn_8272B128(piVar7);
        iVar4 = piVar7[0x28];
        iVar6 = *(int *)(iVar4 + 0x18);
        if (iVar6 != 0) {
          fn_8272A678(iVar6,1);
        }
        *(undefined4 *)(iVar4 + 0x18) = 0;
        *(byte *)(piVar7[0x28] + 0x13f) = *(byte *)(piVar7[0x28] + 0x13f) | 2;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        iVar4 = fn_82696958(uVar3,uVar2);
        if (iVar4 == 0) {
          iVar4 = piVar7[0x20];
          if (iVar4 == 0) {
            iVar4 = fn_8269F500(piVar7);
          }
          if (iVar4 == 0) {
            iVar4 = (**(code **)(*piVar7 + 0x58))(piVar7);
            iVar4 = *(int *)(iVar4 + 0x78);
          }
          fn_82681E98(piVar7 + 3,0xffffffff820113c0,**(undefined4 **)(iVar4 + 8));
        }
        else {
          iVar6 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10);
          if (iVar6 == 7) {
            iVar6 = *(int *)(iVar4 + 0x38);
            if (0 < iVar6) {
              iVar8 = 0;
              do {
                fn_8272B2E8(piVar7,param_1,lVar9,*(undefined4 *)(iVar8 + *(int *)(iVar4 + 0x34)));
                lVar9 = lVar9 + 1;
                iVar8 = iVar8 + 4;
              } while ((int)lVar9 < iVar6);
            }
          }
          else {
            uVar3 = fn_826957D0(param_1,0);
            fn_8272B2E8(piVar7,param_1,0,uVar3);
          }
        }
      }
    }
  }
  return;
}

