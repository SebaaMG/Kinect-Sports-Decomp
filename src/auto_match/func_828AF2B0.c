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
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_82881F50();
extern int fn_82881FC0();
extern int fn_82882158();
extern int fn_82897BD0();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_8289EEE0();
extern int fn_828AEF00();
extern int fn_828D8A88();
extern int fn_828D8A98();


undefined8 fn_828AF2B0(int param_1)

{
  undefined8 uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar10;
  int *piVar9;
  undefined8 uVar2;
  uint uVar11;
  int aiStack_50 [20];
  
  uVar1 = fn_82897BD0();
  iVar3 = fn_82882158();
  fn_8289D8D0(*(undefined4 *)(param_1 + 0x50));
  iVar4 = fn_823AA970();
  iVar5 = fn_823AA970(param_1);
  if (iVar4 < iVar5) {
LAB_828af4dc:
    uVar1 = 1;
  }
  else {
    fn_82881F50(uVar1);
    fn_828D8A88(0,1);
    uVar6 = fn_828D8A98();
    iVar4 = 0;
    uVar11 = 0;
    piVar9 = *(int **)(*(int *)(param_1 + 0x50) + 0x230);
    aiStack_50[0] = *piVar9;
    if ((int *)aiStack_50[0] == piVar9) {
LAB_828af43c:
      cVar10 = fn_8289DAD0(param_1);
      if (cVar10 == '\0') {
        fn_8289D8D0(*(undefined4 *)(param_1 + 0x50));
        cVar10 = fn_8289DAD0();
        if (cVar10 == '\0') {
          piVar9 = (int *)fn_8289EEE0(*(undefined4 *)(param_1 + 0x50));
          iVar4 = (**(code **)(*piVar9 + 0xc))();
          if (iVar4 != 0) {
            fn_82897BD0();
            iVar3 = fn_82882158();
            if (iVar3 == -1) goto LAB_828af49c;
          }
        }
      }
    }
    else {
      do {
        iVar5 = *(int *)(aiStack_50[0] + 0x10);
        if ((((iVar5 != param_1) && (iVar7 = fn_82897BD0(iVar5), iVar7 != -1)) &&
            (iVar7 = fn_82897BD0(iVar5), iVar7 != iVar3)) && (*(char *)(iVar5 + 0x96) != '\0')) {
          fn_82897BD0(iVar5);
          iVar7 = fn_82882158();
          if ((iVar7 == -1) && (*(char *)(iVar5 + 0x97) != '\0')) {
            iVar7 = fn_823AA970(param_1);
            for (piVar9 = *(int **)(iVar5 + 0x9c); piVar9 != *(int **)(iVar5 + 0xa0);
                piVar9 = piVar9 + 3) {
              if (*piVar9 == iVar7) {
                if (((*(char *)(piVar9 + 1) == '\0') || (uVar8 = fn_828AEF00(iVar5), uVar8 == 0))
                   || (uVar8 < uVar6)) break;
                if ((iVar4 == 0) || (cVar10 = fn_8289DAD0(iVar4), cVar10 == '\0')) {
                  if (uVar8 <= uVar11) break;
                }
                else if (uVar8 < uVar11) break;
                iVar4 = iVar5;
                uVar11 = uVar8;
                break;
              }
            }
          }
        }
        fn_82381BC0(aiStack_50);
      } while (aiStack_50[0] != *(int *)(*(int *)(param_1 + 0x50) + 0x230));
      if (iVar4 == 0) goto LAB_828af43c;
LAB_828af49c:
      *(int *)(iVar4 + 0xac) = *(int *)(iVar4 + 0xac) + 1;
      uVar1 = fn_82897BD0(param_1);
      uVar2 = fn_82897BD0(iVar4);
      if (((int)uVar1 != -1) && ((int)uVar2 != -1)) {
        fn_82881FC0(uVar1,uVar2,1);
        goto LAB_828af4dc;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

