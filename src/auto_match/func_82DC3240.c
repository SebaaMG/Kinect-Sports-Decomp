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
extern int fn_82CEA8B0();
extern int fn_82D89E30();
extern int fn_82D89E40();


void fn_82DC3240(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar5;
  undefined8 uVar4;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  fn_82CEA8B0(param_1 + 0x30);
  lVar6 = 2;
  piVar8 = (int *)(param_2 + 0x28);
  do {
    iVar7 = 0;
    if (0 < piVar8[1]) {
      iVar9 = 0;
      do {
        iVar10 = 0;
        iVar2 = *(int *)(*piVar8 + iVar9);
        if (0 < *(int *)(iVar2 + 0x4c)) {
          iVar11 = 0;
          do {
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x48) + iVar11);
            iVar5 = fn_82D89E30(uVar3);
            lVar12 = 0;
            if (0 < iVar5) {
              do {
                iVar1 = *(int *)(param_1 + 0x40);
                uVar4 = fn_82D89E40(uVar3,lVar12);
                (**(code **)(iVar1 + 4))((int *)(param_1 + 0x40),uVar4);
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 < iVar5);
            }
            iVar10 = iVar10 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar10 < *(int *)(iVar2 + 0x4c));
        }
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar7 < piVar8[1]);
    }
    lVar6 = lVar6 + -1;
    piVar8 = (int *)(param_2 + 0x34);
  } while (lVar6 != 0);
  return;
}

