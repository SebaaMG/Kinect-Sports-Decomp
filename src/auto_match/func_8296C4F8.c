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


undefined8 fn_8296C4F8(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = *param_2;
  if ((uVar1 & 0xfff00000) != 0) {
    uVar4 = (ulonglong)uVar1 & 0xfffff;
    uVar8 = param_2[1] / uVar4;
    trapWord(6,uVar4,0);
    if ((int)uVar8 != 0) {
      lVar5 = 0;
      do {
        lVar7 = 0;
        if ((uVar1 & 0xfffff) != 0) {
          iVar6 = 0;
          uVar9 = uVar4;
          do {
            iVar2 = *(int *)(*(int *)((int)((lVar5 + lVar7 & 0xffffffffU) << 2) + param_2[2]) * 4 +
                            *(int *)(param_1 + 0x14));
            if ((*(int *)(iVar2 + 0x48) != -1) && (*(int *)(iVar2 + 8) == -1)) {
              iVar3 = *(int *)(*(int *)(iVar2 + 0x48) * 4 + *(int *)(param_1 + 0x18));
              if ((*param_2 & 0xfff00000) == 0x11300000) {
                *(undefined4 *)(iVar2 + 0x40) =
                     *(undefined4 *)
                      (*(int *)(*(int *)(param_2[4] + iVar6) * 4 + *(int *)(param_1 + 0x14)) + 0x40)
                ;
              }
              else {
                *(uint *)(iVar2 + 0x40) =
                     1 << (*(uint *)(iVar3 + 0x24) & 0x3f) | *(uint *)(iVar2 + 0x40);
                *(undefined4 *)(iVar3 + 0x28) = 1;
              }
            }
            lVar7 = lVar7 + 1;
            iVar6 = iVar6 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        lVar7 = 0;
        uVar9 = uVar4;
        if ((uVar1 & 0xfffff) != 0) {
          do {
            iVar2 = *(int *)(*(int *)((int)((lVar5 + lVar7 & 0xffffffffU) << 2) + param_2[2]) * 4 +
                            *(int *)(param_1 + 0x14));
            iVar6 = *(int *)(iVar2 + 0x48);
            if (((iVar6 != -1) && (*(int *)(iVar2 + 8) == -1)) &&
               (iVar6 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x18)), *(int *)(iVar6 + 0x28) != 0)
               ) {
              *(undefined4 *)(iVar6 + 0x28) = 0;
              *(uint *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 1U & 0x1f;
            }
            lVar7 = lVar7 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        uVar8 = uVar8 - 1;
        lVar5 = lVar5 + uVar4;
      } while (uVar8 != 0);
    }
  }
  return 0;
}

