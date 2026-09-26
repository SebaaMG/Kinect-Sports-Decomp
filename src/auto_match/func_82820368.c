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
extern int fn_828145E8();
extern int fn_82814650();
extern int fn_82821728();
extern int fn_82824188();
extern int fn_82F68CC0();


undefined8 fn_82820368(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar3 = *(int *)(param_1 + 0x20);
  iVar9 = 0;
  iVar10 = 0;
  uVar5 = 1;
  do {
    iVar11 = iVar10 + *(int *)(iVar3 + 0x30);
    iVar6 = *(int *)(param_1 + 0x1c) + iVar9;
    bVar2 = *(byte *)(iVar11 + 0x1c);
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        uVar4 = (ulonglong)*(uint *)(iVar6 + 0x5c);
        if (uVar4 == 0) {
          uVar4 = fn_828145E8(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar11 + 0x2c));
          *(int *)(iVar6 + 0x5c) = (int)uVar4;
          if ((uVar4 & 0xffffffff) == 0) {
            *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
            return 1;
          }
        }
        fn_82F68CC0(uVar4,*(undefined4 *)(iVar11 + 0x34),*(undefined4 *)(iVar11 + 0x2c));
      }
      else if (bVar2 < 3) {
        uVar7 = uVar5;
        if (uVar5 < 3) {
LAB_828203f4:
          iVar8 = *(int *)(uVar7 * 0x1c + *(int *)(iVar3 + 0x30) + 0x14);
        }
        else {
          uVar7 = (uint)*(byte *)(*(int *)(iVar3 + 0x28) + uVar5 + -3);
          iVar8 = 0;
          if (uVar7 != 0) {
            uVar7 = uVar7 + 2;
            goto LAB_828203f4;
          }
        }
        fn_82824188(*(int *)(iVar6 + 0x5c) + iVar8,*(undefined4 *)(iVar11 + 0x24),
                        *(int *)(iVar6 + 0x5c),*(undefined4 *)(iVar11 + 0x28),
                        *(undefined4 *)(iVar11 + 0x34),*(undefined4 *)(iVar11 + 0x2c));
      }
      else if (bVar2 == 3) {
        fn_82814650(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar6 + 0x5c));
        *(undefined4 *)(iVar6 + 0x5c) = 0;
      }
    }
    iVar10 = iVar10 + 0x1c;
    iVar9 = iVar9 + 0x14;
    bVar1 = 1 < uVar5;
    uVar5 = uVar5 + 1;
    if (bVar1) {
      fn_82821728(param_1,1,0);
      uVar5 = 0;
      if (*(char *)(*(int *)(iVar3 + 0x1c) + 0x38) != '\0') {
        iVar9 = 0xc;
        do {
          bVar2 = *(byte *)(*(int *)(iVar3 + 0x28) + uVar5);
          if (bVar2 != 0) {
            *(undefined4 *)((uint)bVar2 * 0x21 + *(int *)(param_1 + 0x30) + -0x14) =
                 *(undefined4 *)(*(int *)(iVar3 + 0x2c) + iVar9);
          }
          uVar5 = uVar5 + 1;
          iVar9 = iVar9 + 4;
        } while (uVar5 < *(byte *)(*(int *)(iVar3 + 0x1c) + 0x38));
      }
      return 0;
    }
  } while( true );
}

