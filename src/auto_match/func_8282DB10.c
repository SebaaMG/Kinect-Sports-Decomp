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
extern int fn_82811680();
extern int fn_82820EF8();
extern int fn_828223C8();
extern int fn_82827750();
extern unsigned int iStack_40;


void fn_8282DB10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  int iStack_40;
  int aiStack_3c [15];
  
  iVar10 = 0;
  fn_828223C8(param_1 + 0x2f4,aiStack_3c);
  if (aiStack_3c[0] != 0) {
    do {
      iVar2 = aiStack_3c[0];
      *(undefined4 *)(aiStack_3c[0] + 0x18) = 0;
      puVar9 = (uint *)(aiStack_3c[0] + 0x18);
      uVar11 = 0;
      iVar8 = param_1 + 0x2fc;
      while (fn_828223C8(iVar8,&iStack_40), iStack_40 != 0) {
        iVar8 = iStack_40;
        iVar10 = iStack_40;
        if (*(char *)(iStack_40 + 0x28) == *(char *)(iVar2 + 0x14)) {
          if (*puVar9 < *(uint *)(iStack_40 + 0x2c)) {
            *puVar9 = *(uint *)(iStack_40 + 0x2c);
          }
          uVar1 = *(uint *)(iStack_40 + 0x2c);
          uVar5 = (ulonglong)uVar1 -
                  (uVar11 - (longlong)(int)((uVar11 & 0xffffffff) / (ulonglong)uVar1) *
                            (longlong)(int)uVar1);
          lVar6 = uVar5 - (longlong)(int)((uVar5 & 0xffffffff) / (ulonglong)uVar1) *
                          (longlong)(int)uVar1;
          lVar7 = lVar6 + uVar11;
          *(int *)(iStack_40 + 0x30) = (int)lVar6;
          *(int *)(iStack_40 + 0x24) = (int)lVar7;
          uVar11 = (ulonglong)*(uint *)(iStack_40 + 0x14) + lVar7;
        }
      }
      if (iVar10 == 0) {
        return;
      }
      uVar1 = -(int)uVar11 & 3;
      iVar8 = uVar1 + (int)uVar11;
      *(uint *)(iVar2 + 0x10) = uVar1;
      *(int *)(iVar2 + 0x1c) = iVar8;
      *(int *)(iVar2 + 0xc) = iVar8;
      fn_828223C8(aiStack_3c[0],aiStack_3c);
    } while (aiStack_3c[0] != 0);
  }
  iVar10 = param_1 + 0x2fc;
  while (fn_828223C8(iVar10,&iStack_40), iStack_40 != 0) {
    puVar12 = (undefined4 *)(*(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d8));
    *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + 0xe;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0xe;
    *puVar12 = *(undefined4 *)(iStack_40 + 0x10);
    puVar12[1] = *(undefined4 *)(iStack_40 + 0x24);
    puVar12[2] = *(undefined4 *)(iStack_40 + 0x14);
    *(undefined1 *)(puVar12 + 3) = *(undefined1 *)(iStack_40 + 0x28);
    uVar3 = fn_82811680(*(undefined4 *)(iStack_40 + 0x2c));
    *(undefined1 *)((int)puVar12 + 0xd) = uVar3;
    cVar4 = fn_82827750(param_1);
    iVar10 = iStack_40;
    if (cVar4 != '\0') {
      fn_82820EF8(puVar12,4);
      fn_82820EF8(puVar12 + 1,4);
      fn_82820EF8(puVar12 + 2,4);
      iVar10 = iStack_40;
    }
  }
  return;
}

