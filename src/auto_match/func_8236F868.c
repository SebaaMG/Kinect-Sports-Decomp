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
extern int fn_822AA770();
extern int fn_8236FB68();
extern int fn_82508078();
extern int fn_8288B760();
extern unsigned int uRam831d1ba4;
extern unsigned int uRam831d1ba8;


void fn_8236F868(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar7;
  uint uVar8;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar9;
  uint uVar10;
  
  piVar3 = (int *)**(int **)(param_1 + 8);
  piVar4 = (int *)*piVar3;
  piVar3 = (int *)piVar3[1];
  uVar1 = (uint)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  uVar2 = (uint)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  iVar7 = fn_822AA770(*(undefined4 *)
                             ((-(uint)(uVar2 < uVar1) & 1) * 4 + **(int **)(param_1 + 8)));
  if (iVar7 != 0) {
    if (*(int *)(iVar7 + 0x168) == 0) {
      uVar8 = *(uint *)(iVar7 + 0x16c);
    }
    else {
      uVar8 = fn_8288B760();
      uVar8 = uVar8 & 0xff;
    }
    bVar9 = true;
    if (uVar8 != 0) goto LAB_8236f918;
  }
  bVar9 = false;
LAB_8236f918:
  uVar8 = uVar2;
  if (((int)uVar1 <= (int)uVar2) || (uVar8 = uVar1, uVar10 = uVar2, (int)uVar1 <= (int)uVar2)) {
    uVar10 = uVar1;
  }
  if (uVar2 == uVar1) {
    uVar5 = 0x16;
  }
  else if ((uRam831d1ba4 < uVar8 - uVar10) && (bVar9)) {
    uVar5 = 0x15;
  }
  else {
    uVar5 = 0x13;
    if (uRam831d1ba8 < uVar8 - uVar10) {
      uVar5 = 0x14;
    }
  }
  lVar6 = fn_8236FB68(uVar5);
  if (lVar6 != 0) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),lVar6,0);
  }
  return;
}

