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
extern unsigned int *auStack_34;
extern unsigned int fStack_20;
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern int fn_824973B0();
extern int fn_8254EEB8();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_2c;


void fn_824970C8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  longlong lVar9;
  int aiStack_40 [3];
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  aiStack_40[0] = param_2;
  iVar3 = fn_824973B0(param_1 + 0x28,aiStack_40);
  iVar1 = *(int *)(param_1 + 0x2c);
  piVar6 = (int *)(iVar3 * 8 + *(int *)(param_1 + 0x38));
  iVar3 = *piVar6;
  piVar2 = (int *)iVar3;
  while( true ) {
    iVar4 = iVar1;
    if (iVar3 != iVar1) {
      iVar4 = *(int *)piVar6[1];
    }
    piVar8 = (int *)iVar1;
    if ((piVar2 == (int *)iVar4) || (piVar8 = piVar2, piVar2[2] == param_2)) break;
    piVar2 = (int *)*piVar2;
  }
  if (piVar8 != (int *)*(int *)(param_1 + 0x2c)) {
    if (*(int *)(param_1 + 0x58) == 0) {
      if (*(int *)(*(int *)(param_1 + 0x54) + 4) != 0) {
        fn_8254EEB8((double)lbl_821CC160,(double)lbl_821CC160,*(int *)(param_1 + 0x54),
                          *(undefined4 *)((int)piVar8 + 0x14));
      }
      *(undefined4 *)(param_1 + 0x58) = 1;
    }
    else {
      puVar7 = auStack_34;
      puVar5 = (undefined4 *)((int)piVar8 + 0x14);
      lVar9 = 5;
      do {
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar5;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      if ((*(int *)((int)piVar8 + 0x2c) != 0) && (*(int *)(*(int *)(param_1 + 0x54) + 4) != 0)) {
        fn_8254EEB8((double)fStack_28,(double)fStack_24,(double)fStack_20,
                          *(int *)(param_1 + 0x54),uStack_2c);
      }
    }
  }
  return;
}

