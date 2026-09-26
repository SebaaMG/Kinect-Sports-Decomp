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
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern int fn_82824278();
extern int fn_82824290();
extern int fn_82824360();
extern int fn_82824400();
extern int fn_82824640();
extern int fn_82F68CC0();
extern unsigned int iStack_7c;
extern unsigned int iStack_90;
extern unsigned int uStack_78;


void fn_82835420(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  char cVar5;
  int iVar4;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iStack_90;
  int aiStack_8c [3];
  int *piStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  
  iStack_90 = 0;
  iStack_7c = 0;
  uStack_78 = 0;
  iVar10 = 0;
  uVar7 = 0;
  piStack_80 = (int *)0x0;
  iVar2 = (*(int **)(param_1 + 0x388))[1] - **(int **)(param_1 + 0x388) >> 5;
  if (*(int *)(param_2 + 0xa0) != 0) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      bVar3 = false;
      piVar11 = (int *)(**(int **)(param_2 + 0x388) + iVar8);
      cVar5 = fn_82824360(piVar11);
      if (cVar5 == '\0') {
        iVar4 = fn_82824640(param_1,*(undefined4 *)
                                         (**(int **)(param_2 + 0x3bc) + piVar11[3] * 4),piVar11[4],
                                &iStack_90);
        if (iVar4 == 0) {
          iVar4 = iStack_90 * 0x20 + **(int **)(param_1 + 0x388);
          aiStack_8c[0] = iVar4;
          cVar5 = fn_82824400(iVar4);
          if ((cVar5 != '\0') && (cVar5 = fn_82824400(piVar11), cVar5 == '\0')) {
            uVar1 = *(undefined4 *)(iVar4 + 0xc);
            fn_82F68CC0(iVar4,piVar11,0x20);
            *(undefined4 *)(iVar4 + 0xc) = uVar1;
            fn_8257A9F0(&piStack_80,aiStack_8c);
            bVar3 = true;
          }
          *(int *)(*(int *)(param_1 + 0x3c8) + iVar9) = iStack_90;
          if (!bVar3) goto LAB_828355d4;
        }
        iVar4 = iVar2 + iVar10;
        iVar10 = iVar10 + 1;
        *(int *)(iVar9 + *(int *)(param_1 + 0x3c8)) = iVar4;
        cVar5 = fn_82824278(piVar11);
        if (cVar5 != '\0') {
          iVar4 = *piVar11 * 0x20 + **(int **)(param_2 + 0x388);
          cVar5 = fn_82824360(iVar4);
          if (cVar5 != '\0') {
            *(int *)(*piVar11 * 4 + *(int *)(param_1 + 0x3c8)) = iVar2 + iVar10;
            while( true ) {
              iVar10 = iVar10 + 1;
              cVar5 = fn_82824290(iVar4);
              if (cVar5 == '\0') break;
              iVar4 = *(int *)(iVar4 + 4);
              *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x3c8)) = iVar2 + iVar10;
              iVar4 = iVar4 * 0x20 + **(int **)(param_2 + 0x388);
            }
          }
        }
      }
LAB_828355d4:
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x20;
      iVar9 = iVar9 + 4;
    } while (uVar7 < *(uint *)(param_2 + 0xa0));
  }
  uVar6 = 0;
  uVar7 = iStack_7c - (int)piStack_80 >> 2;
  piVar11 = piStack_80;
  if (uVar7 != 0) {
    do {
      if (*(int *)*piVar11 != -1) {
        *(int *)*piVar11 = *(int *)(*(int *)*piVar11 * 4 + *(int *)(param_1 + 0x3c8));
      }
      if (*(int *)(*piVar11 + 4) != -1) {
        *(undefined4 *)(*piVar11 + 4) =
             *(undefined4 *)(*(int *)(*piVar11 + 4) * 4 + *(int *)(param_1 + 0x3c8));
      }
      uVar6 = uVar6 + 1;
      piVar11 = piVar11 + 1;
    } while (uVar6 < uVar7);
  }
  *param_3 = iVar10;
  if (piStack_80 != (int *)0x0) {
    fn_8265CA20();
  }
  return;
}

