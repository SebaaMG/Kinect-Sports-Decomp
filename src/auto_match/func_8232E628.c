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
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822BFB28();
extern int fn_82520780();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern U64 storeWordConditionalIndexed();


void fn_8232E628(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char cVar5;
  int iVar4;
  longlong lVar6;
  longlong lVar7;
  uint *puVar9;
  ulonglong uVar8;
  int iVar10;
  int iVar11;
  char in_RESERVE;
  byte in_cr0;
  double dVar12;
  double dVar13;
  undefined1 auStack_58 [4];
  int *piStack_54;
  
  if (*(uint *)(param_1 + 0x10) != param_2) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      piVar3 = (int *)fn_822BFB28(auStack_58,*(undefined4 *)(param_1 + 0xc));
      iVar4 = piVar3[1];
      iVar1 = *piVar3;
      iVar11 = 0;
      iVar10 = 0;
      if (iVar4 != 0) {
        cVar5 = fn_8223AAC0(iVar4);
        in_cr0 = (cVar5 == '\0') << 1;
        if (cVar5 != '\0') {
          iVar11 = iVar1;
          iVar10 = iVar4;
        }
      }
      if (ZEXT48(piStack_54) != 0) {
        lVar7 = ZEXT48(piStack_54) + 8;
        do {
          puVar9 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar9 - 1;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar9 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_54 + 4))();
        }
      }
      uVar8 = (ulonglong)*(uint *)(*(int *)(iVar11 + 4) + 0x78c) - 1;
      uVar8 = ((uVar8 & 0xffffffff) >> 0x1f) - 1 & uVar8;
      if (6 < (int)uVar8) {
        uVar8 = 7;
      }
      dVar13 = (double)*(float *)((int)((uVar8 + 0xb & 0xffffffff) << 2) + iVar11);
      iVar4 = fn_82520780(dVar13,0xffffffff83265a28);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 1;
        dVar12 = (double)lbl_8218E8E8;
        *(uint *)(param_1 + 0x30) = (uint)(dVar13 < dVar12);
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        *(float *)(param_1 + 0x34) =
             (float)((double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                     (double)lbl_821917B0 + dVar12);
      }
      else {
        iVar4 = fn_82520780((double)*(float *)(param_1 + 0x24),0xffffffff83265a28);
        if (iVar4 != 0) {
          fn_8232E628(param_1,2);
          if (iVar10 == 0) {
            return;
          }
          fn_822315A0(iVar10);
          return;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      if (iVar10 != 0) {
        fn_822315A0(iVar10);
      }
    }
    else if (param_2 < 3) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(uint *)(param_1 + 0x10) = param_2;
  }
  return;
}

