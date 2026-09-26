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
extern int fn_8280CB70();
extern int fn_8280CD18();
extern int fn_8284E9E0();


void fn_8284EF60(undefined8 param_1,int *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar11 = *param_2;
  iVar9 = 0;
  if (0 < *(int *)(iVar11 + 8)) {
    iVar12 = 0;
    iVar10 = 0;
    do {
      pcVar4 = *(code **)(param_2[2] + iVar10 + 0xa0);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = fn_8284E9E0;
      }
      (*pcVar4)(param_1,*(int *)(iVar11 + 0xc) + iVar12,param_2);
      iVar11 = *param_2;
      iVar7 = *(int *)(iVar11 + 0xc) + iVar12;
      if (*(int *)(iVar7 + 0x1c) != 0) {
        iVar5 = **(int **)(iVar7 + 0x18) + param_2[1];
        fn_8280CD18(param_2[2] + iVar10,iVar5);
        if (*(int *)(param_2[2] + iVar10 + 0xac) == 0) {
          fn_8280CB70(param_2[2] + iVar10 + 0x40,iVar5,iVar5);
        }
        iVar11 = *param_2;
        iVar3 = 1;
        iVar7 = *(int *)(iVar11 + 0xc) + iVar12;
        if (1 < *(int *)(iVar7 + 0x1c)) {
          iVar6 = 4;
          do {
            puVar2 = (undefined8 *)(iVar5 + -8);
            lVar13 = 8;
            puVar8 = (undefined8 *)(*(int *)(*(int *)(iVar7 + 0x18) + iVar6) + param_2[1] + -8);
            do {
              puVar2 = puVar2 + 1;
              puVar8 = puVar8 + 1;
              *puVar8 = *puVar2;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iVar11 = *param_2;
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + 4;
            iVar7 = *(int *)(iVar11 + 0xc) + iVar12;
          } while (iVar3 < *(int *)(iVar7 + 0x1c));
        }
      }
      iVar5 = 0;
      if (0 < *(int *)(iVar7 + 0x24)) {
        iVar3 = 0;
        do {
          iVar5 = iVar5 + 1;
          piVar1 = (int *)(*(int *)(iVar7 + 0x20) + iVar3);
          iVar3 = iVar3 + 4;
          *(char *)(*piVar1 + param_2[1]) = (char)*(undefined4 *)(param_2[2] + iVar10 + 0xa4);
          iVar11 = *param_2;
          iVar7 = *(int *)(iVar11 + 0xc) + iVar12;
        } while (iVar5 < *(int *)(iVar7 + 0x24));
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0xf0;
      iVar12 = iVar12 + 100;
    } while (iVar9 < *(int *)(iVar11 + 8));
  }
  iVar11 = 0;
  if (0 < param_2[0xb]) {
    iVar9 = 0;
    do {
      if (*(int *)(param_2[10] + iVar9) != 0) {
        fn_8284EF60(param_1,*(int *)(param_2[10] + iVar9));
      }
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar11 < param_2[0xb]);
  }
  return;
}

