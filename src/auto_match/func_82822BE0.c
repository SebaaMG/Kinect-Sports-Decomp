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
extern int fn_828229C8();
extern int fn_82822A38();
extern unsigned int lbl_8320A778;


void fn_82822BE0(ulonglong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar7;
  uint uVar9;
  ulonglong uVar8;
  uint uVar6;
  
  puVar7 = (uint *)param_1;
  uVar5 = 1;
  uVar6 = 1;
  uVar3 = (ulonglong)lbl_8320A778;
  if (*puVar7 != uVar3) {
    uVar4 = 0;
    do {
      uVar6 = (uint)uVar5;
      puVar7 = (uint *)param_1;
      if (puVar7[3] != 1) break;
      uVar9 = *puVar7;
      uVar2 = *(uint *)(uVar9 + 4);
      if ((param_1 & 0xffffffff) == (ulonglong)uVar2) {
        uVar2 = *(uint *)(uVar9 + 8);
        if (*(int *)(uVar2 + 0xc) == 0) {
          *(uint *)(uVar2 + 0xc) = uVar6;
          *(int *)(*puVar7 + 0xc) = (int)uVar4;
          fn_828229C8(*puVar7);
          uVar9 = *(uint *)param_1;
          uVar2 = *(uint *)(uVar9 + 8);
        }
        puVar7 = (uint *)param_1;
        if ((*(int *)(*(int *)(uVar2 + 4) + 0xc) == 1) && (*(int *)(*(int *)(uVar2 + 8) + 0xc) == 1)
           ) {
LAB_82822d1c:
          *(int *)(uVar2 + 0xc) = (int)uVar4;
          param_1 = (ulonglong)*puVar7;
        }
        else {
          if (*(int *)(*(int *)(uVar2 + 8) + 0xc) == 1) {
            *(int *)(*(int *)(uVar2 + 4) + 0xc) = (int)uVar5;
            *(int *)(uVar2 + 0xc) = (int)uVar4;
            fn_82822A38();
            uVar9 = *(uint *)param_1;
            uVar2 = *(uint *)(uVar9 + 8);
          }
          *(undefined4 *)(uVar2 + 0xc) = *(undefined4 *)(uVar9 + 0xc);
          *(int *)(*(int *)param_1 + 0xc) = (int)uVar5;
          *(int *)(*(int *)(uVar2 + 8) + 0xc) = (int)uVar5;
          fn_828229C8(*(int *)param_1);
          puVar1 = (undefined4 *)*(undefined4 *)param_1;
          for (; uVar8 = ZEXT48(puVar1), uVar8 != (uVar3 & 0xffffffff);
              puVar1 = (undefined4 *)*puVar1) {
            param_1 = uVar8;
          }
        }
      }
      else {
        if (*(int *)(uVar2 + 0xc) == 0) {
          *(uint *)(uVar2 + 0xc) = uVar6;
          *(int *)(*puVar7 + 0xc) = (int)uVar4;
          fn_82822A38(*puVar7);
          uVar9 = *(uint *)param_1;
          uVar2 = *(uint *)(uVar9 + 4);
        }
        puVar7 = (uint *)param_1;
        if ((*(int *)(*(int *)(uVar2 + 8) + 0xc) == 1) && (*(int *)(*(int *)(uVar2 + 4) + 0xc) == 1)
           ) goto LAB_82822d1c;
        if (*(int *)(*(int *)(uVar2 + 4) + 0xc) == 1) {
          *(int *)(*(int *)(uVar2 + 8) + 0xc) = (int)uVar5;
          *(int *)(uVar2 + 0xc) = (int)uVar4;
          fn_828229C8();
          uVar9 = *(uint *)param_1;
          uVar2 = *(uint *)(uVar9 + 4);
        }
        *(undefined4 *)(uVar2 + 0xc) = *(undefined4 *)(uVar9 + 0xc);
        *(int *)(*(int *)param_1 + 0xc) = (int)uVar5;
        *(int *)(*(int *)(uVar2 + 4) + 0xc) = (int)uVar5;
        fn_82822A38(*(int *)param_1);
        puVar1 = (undefined4 *)*(undefined4 *)param_1;
        for (; uVar8 = ZEXT48(puVar1), uVar8 != (uVar3 & 0xffffffff); puVar1 = (undefined4 *)*puVar1
            ) {
          param_1 = uVar8;
        }
      }
      uVar6 = (uint)uVar5;
      puVar7 = (uint *)param_1;
    } while ((ulonglong)*puVar7 != (uVar3 & 0xffffffff));
  }
  puVar7[3] = uVar6;
  return;
}

