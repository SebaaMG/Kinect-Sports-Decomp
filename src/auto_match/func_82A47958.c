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
extern int fn_82A453D0();


void fn_82A47958(int param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  uVar7 = fn_82A453D0(*(undefined4 *)(param_1 + 0x1d8),param_2,param_3,aiStack_30);
  if (((param_2 & 0xffffffff) == (ulonglong)(*(int *)(param_1 + 0x1c0) - 1)) &&
     (uVar2 = *(uint *)(param_1 + 0x40), (uVar2 & 1) != 0)) {
    iVar9 = 0;
    if ((uVar7 & 0xffffffff) != 0) {
      uVar11 = *(uint *)(param_1 + 0x1e4);
      iVar3 = *(int *)(param_1 + 0x1e0);
      puVar10 = (undefined2 *)(aiStack_30[0] + -2);
      do {
        uVar8 = iVar9 + param_4;
        puVar10 = puVar10 + 1;
        iVar9 = iVar9 + 1;
        trapWord(6,(ulonglong)uVar11,0);
        *(undefined2 *)
         ((int)((param_2 & 0xffffffff) << 2) +
         uVar2 * (uVar8 - (uVar8 / uVar11) * uVar11) * 2 + iVar3) = *puVar10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  else {
    iVar9 = 0;
    if ((uVar7 & 0xffffffff) != 0) {
      uVar2 = *(uint *)(param_1 + 0x1e4);
      iVar3 = *(int *)(param_1 + 0x40);
      puVar10 = (undefined2 *)(aiStack_30[0] + -2);
      iVar4 = *(int *)(param_1 + 0x1e0);
      do {
        uVar11 = iVar9 + param_4;
        puVar5 = puVar10 + 1;
        puVar10 = puVar10 + 2;
        uVar1 = *puVar10;
        iVar9 = iVar9 + 1;
        trapWord(6,(ulonglong)uVar2,0);
        puVar6 = (undefined2 *)
                 ((uVar11 - (uVar11 / uVar2) * uVar2) * iVar3 * 2 + iVar4 +
                 (int)((param_2 & 0xffffffff) << 2));
        *puVar6 = *puVar5;
        puVar6[1] = uVar1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

