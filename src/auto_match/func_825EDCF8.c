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
extern int fn_825C8BC0();
extern int fn_825CCAE0();
extern int fn_82623298();
extern int fn_82623338();
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_825EDCF8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  
  puVar4 = *(undefined4 **)((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 5) * 4 + param_1);
  uVar1 = *puVar4;
  if (*(int *)(param_1 + 8) == 0) {
    fn_82623298(puVar4,0,0);
    if (0 < *(int *)(*(int *)(**(int **)(param_1 + 4) + 0x8c4) + 8)) {
      uVar2 = *(uint *)(**(int **)(param_1 + 4) + 0x8c4);
      uVar6 = (ulonglong)uVar2;
      iVar3 = *(int *)(uVar2 + 4);
      if ((*(int *)(iVar3 + 0x10) == 1) && (0 < *(int *)(uVar2 + 8))) {
        dVar8 = (double)lbl_821CC160;
        if ((double)*(float *)(iVar3 + 0x838) <= dVar8) {
          dVar8 = (double)(*(float *)(iVar3 + 0x820) * lbl_8327F894);
        }
        lVar5 = uVar6 + 0xc;
        lVar7 = 8;
        do {
          if (*(int *)lVar5 != 0) {
            dVar8 = (double)fn_825C8BC0(dVar8);
          }
          lVar7 = lVar7 + -1;
          lVar5 = lVar5 + 4;
        } while (lVar7 != 0);
        fn_825CCAE0(*(undefined4 *)((int)uVar6 + 0x3c),uVar1);
      }
    }
  }
  else {
    fn_82623298(puVar4,0,0);
  }
  fn_82623338(puVar4);
  return;
}

