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
extern int fn_82F691F0();


undefined8 fn_8268F900(int param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (*(uint *)(param_1 + 0x19c) < 0x20) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 8);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x10);
    iVar1 = *(uint *)(param_1 + 8) * 8;
    uVar4 = *(int *)(param_1 + 0xc) + 3;
    uVar3 = ~(uVar5 - 1);
    if ((uVar7 - ((((iVar1 + *(uint *)(param_1 + 0x10)) - 1 >> (uVar4 & 0x3f)) + uVar5) - 1 & uVar3)
        & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x14);
      trapWord(6,uVar7,0);
      uVar7 = (longlong)
              (int)(((((((iVar1 + (int)param_2) - 1U >> (uVar4 & 0x3f)) + uVar5) - 1 & uVar3) +
                      uVar7 + param_2) - 1 & 0xffffffff) / uVar7) *
              (longlong)(int)*(uint *)(param_1 + 0x14);
    }
    if ((uVar7 - ((((iVar1 + (int)uVar7) - 1U >> (uVar4 & 0x3f)) + uVar5) - 1 & uVar3) & 0xffffffff)
        < (param_2 & 0xffffffff)) {
      uVar4 = *(uint *)(param_1 + 8);
      do {
        uVar7 = *(uint *)(param_1 + 0x14) + uVar7;
      } while ((uVar7 - (((ulonglong)
                          ((uVar4 * 8 + (int)uVar7) - 1 >> (*(int *)(param_1 + 0xc) + 3U & 0x3f)) +
                         (ulonglong)uVar4) - 1 & ~((ulonglong)uVar4 - 1)) & 0xffffffff) <
               (param_2 & 0xffffffff));
    }
    do {
      lVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4),uVar7);
      if (lVar2 != 0) {
        uVar3 = (ulonglong)*(uint *)(param_1 + 8);
        lVar6 = ((*(uint *)(param_1 + 8) * 8 + (int)uVar7) - 1 >>
                (*(int *)(param_1 + 0xc) + 3U & 0x3f)) + uVar3;
        uVar5 = lVar6 - 1U & ~(uVar3 - 1);
        lVar6 = (**(code **)(**(int **)(param_1 + 4) + 0xc))
                          (*(int **)(param_1 + 4),(lVar2 - (lVar6 - 1U & ~(uVar3 - 1))) + uVar7,
                           uVar5);
        if (lVar6 == 0) {
          (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),lVar2,uVar7);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar6,0,uVar5 & 0xfffffffc);
      }
      uVar4 = *(uint *)(param_1 + 0x14);
      uVar3 = (ulonglong)uVar4;
      trapWord(6,uVar3,0);
      uVar7 = (longlong)(int)(((((uVar7 & 0xffffffff) >> 1) + uVar3) - 1 & 0xffffffff) / uVar3) *
              (longlong)(int)uVar4;
      if ((uVar7 & 0xffffffff) < ((ulonglong)uVar4 & 0x7fffffff) << 1) {
        return 0;
      }
      uVar4 = *(uint *)(param_1 + 8);
    } while ((param_2 & 0xffffffff) <=
             (uVar7 - (((ulonglong)
                        ((uVar4 * 8 + (int)uVar7) - 1 >> (*(int *)(param_1 + 0xc) + 3U & 0x3f)) +
                       (ulonglong)uVar4) - 1 & ~((ulonglong)uVar4 - 1)) & 0xffffffff));
  }
  return 0;
}

