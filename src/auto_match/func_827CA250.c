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
extern int fn_827C1AF8();


void fn_827CA250(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  
  iVar12 = 0;
  iVar8 = *(int *)(param_2 + 4) + *(int *)(param_1 + 0x1a0);
  puVar4 = (uint *)*param_4;
  bVar1 = *(byte *)(iVar8 + 0x8c);
  bVar2 = *(byte *)(iVar8 + 0x96);
  uVar10 = (uint)bVar2;
  puVar11 = puVar4;
  if (0 < *(int *)(param_1 + 0x114)) {
    do {
      uVar9 = *puVar11;
      uVar6 = *(int *)(param_1 + 0x5c) + uVar9;
      if (uVar9 < uVar6) {
        puVar5 = (undefined1 *)(*param_3 + -1);
        do {
          puVar5 = puVar5 + 1;
          uVar3 = *puVar5;
          if (bVar1 != 0) {
            puVar7 = (undefined1 *)(uVar9 - 1);
            uVar13 = (uint)bVar1;
            if (bVar1 != 0) {
              do {
                puVar7 = puVar7 + 1;
                *puVar7 = uVar3;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar9 = uVar9 + bVar1;
          }
        } while (uVar9 < uVar6);
      }
      if (1 < bVar2) {
        fn_827C1AF8(puVar4,iVar12,puVar4,iVar12 + 1,uVar10 - 1,*(undefined4 *)(param_1 + 0x5c));
      }
      iVar12 = iVar12 + uVar10;
      param_3 = param_3 + 1;
      puVar11 = puVar11 + uVar10;
    } while (iVar12 < *(int *)(param_1 + 0x114));
  }
  return;
}

