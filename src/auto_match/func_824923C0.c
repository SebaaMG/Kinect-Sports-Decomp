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
extern int fn_82F68CC0();
extern unsigned int uStack_86;
extern unsigned int uStack_88;
extern unsigned int uStack_8a;
extern unsigned int uStack_8c;
extern unsigned int uStack_8e;
extern unsigned int uStack_90;
extern unsigned int uStack_92;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9a;
extern unsigned int uStack_9c;
extern unsigned int uStack_9e;
extern unsigned int uStack_a0;


void fn_824923C0(ulonglong param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined2 *puVar12;
  ulonglong uVar11;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  
  iVar2 = (param_2 - (int)param_1) / 0x1c;
  lVar7 = (longlong)iVar2;
  iVar1 = (int)(param_3 - (int)param_1) / 0x1c;
  lVar4 = (longlong)iVar1;
  lVar3 = lVar7;
  lVar6 = lVar4;
  if (iVar2 != 0) {
    do {
      lVar4 = lVar3;
      lVar3 = lVar6 - (longlong)((int)lVar6 / (int)lVar4) * (longlong)(int)lVar4;
      lVar6 = lVar4;
    } while (lVar3 != 0);
  }
  if (((int)lVar4 < iVar1) && (0 < (int)lVar4)) {
    uVar5 = lVar4 * 0x1c + param_1;
    do {
      uVar10 = uVar5 + lVar7 * 0x1c;
      uVar8 = uVar5;
      if ((uVar10 & 0xffffffff) == (ulonglong)param_3) {
        uVar10 = param_1;
      }
      do {
        fn_82F68CC0(&uStack_a0,uVar8,0x1c);
        puVar12 = (undefined2 *)uVar10;
        iVar1 = (int)(param_3 - (int)puVar12) / 0x1c;
        puVar9 = (undefined2 *)uVar8;
        *puVar9 = *puVar12;
        puVar9[1] = puVar12[1];
        puVar9[2] = puVar12[2];
        puVar9[3] = puVar12[3];
        *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar12 + 4);
        puVar9[6] = puVar12[6];
        puVar9[7] = puVar12[7];
        puVar9[8] = puVar12[8];
        puVar9[9] = puVar12[9];
        puVar9[10] = puVar12[10];
        puVar9[0xb] = puVar12[0xb];
        puVar9[0xc] = puVar12[0xc];
        puVar9[0xd] = puVar12[0xd];
        *(undefined4 *)(puVar12 + 4) = uStack_98;
        *puVar12 = uStack_a0;
        puVar12[1] = uStack_9e;
        puVar12[2] = uStack_9c;
        puVar12[3] = uStack_9a;
        puVar12[6] = uStack_94;
        puVar12[7] = uStack_92;
        puVar12[8] = uStack_90;
        puVar12[9] = uStack_8e;
        puVar12[10] = uStack_8c;
        puVar12[0xb] = uStack_8a;
        puVar12[0xc] = uStack_88;
        puVar12[0xd] = uStack_86;
        if (iVar2 < iVar1) {
          uVar11 = lVar7 * 0x1c + uVar10;
        }
        else {
          uVar11 = (lVar7 - iVar1) * 0x1c + param_1;
        }
        uVar8 = uVar10;
        uVar10 = uVar11;
      } while ((uVar11 & 0xffffffff) != (uVar5 & 0xffffffff));
      lVar4 = lVar4 + -1;
      uVar5 = uVar5 - 0x1c;
    } while (0 < lVar4);
  }
  return;
}

