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
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_5c;


void fn_822821C0(int *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  
  uVar5 = (uint)param_2;
  if (0x15555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((param_1[2] - *param_1) / 0xc) < uVar5) {
    iVar3 = 0;
    if (uVar5 != 0) {
      iVar3 = fn_8265C9E0(param_2 * 0xc);
      if (iVar3 == 0) {
        uStack_5c = 0;
        ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_60);
      }
    }
    piVar7 = (int *)*param_1;
    piVar1 = (int *)param_1[1];
    if (piVar7 != piVar1) {
      piVar8 = (int *)(iVar3 + 8);
      do {
        if (piVar8 != (int *)0x8) {
          piVar8[-2] = *piVar7;
          piVar8[-1] = 0;
          *piVar8 = 0;
          iVar9 = piVar7[2];
          iVar2 = piVar7[1];
          if (iVar9 != 0) {
            cVar4 = fn_8223AAC0(iVar9);
            if (cVar4 != '\0') {
              if (*piVar8 != 0) {
                fn_822315A0();
              }
              *piVar8 = iVar9;
              piVar8[-1] = iVar2;
            }
          }
        }
        piVar7 = piVar7 + 3;
        piVar8 = piVar8 + 3;
      } while (piVar7 != piVar1);
    }
    iVar9 = *param_1;
    iVar2 = param_1[1];
    iVar6 = iVar2 - iVar9;
    if (iVar9 != 0) {
      if (iVar9 != iVar2) {
        piVar7 = (int *)(iVar9 + 8);
        do {
          if (*piVar7 != 0) {
            fn_822315A0();
          }
          iVar9 = iVar9 + 0xc;
          piVar7 = piVar7 + 3;
        } while (iVar9 != iVar2);
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = iVar3;
    param_1[2] = uVar5 * 0xc + iVar3;
    param_1[1] = (iVar6 / 0xc) * 0xc + iVar3;
  }
  return;
}

