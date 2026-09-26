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
extern unsigned int *auStack_58;
extern int fn_82381BC0();
extern int fn_828223C8();
extern int fn_82826498();
extern int fn_8282A638();
extern int fn_8282D818();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_8282AA10(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [88];
  
  lVar4 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_8282A638();
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar8 = param_1 + 0x2fc;
    while( true ) {
      fn_828223C8(iVar8,&iStack_5c);
      if (iStack_5c == 0) break;
      puVar5 = (undefined4 *)(iStack_5c + 0x48);
      iVar7 = ((*(int **)(iStack_5c + 0x48))[1] - **(int **)(iStack_5c + 0x48)) / 0x14;
      lVar6 = (longlong)iVar7;
      iVar8 = iStack_5c;
      if ((iVar7 != 0) && (*(char *)(iStack_5c + 0x54) != '\0')) {
        piVar10 = (int *)(iStack_5c + 0x4c);
        if (*(int *)(*(int *)(iStack_5c + 0x4c) + 8) != 0) {
          iVar8 = **(int **)(*(int *)(iStack_5c + 0x4c) + 4);
          iVar1 = *(int *)(iVar8 + 0x10);
          *(undefined4 *)(iVar8 + 0x10) = 0;
          iStack_60 = iVar8;
          fn_82381BC0(&iStack_60);
          iVar11 = *(int *)(*piVar10 + 4);
          while( true ) {
            iVar2 = iStack_60;
            if (iStack_60 == iVar11) break;
            iVar8 = *(int *)(iVar8 + 0x10) + iVar1;
            iVar1 = *(int *)(iStack_60 + 0x10);
            *(int *)(iStack_60 + 0x10) = iVar8;
            fn_82381BC0(&iStack_60);
            iVar8 = iVar2;
          }
        }
        if (iVar7 != 0) {
          iVar8 = 0;
          do {
            iVar11 = *(int *)*puVar5 + iVar8;
            iVar7 = *(int *)(iVar11 + 4) * 0x20 + **(int **)(param_1 + 0x388);
            if ((*(uint *)(iVar7 + 8) & 4) == 0) {
              if ((*(uint *)(iVar7 + 8) & 0x10) == 0) {
                bVar12 = false;
              }
              else {
                bVar12 = *(int *)(iVar7 + 0x18) != 0;
              }
            }
            else {
              bVar12 = true;
            }
            if (bVar12) {
              uVar9 = 0;
              if (*(int *)(iVar11 + 0xc) != 0) {
                do {
                  fn_82826498(param_1,iVar7,
                                (longlong)*(int *)(iVar7 + 0x10) * (longlong)(int)uVar9 +
                                (ulonglong)*(uint *)(iVar11 + 8),0xffffffff8282a898,iVar11);
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(uint *)(iVar11 + 0xc));
              }
            }
            lVar6 = lVar6 + -1;
            iVar8 = iVar8 + 0x14;
          } while (lVar6 != 0);
        }
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x48) - lVar4;
        lVar4 = uVar3 + lVar4;
        fn_8282D818(param_1,auStack_58,(uVar3 & 0x3fffffff) << 2,1);
        iVar8 = iStack_5c;
      }
    }
  }
  return;
}

