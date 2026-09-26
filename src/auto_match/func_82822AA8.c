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
extern int fn_828229C8();
extern int fn_82822A38();
extern unsigned int lbl_8320A778;


void fn_82822AA8(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar1 = (ulonglong)*(uint *)param_1;
  uVar4 = 1;
  uVar2 = (ulonglong)lbl_8320A778;
  if (uVar1 != uVar2) {
    uVar3 = 0;
    do {
      piVar5 = (int *)uVar1;
      if (piVar5[3] != 0) break;
      uVar7 = *(uint *)(*piVar5 + 4);
      if (uVar1 == uVar7) {
        uVar7 = *(uint *)(*piVar5 + 8);
        if (((ulonglong)uVar7 == (uVar2 & 0xffffffff)) || (*(int *)(uVar7 + 0xc) == 1)) {
          if ((param_1 & 0xffffffff) == (ulonglong)(uint)piVar5[2]) {
            fn_828229C8();
            param_1 = uVar1;
          }
          piVar5 = (int *)param_1;
          *(int *)(*piVar5 + 0xc) = (int)uVar4;
          *(int *)(*(int *)*piVar5 + 0xc) = (int)uVar3;
          fn_82822A38(*(undefined4 *)*piVar5);
        }
        else {
code_r0x82822b54:
          piVar5[3] = (int)uVar4;
          *(int *)(uVar7 + 0xc) = (int)uVar4;
          *(int *)(*(int *)*(undefined4 *)param_1 + 0xc) = (int)uVar3;
          param_1 = (ulonglong)*(uint *)*(undefined4 *)param_1;
        }
      }
      else {
        if (((ulonglong)uVar7 != (uVar2 & 0xffffffff)) && (*(int *)(uVar7 + 0xc) != 1))
        goto code_r0x82822b54;
        if ((param_1 & 0xffffffff) == (ulonglong)(uint)piVar5[1]) {
          fn_82822A38();
          param_1 = uVar1;
        }
        piVar5 = (int *)param_1;
        *(int *)(*piVar5 + 0xc) = (int)uVar4;
        *(int *)(*(int *)*piVar5 + 0xc) = (int)uVar3;
        fn_828229C8(*(undefined4 *)*piVar5);
      }
      uVar1 = (ulonglong)*(uint *)param_1;
    } while (uVar1 != (uVar2 & 0xffffffff));
  }
  while (puVar6 = (uint *)param_1, (ulonglong)*puVar6 != (uVar2 & 0xffffffff)) {
    param_1 = (ulonglong)*puVar6;
  }
  puVar6[3] = (uint)uVar4;
  return;
}

