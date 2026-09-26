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
extern unsigned int *auStack_250;
extern unsigned int *auStack_254;
extern int fn_82CFC050();


/* WARNING: Removing unreachable block (ram,0x82cfe128) */
/* WARNING: Removing unreachable block (ram,0x82cfe134) */
/* WARNING: Removing unreachable block (ram,0x82cfe13c) */
/* WARNING: Removing unreachable block (ram,0x82cfe0f0) */
/* WARNING: Removing unreachable block (ram,0x82cfe0f8) */
/* WARNING: Removing unreachable block (ram,0x82cfe100) */
/* WARNING: Removing unreachable block (ram,0x82cfe124) */

void fn_82CFE6C8(int param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_254 [4];
  undefined1 auStack_250 [592];
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))
              (*(int **)(param_1 + 8),param_2,(longlong)param_3 * 8);
  }
  else {
    uVar5 = (longlong)param_3 * 8;
    uVar4 = 0x200;
    lVar6 = 0x40;
    uVar3 = uVar5 + ((longlong)((int)uVar5 >> 9) +
                     (ulonglong)((int)uVar5 < 0 && (uVar5 & 0x1ff) != 0) & 0x7fffff) * -0x200;
    trapWord(6,8,0);
    trapWord(6,8,0);
    trapWord(5,~(((uVar3 & 0xffffffff) >> 0x1f) - 1) & 8,0xffff);
    for (; 0 < (longlong)uVar5; uVar5 = uVar5 - uVar4) {
      if ((int)uVar5 < 0x200) {
        uVar4 = uVar3;
        lVar6 = (longlong)((int)uVar3 / 8);
      }
      fn_82CFC050(auStack_250,param_2,uVar4);
      if (0 < (int)lVar6) {
        puVar2 = auStack_254;
        lVar7 = lVar6;
        do {
          uVar1 = puVar2[4];
          puVar2[4] = puVar2[0xb];
          puVar2[0xb] = uVar1;
          uVar1 = puVar2[5];
          puVar2[5] = puVar2[10];
          puVar2[10] = uVar1;
          uVar1 = puVar2[6];
          puVar2[6] = puVar2[9];
          puVar2[9] = uVar1;
          uVar1 = puVar2[7];
          puVar2[7] = puVar2[8];
          puVar2 = puVar2 + 8;
          *puVar2 = uVar1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),auStack_250,uVar4);
      param_2 = uVar4 + param_2;
    }
  }
  return;
}

