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
extern unsigned int lbl_831769B8;


void fn_830B9008(int param_1,int param_2)

{
  uint uVar2;
  ulonglong uVar1;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar7;
  ulonglong uVar6;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  
  uVar5 = 0;
  uVar2 = (uint)(*(ushort *)(param_2 + 0x34) >> 1);
  uVar1 = (ulonglong)(*(ushort *)(param_2 + 0x32) >> 1);
  if (uVar2 != 0) {
    iVar4 = 0;
    puVar9 = (undefined1 *)(*(int *)(param_2 + 0x524) + -1);
    do {
      if ((uVar5 == 0) || (iVar7 = 0, *(int *)(*(int *)(param_1 + 0x55d0) + iVar4) != 0)) {
        iVar7 = 1;
      }
      iVar8 = 0;
      if (uVar1 != 0) {
        uVar10 = uVar1;
        do {
          bVar3 = iVar8 == 0;
          iVar8 = iVar8 + 1;
          uVar6 = *(ulonglong *)(&lbl_831769B8 + ((uint)bVar3 + iVar7 * 2) * 8) & 0xf0f0f0f0f0f;
          puVar9[1] = (char)uVar6;
          puVar9[2] = (char)(uVar6 >> 8);
          puVar9[3] = (char)(uVar6 >> 0x10);
          puVar9[4] = (char)(uVar6 >> 0x18);
          puVar9[5] = (char)(uVar6 >> 0x20);
          puVar9 = puVar9 + 6;
          *puVar9 = (char)(uVar6 >> 0x28);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < uVar2);
  }
  return;
}

