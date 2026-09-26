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
extern unsigned int uStack_251;
extern unsigned int uStack_252;


void fn_82CFDFE0(int param_1,longlong param_2,ulonglong param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_254 [2];
  undefined1 uStack_252;
  undefined1 uStack_251;
  undefined1 auStack_250 [592];
  
  iVar2 = (int)param_3;
  if (*(char *)(param_1 + 0xc) == '\0') {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))
              (*(int **)(param_1 + 8),param_2,(longlong)iVar2 * (longlong)param_4);
  }
  else {
    uVar6 = (longlong)iVar2 * (longlong)param_4;
    uVar5 = 0x200;
    lVar7 = (longlong)(0x200 / iVar2);
    uVar4 = uVar6 + ((longlong)((int)uVar6 >> 9) +
                     (ulonglong)((int)uVar6 < 0 && (uVar6 & 0x1ff) != 0) & 0x7fffff) * -0x200;
    trapWord(6,param_3,0);
    trapWord(6,param_3,0);
    trapWord(5,param_3 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),0xffff);
    for (; 0 < (longlong)uVar6; uVar6 = uVar6 - uVar5) {
      if ((int)uVar6 < 0x200) {
        uVar5 = uVar4;
        lVar7 = (longlong)((int)uVar4 / iVar2);
      }
      fn_82CFC050(auStack_250,param_2,uVar5);
      iVar8 = (int)lVar7;
      if (iVar2 == 2) {
        if (0 < iVar8) {
          puVar3 = &uStack_251;
          lVar9 = lVar7;
          do {
            uVar1 = puVar3[1];
            puVar3[1] = puVar3[2];
            puVar3 = puVar3 + 2;
            *puVar3 = uVar1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      else if (iVar2 == 4) {
        if (0 < iVar8) {
          puVar3 = &uStack_252;
          lVar9 = lVar7;
          do {
            uVar1 = puVar3[2];
            puVar3[2] = puVar3[5];
            puVar3[5] = uVar1;
            uVar1 = puVar3[3];
            puVar3[3] = puVar3[4];
            puVar3 = puVar3 + 4;
            *puVar3 = uVar1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      else if ((iVar2 == 8) && (0 < iVar8)) {
        puVar3 = auStack_254;
        lVar9 = lVar7;
        do {
          uVar1 = puVar3[4];
          puVar3[4] = puVar3[0xb];
          puVar3[0xb] = uVar1;
          uVar1 = puVar3[5];
          puVar3[5] = puVar3[10];
          puVar3[10] = uVar1;
          uVar1 = puVar3[6];
          puVar3[6] = puVar3[9];
          puVar3[9] = uVar1;
          uVar1 = puVar3[7];
          puVar3[7] = puVar3[8];
          puVar3 = puVar3 + 8;
          *puVar3 = uVar1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),auStack_250,uVar5);
      param_2 = uVar5 + param_2;
    }
  }
  return;
}

