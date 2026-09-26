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
extern int fn_82F641F8();
extern int fn_82F68BF0();
extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_82ED24C0(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  
  uVar2 = *(uint *)(param_1 + 0x4020);
  uVar9 = ((ulonglong)*(uint *)(param_1 + 0x4024) + 1 & 0xffffffff) >> 1;
  uVar3 = ((ulonglong)uVar2 + 1 & 0xffffffff) >> 1;
  iVar8 = (int)uVar3 * (int)uVar9;
  puVar7 = (undefined1 *)fn_82F68BF0(iVar8 * 3);
  if (puVar7 != (undefined1 *)0x0) {
    puVar10 = puVar7;
    if ((int)uVar9 != 0) {
      do {
        lVar11 = uVar3 - 1;
        if (0 < (int)(uVar3 - 1)) {
          do {
            pbVar4 = param_2 + 1;
            pbVar5 = param_2 + *(int *)(param_1 + 0x4020);
            bVar1 = *param_2;
            param_2 = param_2 + 2;
            *puVar10 = (char)((int)((uint)pbVar5[1] + (uint)*pbVar4 + (uint)bVar1 + (uint)*pbVar5)
                             >> 2);
            puVar10 = puVar10 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        *puVar10 = (char)((int)((uint)(param_2 + *(int *)(param_1 + 0x4020))[1] + (uint)param_2[1] +
                                (uint)*param_2 + (uint)param_2[*(int *)(param_1 + 0x4020)]) >> 2);
        if ((uint)(uVar3 << 1) == uVar2) {
          puVar10 = puVar10 + 1;
          param_2 = param_2 + 2;
        }
        uVar9 = uVar9 - 1;
        param_2 = param_2 + *(int *)(param_1 + 0x4020);
      } while (uVar9 != 0);
    }
    fn_82F68CC0(puVar10,param_2,iVar8);
    fn_82F68CC0(puVar10 + iVar8,param_2 + iVar8,iVar8);
    uVar2 = *(int *)(param_1 + 0x4024) + 1U >> 1;
    uVar6 = *(int *)(param_1 + 0x4020) + 1U >> 1;
    iVar8 = fn_82F68BF0(((longlong)(int)uVar6 * (longlong)(int)uVar2 & 0x3fffffffU) << 2);
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0xc),0,((int)uVar2 >> 3) * ((int)uVar6 >> 3) * 4);
    }
    fn_82F641F8(puVar7);
  }
  return;
}

