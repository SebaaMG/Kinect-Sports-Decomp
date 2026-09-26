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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_82689C60();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_826ABE30();


void fn_826AD9D8(int param_1,uint *param_2,int param_3,uint param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  char cVar4;
  int iVar3;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  iVar12 = *(int *)(param_1 + 8);
  if ((*(int *)(iVar12 + 0xc) == 0) || (bVar5 = false, **(char **)(iVar12 + 8) == '\0')) {
    bVar5 = true;
  }
  iVar11 = 0;
  if (!bVar5) {
    iVar11 = *(int *)(iVar12 + 8);
  }
  if (*(int *)(param_1 + 0x1c) != param_3) {
    if (*(int *)(param_1 + 0x1c) == -1) {
      *(int *)(param_1 + 0x1c) = param_3;
      piVar9 = (int *)(param_1 + 0xc);
      uVar13 = param_3 + 2;
      uVar8 = (uint)CONCAT11(*(undefined1 *)(iVar11 + param_3 + 4),
                             *(undefined1 *)(iVar11 + param_3 + 3));
      fn_82689C60(piVar9,uVar8);
      uVar7 = 0;
      if (uVar8 != 0) {
        iVar12 = 0;
        do {
          pcVar10 = (char *)(iVar11 + 3 + uVar13);
          iVar3 = fn_82694700((ulonglong)*param_2 + 0x254,pcVar10);
          iVar1 = *(int *)(iVar3 + 8);
          *(int *)(iVar3 + 8) = iVar1 + 1;
          iVar2 = *piVar9;
          *(int *)(iVar3 + 8) = iVar1 + 2;
          iVar1 = *(int *)(iVar12 + iVar2);
          lVar6 = (ulonglong)*(uint *)(iVar1 + 8) - 1;
          *(int *)(iVar1 + 8) = (int)lVar6;
          if (lVar6 == 0) {
            fn_826944C8();
          }
          *(int *)(iVar12 + iVar2) = iVar3;
          lVar6 = (ulonglong)*(uint *)(iVar3 + 8) - 1;
          *(int *)(iVar3 + 8) = (int)lVar6;
          if (lVar6 == 0) {
            fn_826944C8(iVar3);
          }
          cVar4 = *pcVar10;
          while (cVar4 != '\0') {
            if (param_4 <= uVar13) {
              cVar4 = (**(code **)(*param_5 + 4))(param_5);
              if (cVar4 != '\0') {
                fn_826ABE30(param_5,0xffffffff820074f8);
              }
              if (uVar8 <= uVar7) {
                return;
              }
              iVar11 = uVar7 << 2;
              iVar12 = uVar8 - uVar7;
              do {
                iVar3 = fn_82694700((ulonglong)*param_2 + 0x254,0xffffffff820074ec);
                iVar1 = *(int *)(iVar3 + 8);
                *(int *)(iVar3 + 8) = iVar1 + 1;
                iVar2 = *piVar9;
                *(int *)(iVar3 + 8) = iVar1 + 2;
                iVar1 = *(int *)(iVar11 + iVar2);
                lVar6 = (ulonglong)*(uint *)(iVar1 + 8) - 1;
                *(int *)(iVar1 + 8) = (int)lVar6;
                if (lVar6 == 0) {
                  fn_826944C8();
                }
                *(int *)(iVar11 + iVar2) = iVar3;
                lVar6 = (ulonglong)*(uint *)(iVar3 + 8) - 1;
                *(int *)(iVar3 + 8) = (int)lVar6;
                if (lVar6 == 0) {
                  fn_826944C8(iVar3);
                }
                iVar12 = iVar12 + -1;
                iVar11 = iVar11 + 4;
              } while (iVar12 != 0);
              return;
            }
            uVar13 = uVar13 + 1;
            cVar4 = *(char *)(iVar11 + 3 + uVar13);
          }
          uVar7 = uVar7 + 1;
          uVar13 = uVar13 + 1;
          iVar12 = iVar12 + 4;
        } while (uVar7 < uVar8);
      }
    }
    else {
      cVar4 = (**(code **)(*param_5 + 4))(param_5);
      if (cVar4 != '\0') {
        fn_826ABE30(param_5,0xffffffff82007528,param_3,param_4,*(undefined4 *)(param_1 + 0x1c));
      }
    }
  }
  return;
}

