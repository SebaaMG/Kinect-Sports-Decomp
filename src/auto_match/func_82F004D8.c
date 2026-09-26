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


void fn_82F004D8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar4 = (longlong)*(int *)(param_1 + 800) * (longlong)*(int *)(param_1 + 0x31c);
  iVar1 = (int)lVar4 >> 2;
  lVar9 = (longlong)iVar1;
  if (*(uint *)(param_1 + 0x7820) != param_2) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x7820) + 8;
    iVar3 = 0;
    if (0 < (int)lVar4) {
      do {
        trapWord(6,uVar7,0);
        lVar5 = (longlong)(int)(*(byte *)(iVar3 + *(int *)(param_1 + 0x1abc)) - 0x80) *
                (longlong)(int)(param_2 + 8);
        uVar6 = lVar5 + ((int)uVar7 >> 1);
        trapWord(5,uVar7 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),0xffff)
        ;
        cVar2 = (char)((int)uVar6 / (int)uVar7);
        if (lVar5 < 0) {
          cVar2 = cVar2 + '\x7f';
        }
        else {
          cVar2 = cVar2 + -0x80;
        }
        *(char *)(iVar3 + *(int *)(param_1 + 0x1abc)) = cVar2;
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  if (*(uint *)(param_1 + 0x7824) != param_3) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x7824) + 8;
    iVar8 = (int)uVar7;
    iVar3 = 0;
    lVar4 = lVar9;
    if (0 < iVar1) {
      do {
        trapWord(6,uVar7,0);
        lVar5 = (longlong)(int)(*(byte *)(*(int *)(param_1 + 0x1ac0) + iVar3) - 0x80) *
                (longlong)(int)(param_3 + 8);
        uVar6 = lVar5 + (iVar8 >> 1);
        cVar2 = (char)((int)uVar6 / iVar8);
        if (lVar5 < 0) {
          cVar2 = cVar2 + '\x7f';
        }
        else {
          cVar2 = cVar2 + -0x80;
        }
        *(char *)(*(int *)(param_1 + 0x1ac0) + iVar3) = cVar2;
        iVar3 = iVar3 + 1;
        trapWord(5,uVar7 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),0xffff)
        ;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        trapWord(6,uVar7,0);
        lVar4 = (longlong)(int)(*(byte *)(*(int *)(param_1 + 0x1ac4) + iVar3) - 0x80) *
                (longlong)(int)(param_3 + 8);
        uVar6 = lVar4 + (iVar8 >> 1);
        cVar2 = (char)((int)uVar6 / iVar8);
        if (lVar4 < 0) {
          cVar2 = cVar2 + '\x7f';
        }
        else {
          cVar2 = cVar2 + -0x80;
        }
        *(char *)(*(int *)(param_1 + 0x1ac4) + iVar3) = cVar2;
        iVar3 = iVar3 + 1;
        trapWord(5,uVar7 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),0xffff)
        ;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return;
}

