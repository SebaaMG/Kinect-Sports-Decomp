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
extern int fn_82F65350();


void fn_82E85580(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if ((*(int *)(param_1 + 0x1a74) != 0) || (*(int *)(param_1 + 0x844) != 0)) {
    uVar1 = fn_82F65350();
    *(uint *)(param_1 + 0x500) = uVar1 & 1;
    if ((uVar1 & 1) != 0) {
      if ((*(int *)(param_1 + 0x6f4c) == 0) || (*(int *)(param_1 + 0x6f7c) != 0)) {
        if (*(int *)(param_1 + 0x6f48) == 0) {
          iVar5 = 1;
        }
        else {
          iVar5 = *(int *)(param_1 + 0x6f60) + 1;
        }
      }
      else if (*(int *)(param_1 + 0x6f48) == 0) {
        iVar5 = 2;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x6f54) + 2;
      }
      *(int *)(param_1 + 0x544) = iVar5;
      iVar6 = 0;
      if (0 < iVar5) {
        piVar7 = (int *)(param_1 + 0x4f8);
        do {
          uVar1 = fn_82F65350();
          uVar4 = (ulonglong)*(uint *)(param_1 + 0x31c) - 2;
          piVar7[5] = uVar1 - ((int)uVar1 / (int)uVar4) * (int)uVar4;
          trapWord(6,uVar4,0);
          trapWord(5,uVar4 & ~((((ulonglong)uVar1 & 0x7fffffff) << 1 | (ulonglong)(uVar1 >> 0x1f)) -
                              1),0xffff);
          uVar2 = fn_82F65350();
          uVar1 = piVar7[5];
          uVar4 = (ulonglong)*(uint *)(param_1 + 800) - 2;
          piVar7[6] = uVar2 - ((int)uVar2 / (int)uVar4) * (int)uVar4;
          trapWord(6,uVar4,0);
          trapWord(5,uVar4 & ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) -
                              1),0xffff);
          uVar3 = fn_82F65350();
          uVar2 = piVar7[6];
          uVar4 = ((ulonglong)*(uint *)(param_1 + 0x31c) - (ulonglong)uVar1) - 1;
          trapWord(6,uVar4,0);
          trapWord(5,uVar4 & ~((((ulonglong)uVar3 & 0x7fffffff) << 1 | (ulonglong)(uVar3 >> 0x1f)) -
                              1),0xffff);
          piVar7[3] = (uVar3 - ((int)uVar3 / (int)uVar4) * (int)uVar4) + 2;
          uVar1 = fn_82F65350();
          uVar4 = ((ulonglong)*(uint *)(param_1 + 800) - (ulonglong)uVar2) - 1;
          iVar6 = iVar6 + 1;
          trapWord(6,uVar4,0);
          trapWord(5,uVar4 & ~((((ulonglong)uVar1 & 0x7fffffff) << 1 | (ulonglong)(uVar1 >> 0x1f)) -
                              1),0xffff);
          piVar7 = piVar7 + 4;
          *piVar7 = (uVar1 - ((int)uVar1 / (int)uVar4) * (int)uVar4) + 2;
        } while (iVar6 < *(int *)(param_1 + 0x544));
      }
    }
  }
  return;
}

