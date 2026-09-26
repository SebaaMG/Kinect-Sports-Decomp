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
extern int fn_823E2D30();
extern int fn_828223C8();
extern int fn_82826498();
extern int fn_8282D818();
extern int fn_82832768();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_82832B28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [88];
  
  lVar6 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_82832768();
    *(undefined4 *)(param_1 + 0x40) = 0;
    iVar8 = param_1 + 0x2fc;
    while( true ) {
      fn_828223C8(iVar8,&iStack_5c);
      if (iStack_5c == 0) break;
      puVar7 = (undefined4 *)(iStack_5c + 0x48);
      iVar4 = ((*(int **)(iStack_5c + 0x48))[1] - **(int **)(iStack_5c + 0x48)) / 0x14;
      lVar10 = (longlong)iVar4;
      iVar8 = iStack_5c;
      if ((iVar4 != 0) && (*(char *)(iStack_5c + 0x54) != '\0')) {
        piVar9 = (int *)(iStack_5c + 0x50);
        if (*(int *)(*(int *)(iStack_5c + 0x50) + 8) != 0) {
          iVar8 = **(int **)(*(int *)(iStack_5c + 0x50) + 4);
          iVar1 = *(int *)(iVar8 + 0x18);
          *(undefined4 *)(iVar8 + 0x18) = 0;
          iStack_60 = iVar8;
          fn_823E2D30(&iStack_60);
          iVar2 = *(int *)(*piVar9 + 4);
          while( true ) {
            iVar3 = iStack_60;
            if (iStack_60 == iVar2) break;
            iVar8 = *(int *)(iVar8 + 0x18) + iVar1;
            iVar1 = *(int *)(iStack_60 + 0x18);
            *(int *)(iStack_60 + 0x18) = iVar8;
            fn_823E2D30(&iStack_60);
            iVar8 = iVar3;
          }
        }
        if (iVar4 != 0) {
          iVar8 = 0;
          do {
            iVar4 = *(int *)*puVar7 + iVar8;
            fn_82826498(param_1,((ulonglong)*(uint *)(iVar4 + 4) & 0x7ffffff) * 0x20 +
                                    (ulonglong)**(uint **)(param_1 + 0x388),
                            *(undefined4 *)(iVar4 + 8),0xffffffff82832980);
            lVar10 = lVar10 + -1;
            iVar8 = iVar8 + 0x14;
          } while (lVar10 != 0);
        }
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x40) - lVar6;
        lVar6 = uVar5 + lVar6;
        fn_8282D818(param_1,auStack_58,(uVar5 & 0x3fffffff) << 2,1);
        iVar8 = iStack_5c;
      }
    }
  }
  return;
}

