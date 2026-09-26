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
extern int fn_8299F910();


undefined8
fn_8299FA58(int param_1,undefined8 param_2,undefined8 param_3,uint *param_4,uint *param_5,
             undefined4 *param_6,undefined4 *param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int in_stack_00000054;
  
  uVar1 = *param_4;
  *param_7 = 0;
  *param_6 = 0;
  *param_5 = 0;
  uVar9 = (ulonglong)uVar1 & 0xfffff;
  if ((uVar1 & 0xfffff) == 0) {
    uVar5 = 0xffffffff80004005;
  }
  else {
    trapWord(6,uVar9,0);
    uVar12 = param_4[1] / uVar9;
    if ((in_stack_00000054 == 0) && (uVar6 = 0, uVar12 != 0)) {
      lVar8 = 0;
      do {
        uVar11 = 0;
        if ((uVar1 & 0xfffff) != 0) {
          do {
            if ((ulonglong)
                *(uint *)(*(int *)(*(int *)((int)((lVar8 + uVar11 & 0xffffffff) << 2) + param_4[2])
                                   * 4 + *(int *)(param_1 + 0x14)) + 0x10) != (uVar11 & 0xffffffff))
            {
              return 1;
            }
            uVar11 = uVar11 + 1;
          } while ((uVar11 & 0xffffffff) < uVar9);
        }
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + uVar9;
      } while ((uVar6 & 0xffffffff) < uVar12);
    }
    bVar4 = false;
    uVar6 = 0;
    if (uVar12 != 0) {
      lVar8 = 0;
      lVar13 = 0;
      do {
        puVar7 = (uint *)fn_8299F910(param_1,param_2,param_3,lVar13 + (ulonglong)param_4[2]);
        if (puVar7 != (uint *)0x0) {
          uVar3 = *puVar7 & 0xfff00000;
          if ((int)param_8 == 0) {
            uVar10 = 0x72100000;
LAB_8299fb88:
            if (uVar3 != uVar10) goto LAB_8299fbf8;
          }
          else if (((uVar3 != 0x60000000) && (uVar3 != 0x60500000)) && (uVar3 != 0x60a00000)) {
            uVar10 = 0x60f00000;
            goto LAB_8299fb88;
          }
          if (bVar4) {
            *param_6 = 0;
            *param_5 = 0;
            *param_7 = 0;
            return 1;
          }
          *param_7 = puVar7;
          bVar4 = true;
          *param_6 = (int)lVar8;
          if ((int)param_8 == 0) {
            iVar2 = *(int *)(*(int *)puVar7[2] * 4 + *(int *)(param_1 + 0x14));
          }
          else {
            iVar2 = *(int *)(*(int *)((*puVar7 & 0xfffff) * 4 + puVar7[2]) * 4 +
                            *(int *)(param_1 + 0x14));
          }
          *param_5 = (uint)*(byte *)(iVar2 + 0x6e);
        }
LAB_8299fbf8:
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + uVar9;
        lVar13 = ((ulonglong)uVar1 & 0xfffff) * 4 + lVar13;
      } while ((uVar6 & 0xffffffff) < uVar12);
    }
    uVar5 = 0;
  }
  return uVar5;
}

