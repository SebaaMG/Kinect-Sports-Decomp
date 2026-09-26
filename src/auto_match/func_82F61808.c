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
extern int fn_82A1E810();
extern int fn_82BFE128();
extern int fn_82BFE9D8();
extern int fn_82F611D8();
extern U64 storeWordConditionalIndexed();


longlong fn_82F61808(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  char in_RESERVE;
  undefined4 *apuStack_50 [20];
  
  apuStack_50[0] = (undefined4 *)0x0;
  lVar6 = fn_82F611D8(param_1 + 0x30,apuStack_50);
  puVar5 = apuStack_50[0];
  if ((int)lVar6 == 0) {
    *apuStack_50[0] = param_2;
    lVar8 = param_1 + 0x2c;
    apuStack_50[0][1] = param_3;
    apuStack_50[0][2] = param_4;
    puVar9 = (uint *)lVar8;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,lVar8);
      *puVar9 = uVar3;
    }
    iVar4 = (int)param_1;
    lVar6 = fn_82BFE128(*(undefined4 *)(iVar4 + 0x34),apuStack_50[0]);
    bVar1 = lVar6 == 0;
    if (bVar1) {
      lVar6 = 0;
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = puVar5[4];
      }
    }
    else {
      do {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)*puVar9 - 1,0,lVar8);
          *puVar9 = uVar3;
          bVar1 = true;
        }
      } while (!bVar1);
      iVar2 = *(int *)(iVar4 + 0x40);
      iVar7 = puVar5[4] * 0x14;
      *(undefined4 *)(iVar7 + iVar2) = 0;
      iVar7 = iVar7 + iVar2;
      *(undefined4 *)(iVar7 + 4) = 0;
      *(undefined4 *)(iVar7 + 8) = 0;
      *(undefined4 *)(iVar7 + 0xc) = 0;
      fn_82BFE9D8(*(undefined4 *)(param_1 + 0x30));
    }
    fn_82A1E810(*(undefined4 *)(iVar4 + 0x24));
  }
  return lVar6;
}

