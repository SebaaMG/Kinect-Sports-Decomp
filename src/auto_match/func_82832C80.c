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
extern unsigned int *auStack_60;
extern int fn_823E2D30();
extern int fn_8265C9E0();
extern int fn_828223C8();
extern int fn_82824378();
extern int fn_82826498();
extern int fn_828294C8();
extern int fn_82832F30();
extern int fn_82833628();
extern unsigned int iStack_50;
extern unsigned int iStack_5c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82832C80(int param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar4;
  int *piVar3;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined4 *apuStack_58 [2];
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  iVar5 = param_1 + 0x2fc;
  while (fn_828223C8(iVar5,&iStack_5c), iStack_5c != 0) {
    puVar6 = (undefined4 *)(iStack_5c + 0x48);
    iVar9 = ((*(int **)(iStack_5c + 0x48))[1] - **(int **)(iStack_5c + 0x48)) / 0x14;
    lVar8 = (longlong)iVar9;
    iVar5 = iStack_5c;
    if ((iVar9 != 0) && (*(char *)(iStack_5c + 0x54) != '\0')) {
      piVar7 = (int *)(iStack_5c + 0x50);
      if (*(int *)(iStack_5c + 0x50) != 0) {
        fn_828294C8(*(int *)(iStack_5c + 0x50),1);
      }
      lVar2 = fn_8265C9E0(0x10);
      if (lVar2 == 0) {
        iVar5 = 0;
      }
      else {
        fn_82832F30(lVar2,auStack_60,auStack_60);
        iVar5 = (int)lVar2;
      }
      *piVar7 = iVar5;
      if (iVar9 != 0) {
        iVar5 = 0;
        do {
          iVar9 = *(int *)*puVar6 + iVar5;
          iVar10 = *(int *)(iVar9 + 4) * 0x20 + **(int **)(param_1 + 0x388);
          cVar4 = fn_82824378(iVar10);
          if (((cVar4 == '\0') || (uVar1 = *(uint *)(iVar10 + 0x1c), uVar1 == 0)) ||
             (*(int *)(iVar10 + 0x18) != 0)) {
            fn_82826498(param_1,iVar10,*(undefined4 *)(iVar9 + 8),0xffffffff828328b0,iVar9);
          }
          else if (1 < uVar1) {
            iStack_50 = (*(uint *)(iVar10 + 0x10) / uVar1) * *(int *)(iVar9 + 0xc);
            uStack_4c = uVar1;
            uStack_48 = uVar1;
            piVar3 = (int *)fn_82833628(*piVar7,&iStack_50);
            *piVar3 = *piVar3 + 1;
          }
          lVar8 = lVar8 + -1;
          iVar5 = iVar5 + 0x14;
        } while (lVar8 != 0);
      }
      *(int *)(param_1 + 0x3c) = *(int *)(*piVar7 + 8) + *(int *)(param_1 + 0x3c);
      puVar6 = *(undefined4 **)(*piVar7 + 4);
      apuStack_58[0] = (undefined4 *)*puVar6;
      while (iVar5 = iStack_5c, apuStack_58[0] != puVar6) {
        *(int *)(param_1 + 0x40) = apuStack_58[0][6] + *(int *)(param_1 + 0x40);
        fn_823E2D30(apuStack_58);
      }
    }
  }
  return;
}

