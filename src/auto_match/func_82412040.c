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
extern int fn_82410670();
extern int fn_825200A8();
extern int fn_82536590();
extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int uRam83297698;


void fn_82412040(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  double dVar8;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar7 = *(uint *)(*(int *)(param_1 + 0x28) + 0x380);
    uVar1 = *(uint *)(*(int *)(param_1 + 0x28) + 900);
    if (uVar7 < uVar1) {
      do {
        if (*(int *)(uVar7 + 0x94) != 0) {
          piVar6 = *(int **)(*(int *)(uVar7 + 0x94) + 0x8c0);
          uVar2 = 0xffffffff82196288;
          if (piVar6 != (int *)0x0) {
            uVar2 = (**(code **)(*piVar6 + 0x20))();
          }
          if ((uVar2 & 0xffffffff) != 0) {
            uVar5 = ZEXT48(*(uint **)(param_1 + 0x24));
            iVar3 = fn_825200A8(uVar2,(ulonglong)**(uint **)(param_1 + 0x24) + 0xcbc);
            if (iVar3 != 0) {
              iVar3 = *(int *)(param_1 + 0x274);
              *(undefined4 *)(param_1 + 0x84) = 1;
              if (*(int *)(iVar3 + 0xcc) != 0) {
                uVar4 = 0;
                *(undefined4 *)(param_1 + 0x194) = 0;
                *(undefined4 *)(param_1 + 0x17c) = 0;
                dVar8 = (double)fn_82410670(param_1);
                if ((*(int *)(iVar3 + 0xec) != 0) && ((double)*(float *)(iVar3 + 0xf0) < dVar8)) {
                  *(undefined4 *)(param_1 + 0x1b0) = 1;
                    /* WARNING: Subroutine does not return */
                  fn_82539560(dVar8,(double)*(float *)(iVar3 + 0xf0),(double)lbl_821CA460,
                               (double)*(float *)(iVar3 + 0xf4),(double)*(float *)(iVar3 + 0xf8));
                }
                if (*(int *)(iVar3 + 0xdc) != 0) {
                  *(undefined4 *)(param_1 + 0x1b8) = uVar4;
                }
              }
              piVar6 = (int *)uVar5;
              iVar3 = *piVar6;
              if ((uVar5 & 0xffffffff) != (ulonglong)*(uint *)(iVar3 + 0x2b20)) {
                return;
              }
              if (*(int *)(iVar3 + 0xc0c) == 0) {
                return;
              }
              if (*(int *)(iVar3 + 0xcb8) == 0) {
                return;
              }
              if (*(int *)(iVar3 + 0x730) == 0) {
                return;
              }
              if (*(uint *)(piVar6[6] * 0x1ac + piVar6[2] + 0x14) < uRam83297698) {
                return;
              }
              fn_82536590(iVar3 + 0xd8c,0);
              return;
            }
          }
        }
        uVar7 = uVar7 + 0xd0;
      } while (uVar7 < uVar1);
    }
  }
  return;
}

