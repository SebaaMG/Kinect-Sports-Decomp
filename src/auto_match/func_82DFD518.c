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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_82CE50D8();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();


void fn_82DFD518(double param_1,int param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  ulonglong uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 in_vs44 [16];
  float fStack_b0;
  float fStack_ac;
  
  uVar5 = ZEXT48(&stack0x00000000);
  uVar1 = *(uint *)(param_2 + 0x1c);
  puVar6 = (uint *)(param_2 + 0x1c);
  iVar7 = 0;
  if ('\0' < *(char *)(uVar1 + 0x20)) {
    iVar9 = 0;
    dVar13 = (double)lbl_821AAD20;
    iVar8 = 0;
    do {
      iVar11 = iVar8 + *(int *)(param_2 + 0x48);
      iVar10 = (int)*(char *)(*(int *)(uVar1 + 0x8c) + iVar9 + 0x24);
      iVar3 = iVar10 * 0x24 + param_2;
      dVar12 = dVar13;
      if ((*(int *)(iVar11 + 0x24) != 0) && (*(char *)(*(int *)(iVar11 + 0x24) + 0xe8) == '\x05')) {
        dVar12 = (double)*(float *)(iVar3 + 0x5c);
      }
      *(float *)(iVar11 + 200) = (float)dVar12;
      *(undefined4 *)(iVar11 + 0xcc) = *(undefined4 *)(iVar3 + 0x60);
      *(undefined4 *)(iVar11 + 0xd4) = *(undefined4 *)(iVar3 + 0x58);
      *(undefined4 *)(iVar11 + 0xd0) = *(undefined4 *)(iVar3 + 0x54);
      fn_82CE50D8(uVar5 - 0xa0,(ulonglong)*(uint *)(param_2 + 0x18) + 0xf0,
                   (ulonglong)*puVar6 + 0x40);
      uVar2 = storeVectorElementWordIndexed(in_vs44,0,uVar5 - 0xb0);
      *(undefined4 *)(uVar5 - 0xb0) = uVar2;
      if (*(char *)(*(int *)(param_2 + 0xa0) + iVar7) == '\0') {
        fVar4 = *(float *)(iVar11 + 0xd0) + fStack_b0;
        if (*(int *)(iVar10 * 4 + param_4) != 0) {
          uVar2 = storeVectorElementWordIndexed(in_vs44,0,uVar5 - 0xac);
          *(undefined4 *)(uVar5 - 0xac) = uVar2;
          fVar4 = fVar4 - fStack_ac;
        }
        fVar4 = fVar4 / *(float *)(*(int *)(*puVar6 + 0x8c) + iVar9);
        *(float *)(iVar11 + 0xc0) = fVar4;
        *(float *)(iVar11 + 0xc4) =
             (float)((double)fVar4 * param_1 + (double)*(float *)(iVar11 + 0xc4));
      }
      else {
        *(float *)(iVar11 + 0xc0) = (float)dVar13;
      }
      uVar1 = *puVar6;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0xe0;
      iVar9 = iVar9 + 0x28;
    } while (iVar7 < *(char *)(uVar1 + 0x20));
  }
  return;
}

