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
extern int fn_829682A8();


ulonglong fn_82968398(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_3 * 4 + iVar1);
  uVar5 = *(uint *)((param_4 * 4 + param_5) * 4 + *(int *)(param_2 + 0x1c));
  if (uVar5 != 0xffffffff) {
    uVar2 = *(uint *)(iVar4 + 0x58);
    do {
      iVar6 = *(int *)(uVar5 * 4 + iVar1);
      if (*(uint *)(iVar6 + 0x48) < uVar2) {
        if (*(uint *)(iVar6 + 0x58) <= *(uint *)(iVar4 + 0x48)) {
          return 0xffffffffffffffff;
        }
        if ((*(int *)(iVar4 + 0x14) == *(int *)(iVar6 + 0x14)) &&
           (*(int *)(iVar4 + 0x18) == *(int *)(iVar6 + 0x14))) {
          return (ulonglong)uVar5;
        }
        iVar9 = iVar6;
        iVar12 = iVar4;
        if (*(uint *)(iVar4 + 0x48) < *(uint *)(iVar6 + 0x48)) {
          iVar9 = iVar4;
          iVar12 = iVar6;
        }
        uVar11 = 0;
        iVar9 = *(int *)(iVar9 + 0x74) * 4;
        uVar7 = *(uint *)(*(int *)(param_2 + 0x4c) + iVar9);
        piVar13 = (int *)(*(int *)(*(int *)(param_2 + 0x50) + iVar9) * 4 + *(int *)(param_2 + 0x54))
        ;
        if (uVar7 != 0) {
          iVar9 = *(int *)(param_2 + 0x58);
          uVar3 = *(uint *)(iVar12 + 0x48);
          do {
            puVar10 = (uint *)(*piVar13 * 0xc + iVar9);
            if (*puVar10 <= uVar3) break;
            iVar8 = fn_829682A8(param_1,*(undefined4 *)(iVar12 + 0x14),
                                  *(undefined4 *)(iVar12 + 0x18),puVar10[1],puVar10[2]);
            if (iVar8 == 0) {
              return (ulonglong)uVar5;
            }
            uVar11 = uVar11 + 1;
            piVar13 = piVar13 + 1;
          } while (uVar11 < uVar7);
        }
      }
      uVar5 = *(uint *)(iVar6 + 0x30);
    } while (uVar5 != 0xffffffff);
  }
  return 0xffffffffffffffff;
}

