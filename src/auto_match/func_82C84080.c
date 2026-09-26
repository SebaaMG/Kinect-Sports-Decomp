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
extern int fn_82CA8498();
extern int fn_82CAAA10();


void fn_82C84080(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  if (param_2 == 0) {
    fn_82CA8498(param_1,0);
    fn_82CAAA10(param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd4);
    iVar2 = *(int *)(param_1 + 0xd8);
    fn_82CA8498(param_1,2);
    fn_82CAAA10(param_1);
    iVar3 = *(int *)(param_1 + 0xcc);
    *(int *)(param_1 + 0xd4) = iVar1 >> 1;
    *(int *)(param_1 + 0xd8) = iVar2 >> 1;
    *(int *)(param_1 + 0xe4) = iVar3 << 5;
    *(int *)(param_1 + 0xec) = iVar3 * 0x10 + -8;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xd0) << 4;
    *(int *)(param_1 + 0xcc) = iVar3 << 1;
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) << 1;
    if ((*(int *)(param_1 + 0x50c8) != 0) && (*(int *)(param_1 + 0x50cc) != 0)) {
      iVar1 = *(int *)(param_1 + 0x8c);
      iVar8 = 0;
      iVar2 = *(int *)(param_1 + 0x88);
      uVar7 = 0;
      iVar3 = *(int *)(param_1 + 0x110);
      if (iVar1 != 0) {
        do {
          uVar10 = 0;
          if (*(int *)(param_1 + 0x88) != 0) {
            puVar9 = (uint *)(iVar8 * 0x18 + iVar2 * iVar1 * 0x18 + iVar3 + -0x18);
            do {
              iVar8 = iVar8 + 1;
              puVar4 = puVar9 + 6;
              bVar6 = *(int *)(param_1 + 0x88) - 1U == uVar10;
              bVar5 = uVar10 == 0;
              uVar10 = uVar10 + 1;
              puVar9 = puVar9 + 6;
              *puVar9 = (uint)((((ulonglong)LZCOUNT((*(int *)(param_1 + 0x8c) + -1) - uVar7) >> 4 &
                                 2 | (ulonglong)bVar6) << 2 |
                               (ulonglong)bVar5 | (ulonglong)LZCOUNT(uVar7) >> 4 & 2) << 0xc) |
                        *puVar4 & 0xffff0fff;
            } while (uVar10 < *(uint *)(param_1 + 0x88));
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_1 + 0x8c));
      }
    }
  }
  return;
}

