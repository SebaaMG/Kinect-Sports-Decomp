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
extern int fn_82627DB0();
extern int fn_82627E18();


void fn_82599A38(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  lVar6 = 6;
  piVar7 = param_1;
  do {
    piVar1 = (int *)*piVar7;
    iVar8 = 0;
    iVar2 = param_1[7];
    if (0 < *piVar1) {
      iVar9 = 0;
      do {
        iVar4 = *(int *)(iVar9 + piVar1[1]);
        if (iVar4 != 0) {
          if (0 < *(short *)(iVar4 + 6)) {
            uVar10 = 0;
            do {
              iVar5 = uVar10 * 0x1d0 + iVar4;
              iVar3 = *(int *)(iVar5 + 0x2d0);
              if ((iVar3 != 0) && ((param_2 == 0 || (iVar3 == param_2)))) {
                if (*(short *)(iVar5 + 0x342) == -2) {
                  fn_82627DB0(iVar4);
                }
                else {
                  fn_82627E18(iVar2);
                }
              }
              uVar10 = uVar10 + 1 & 0xffff;
            } while ((int)uVar10 < (int)*(short *)(iVar4 + 6));
          }
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar8 < *piVar1);
    }
    lVar6 = lVar6 + -1;
    piVar7 = piVar7 + 1;
  } while (lVar6 != 0);
  return;
}

