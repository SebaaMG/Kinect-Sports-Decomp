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
extern int fn_828142D8();
extern int fn_82824188();
extern int fn_82F68CC0();


undefined8 fn_828204F8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar6;
  ulonglong uVar5;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int aiStack_50 [20];
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0x51) != '\0') {
    iVar8 = 0;
    iVar9 = 0x54;
    uVar7 = 3;
    do {
      iVar4 = *(int *)(iVar2 + 0x30);
      iVar11 = iVar9 + iVar4;
      iVar10 = iVar8 + *(int *)(param_1 + 0x30);
      bVar1 = *(byte *)(iVar9 + iVar4);
      if (bVar1 != 0) {
        if (bVar1 == 1) {
          uVar5 = (ulonglong)*(uint *)(iVar10 + 0xd);
          if (uVar5 == 0) {
            fn_828142D8(*(undefined4 *)(iVar11 + 4),aiStack_50);
            if (aiStack_50[0] == 0) {
              uVar7 = *(uint *)(param_1 + 0xc) | 0x800;
LAB_82820664:
              *(uint *)(param_1 + 0xc) = uVar7;
              return 1;
            }
            iVar4 = 1 << (*(byte *)(iVar10 + 4) & 0x3f);
            uVar5 = (**(code **)(aiStack_50[0] + 0xc))
                              (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar11 + 0x10),iVar4,
                               0);
            iVar3 = (int)uVar5;
            *(int *)(iVar10 + 0xd) = iVar3;
            if ((uVar5 & 0xffffffff) == 0) {
              uVar7 = *(uint *)(param_1 + 0xc) | 4;
              goto LAB_82820664;
            }
            *(uint *)(iVar10 + 0x11) = ((iVar3 + iVar4) - 1U & ~(iVar4 - 1U)) - iVar3;
          }
          fn_82F68CC0(*(uint *)(iVar10 + 0x11) + uVar5,*(undefined4 *)(iVar11 + 0x18),
                       *(undefined4 *)(iVar11 + 0x10));
        }
        else if (bVar1 < 3) {
          uVar6 = uVar7;
          if (uVar7 < 3) {
LAB_82820574:
            iVar3 = *(int *)(uVar6 * 0x1c + iVar4 + 0x14);
          }
          else {
            uVar6 = (uint)*(byte *)(*(int *)(iVar2 + 0x28) + uVar7 + -3);
            iVar3 = 0;
            if (uVar6 != 0) {
              uVar6 = uVar6 + 2;
              goto LAB_82820574;
            }
          }
          iVar4 = *(int *)(iVar10 + 0x11) + *(int *)(iVar10 + 0xd);
          fn_82824188(iVar4 + iVar3,*(undefined4 *)(iVar11 + 8),iVar4,
                          *(undefined4 *)(iVar11 + 0xc),*(undefined4 *)(iVar11 + 0x18),
                          *(undefined4 *)(iVar11 + 0x10));
        }
      }
      iVar9 = iVar9 + 0x1c;
      uVar6 = uVar7 - 2;
      iVar8 = iVar8 + 0x21;
      uVar7 = uVar7 + 1;
    } while (uVar6 < *(byte *)(*(int *)(param_1 + 0x1c) + 0x51));
  }
  return 0;
}

