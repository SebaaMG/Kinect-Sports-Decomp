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
extern int fn_82A3C038();
extern unsigned int lbl_820893D0;
extern unsigned int lbl_8208949C;


void fn_82A3C188(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char cVar7;
  undefined1 *puVar5;
  ulonglong uVar4;
  int iVar6;
  int iVar8;
  uint uVar9;
  
  uVar9 = 0;
  if (param_2 != 0) {
    iVar8 = 0;
    do {
      if ((1 << (uVar9 & 7) & (uint)*(byte *)((uVar9 >> 3) + *(int *)(param_1 + 0x2c))) == 0) {
        bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + uVar9);
        iVar6 = (uint)bVar1 + param_1;
        *(uint *)(param_1 + 0x14) =
             (uint)*(ushort *)((bVar1 + 0x19ec) * 2 + param_1) <<
             ((int)*(char *)(param_1 + 0x18) - (uint)*(byte *)(iVar6 + 0x2530) & 0x3f) |
             *(uint *)(param_1 + 0x14);
        cVar7 = *(char *)(param_1 + 0x18) - *(char *)(iVar6 + 0x2530);
        *(char *)(param_1 + 0x18) = cVar7;
        while (cVar7 < '\x11') {
          if (*(uint *)(param_1 + 0x85c) <= *(uint *)(param_1 + 0x858)) {
            *(undefined1 *)(param_1 + 0x19) = 1;
            *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x854);
          }
          **(undefined1 **)(param_1 + 0x858) = *(undefined1 *)(param_1 + 0x15);
          puVar5 = (undefined1 *)(*(int *)(param_1 + 0x858) + 1);
          *(undefined1 **)(param_1 + 0x858) = puVar5;
          *puVar5 = *(undefined1 *)(param_1 + 0x14);
          cVar7 = *(char *)(param_1 + 0x18) + '\x10';
          *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
          *(char *)(param_1 + 0x18) = cVar7;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
        }
        iVar6 = *(int *)(param_1 + 0x860) + 1;
      }
      else {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x24) + iVar8);
        iVar8 = iVar8 + 4;
        bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + uVar9);
        if (uVar2 < 0x400) {
          uVar4 = (ulonglong)*(byte *)(uVar2 + param_1 + 0x454);
        }
        else if (uVar2 < 0x80000) {
          uVar4 = (ulonglong)*(byte *)((uVar2 >> 9) + param_1 + 0x454) + 0x12;
        }
        else {
          uVar4 = ((ulonglong)(uVar2 >> 0x11) & 0xff) + 0x22;
        }
        cVar7 = *(char *)(param_1 + 0x18);
        uVar4 = uVar4 & 0xff;
        iVar6 = (int)uVar4;
        if (bVar1 < 7) {
          iVar3 = (iVar6 + 0x4c6) * 8 + (uint)bVar1;
          *(uint *)(param_1 + 0x14) =
               (uint)*(ushort *)((iVar6 * 8 + (uint)bVar1 + 0x1aec) * 2 + param_1) <<
               ((int)cVar7 - (uint)*(byte *)(iVar3 + param_1) & 0x3f) | *(uint *)(param_1 + 0x14);
          cVar7 = cVar7 - *(char *)(iVar3 + param_1);
          *(char *)(param_1 + 0x18) = cVar7;
          while (cVar7 < '\x11') {
            if (*(uint *)(param_1 + 0x85c) <= *(uint *)(param_1 + 0x858)) {
              *(undefined1 *)(param_1 + 0x19) = 1;
              *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x854);
            }
            **(undefined1 **)(param_1 + 0x858) = *(undefined1 *)(param_1 + 0x15);
            puVar5 = (undefined1 *)(*(int *)(param_1 + 0x858) + 1);
            *(undefined1 **)(param_1 + 0x858) = puVar5;
            *puVar5 = *(undefined1 *)(param_1 + 0x14);
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
            cVar7 = *(char *)(param_1 + 0x18) + '\x10';
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
            *(char *)(param_1 + 0x18) = cVar7;
          }
        }
        else {
          iVar3 = (int)(uVar4 << 3) + param_1;
          *(uint *)(param_1 + 0x14) =
               (uint)*(ushort *)((int)(uVar4 << 4) + param_1 + 0x35e6) <<
               ((int)cVar7 - (uint)*(byte *)(iVar3 + 0x2637) & 0x3f) | *(uint *)(param_1 + 0x14);
          cVar7 = cVar7 - *(char *)(iVar3 + 0x2637);
          *(char *)(param_1 + 0x18) = cVar7;
          while (cVar7 < '\x11') {
            if (*(uint *)(param_1 + 0x85c) <= *(uint *)(param_1 + 0x858)) {
              *(undefined1 *)(param_1 + 0x19) = 1;
              *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x854);
            }
            **(undefined1 **)(param_1 + 0x858) = *(undefined1 *)(param_1 + 0x15);
            puVar5 = (undefined1 *)(*(int *)(param_1 + 0x858) + 1);
            *(undefined1 **)(param_1 + 0x858) = puVar5;
            *puVar5 = *(undefined1 *)(param_1 + 0x14);
            cVar7 = *(char *)(param_1 + 0x18) + '\x10';
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
            *(char *)(param_1 + 0x18) = cVar7;
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
          }
          *(uint *)(param_1 + 0x14) =
               (uint)*(ushort *)((bVar1 + 0x1ff2) * 2 + param_1) <<
               ((int)*(char *)(param_1 + 0x18) - (uint)*(byte *)((uint)bVar1 + param_1 + 0x27e6) &
               0x3f) | *(uint *)(param_1 + 0x14);
          cVar7 = *(char *)(param_1 + 0x18) - *(char *)((uint)bVar1 + param_1 + 0x27e6);
          *(char *)(param_1 + 0x18) = cVar7;
          while (cVar7 < '\x11') {
            if (*(uint *)(param_1 + 0x85c) <= *(uint *)(param_1 + 0x858)) {
              *(undefined1 *)(param_1 + 0x19) = 1;
              *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x854);
            }
            **(undefined1 **)(param_1 + 0x858) = *(undefined1 *)(param_1 + 0x15);
            puVar5 = (undefined1 *)(*(int *)(param_1 + 0x858) + 1);
            *(undefined1 **)(param_1 + 0x858) = puVar5;
            *puVar5 = *(undefined1 *)(param_1 + 0x14);
            cVar7 = *(char *)(param_1 + 0x18) + '\x10';
            *(char *)(param_1 + 0x18) = cVar7;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
          }
        }
        if ((&lbl_8208949C)[iVar6] != 0) {
          *(uint *)(param_1 + 0x14) =
               (*(uint *)(&lbl_820893D0 + (int)(uVar4 << 2)) & uVar2) <<
               ((int)*(char *)(param_1 + 0x18) - (uint)(byte)(&lbl_8208949C)[iVar6] & 0x3f) |
               *(uint *)(param_1 + 0x14);
          cVar7 = *(char *)(param_1 + 0x18) - (&lbl_8208949C)[iVar6];
          *(char *)(param_1 + 0x18) = cVar7;
          while (cVar7 < '\x11') {
            if (*(uint *)(param_1 + 0x85c) <= *(uint *)(param_1 + 0x858)) {
              *(undefined1 *)(param_1 + 0x19) = 1;
              *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x854);
            }
            **(undefined1 **)(param_1 + 0x858) = *(undefined1 *)(param_1 + 0x15);
            puVar5 = (undefined1 *)(*(int *)(param_1 + 0x858) + 1);
            *(undefined1 **)(param_1 + 0x858) = puVar5;
            *puVar5 = *(undefined1 *)(param_1 + 0x14);
            cVar7 = *(char *)(param_1 + 0x18) + '\x10';
            *(char *)(param_1 + 0x18) = cVar7;
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
          }
        }
        iVar6 = (uint)bVar1 + *(int *)(param_1 + 0x860) + 2;
      }
      uVar9 = uVar9 + 1;
      *(int *)(param_1 + 0x860) = iVar6;
      if (iVar6 == 0x8000) {
        fn_82A3C038(param_1);
        *(undefined1 *)(param_1 + 0x871) = 0;
      }
    } while (uVar9 < param_2);
  }
  return;
}

