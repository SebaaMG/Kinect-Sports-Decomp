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
extern int fn_82250A18();
extern int fn_822A1460();
extern int fn_822AA770();
extern int fn_8265C9E0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;


undefined4 * fn_82370740(undefined4 *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar2 = *(int *)(param_2 + 0x204);
  uVar9 = 0;
  if (iVar2 == 1) {
    fVar1 = *(float *)(*(int *)(param_2 + 0x260) + 0x1a0);
LAB_82370780:
    uVar9 = 1;
    if (fVar1 <= lbl_821CC160) {
      uVar9 = 0;
    }
  }
  else if (iVar2 == 2) {
    fVar1 = *(float *)(*(int *)(param_2 + 0x260) + 0x240);
    goto LAB_82370780;
  }
  lVar4 = fn_8265C9E0(0x40);
  if (lVar4 == 0) {
    uVar6 = 0;
    goto LAB_8237083c;
  }
  if ((*(int *)(param_2 + 0xa0) == 0) || (uVar8 = 1, *(int *)(*(int *)(param_2 + 0xa0) + 0x40) != 1)
     ) {
    uVar8 = 0;
  }
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) == '\0') {
    puVar3 = (undefined4 *)**(int **)(param_2 + 8);
    iVar5 = fn_822AA770(*puVar3);
    if (iVar5 == 0) goto LAB_82370814;
    iVar5 = fn_822AA770(puVar3[1]);
    uVar7 = 1;
    if (iVar5 == 0) goto LAB_82370814;
  }
  else {
LAB_82370814:
    uVar7 = 0;
  }
  uVar6 = fn_822A1460(lVar4,param_2,param_2 + 0x338,iVar2,uVar7,uVar9,uVar8);
LAB_8237083c:
  *param_1 = uVar6;
  return param_1;
}

