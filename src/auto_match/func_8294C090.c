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
extern int fn_8294C018();
extern int fn_82963370();
extern int fn_82963450();
extern int fn_829636A8();


undefined8 fn_8294C090(int param_1)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar1 = **(uint **)(param_1 + 0x104);
  uVar3 = (ulonglong)uVar1 & 0xfffff;
  if ((((uVar3 == (*(uint **)(param_1 + 0x104))[3]) &&
       (iVar4 = fn_82963370(*(undefined4 *)(param_1 + 0x104)), iVar4 == 0)) &&
      ((iVar4 = fn_829636A8(*(undefined4 *)(param_1 + 0x104)), iVar4 == 0 ||
       (iVar4 = fn_82963450(*(undefined4 *)(param_1 + 0x104)), iVar4 != 0)))) &&
     ((uVar3 < 5 && ((uVar1 & 0xfffff) != 0)))) {
    uVar8 = 0;
    do {
      uVar5 = 0;
      uVar6 = (uVar3 - uVar8) - 1;
      if (uVar6 != 0) {
        lVar7 = 0;
        do {
          piVar2 = (int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + (int)lVar7);
          if (*(uint *)(*(int *)(piVar2[1] * 4 + *(int *)(param_1 + 0x14)) + 0x10) <
              *(uint *)(*(int *)(*piVar2 * 4 + *(int *)(param_1 + 0x14)) + 0x10)) {
            fn_8294C018(*(undefined4 *)(param_1 + 0x104));
          }
          uVar5 = uVar5 + 1;
          lVar7 = lVar7 + 4;
        } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffffffff) < uVar3);
    return 0;
  }
  return 1;
}

