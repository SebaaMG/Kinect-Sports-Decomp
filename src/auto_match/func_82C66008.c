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
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern unsigned int lbl_82109DF0;
extern unsigned int lbl_82109DF1;


void fn_82C66008(int param_1,byte *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iVar10 = (int)((*puVar1 >> 0x33) << 1);
  fn_82C4E470(puVar1,(&lbl_82109DF0)[iVar10]);
  bVar7 = (&lbl_82109DF1)[iVar10];
  if ((ulonglong)bVar7 == 0xff) {
    *(undefined4 *)((int)puVar1 + 0x14) = 3;
  }
  lVar8 = (ulonglong)bVar7 - 0x20;
  if (lVar8 == 0) {
    iVar10 = 0;
  }
  else {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    iVar10 = 0;
    uVar9 = (ulonglong)*(uint *)(param_1 + 0xe20) - 1;
    uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar9 & 0xffffffff) < 0x21) {
      if ((uVar9 & 0xffffffff) == 0) {
        iVar10 = 0;
      }
      else {
        iVar3 = 0;
        if ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff)) {
          do {
            iVar10 = iVar3;
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar9 = uVar9 - uVar5;
            *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
            iVar10 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar10;
            *puVar1 = *puVar1 << (uVar5 & 0x7f);
            if ((longlong)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar5 = uVar4 + 0x10;
            iVar3 = iVar10;
          } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
        }
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar9);
        iVar10 = (int)(*puVar1 >> (0x40 - uVar9 & 0x7f)) + iVar10;
        *puVar1 = *puVar1 << (uVar9 & 0x7f);
        if ((longlong)(uVar4 - uVar9) < 0) {
          fn_82C4E5E8(puVar1);
        }
      }
    }
    else {
      iVar10 = 0;
    }
  }
  if (((int)lVar8 == 0) && (iVar10 == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = (byte)lVar8;
    if (*(int *)(param_1 + 0xe28) != 1) {
      bVar2 = (char)((ulonglong)lVar8 >> 0x18) >> 7;
      cVar6 = '\x01';
      if ((int)lVar8 < 1) {
        cVar6 = -1;
      }
      bVar7 = cVar6 * ((((bVar7 ^ bVar2) - bVar2) + -1) * (char)*(int *)(param_1 + 0xe28) +
                       (char)iVar10 + '\x01');
    }
  }
  *param_2 = bVar7;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iVar10 = (int)((*puVar1 >> 0x33) << 1);
  fn_82C4E470(puVar1,(&lbl_82109DF0)[iVar10]);
  bVar7 = (&lbl_82109DF1)[iVar10];
  if ((ulonglong)bVar7 == 0xff) {
    *(undefined4 *)((int)puVar1 + 0x14) = 3;
  }
  lVar8 = (ulonglong)bVar7 - 0x20;
  if (lVar8 != 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    iVar10 = 0;
    uVar9 = (ulonglong)*(uint *)(param_1 + 0xe20) - 1;
    uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar5 = uVar4 + 0x10;
    if (((uVar9 & 0xffffffff) < 0x21) && ((uVar9 & 0xffffffff) != 0)) {
      iVar3 = 0;
      if ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff)) {
        do {
          iVar10 = iVar3;
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar9 = uVar9 - uVar5;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
          iVar10 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar10;
          *puVar1 = *puVar1 << (uVar5 & 0x7f);
          if ((longlong)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar5 = uVar4 + 0x10;
          iVar3 = iVar10;
        } while ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar9);
      iVar10 = (int)(*puVar1 >> (0x40 - uVar9 & 0x7f)) + iVar10;
      *puVar1 = *puVar1 << (uVar9 & 0x7f);
      if ((longlong)(uVar4 - uVar9) < 0) {
        fn_82C4E5E8(puVar1);
      }
      goto LAB_82c662b4;
    }
  }
  iVar10 = 0;
LAB_82c662b4:
  if (((int)lVar8 == 0) && (iVar10 == 0)) {
    param_2[1] = 0;
  }
  else if (*(int *)(param_1 + 0xe28) == 1) {
    param_2[1] = (byte)lVar8;
  }
  else {
    bVar7 = (char)((ulonglong)lVar8 >> 0x18) >> 7;
    cVar6 = '\x01';
    if ((int)lVar8 < 1) {
      cVar6 = -1;
    }
    param_2[1] = cVar6 * (((((byte)lVar8 ^ bVar7) - bVar7) + -1) * (char)*(int *)(param_1 + 0xe28) +
                          (char)iVar10 + '\x01');
  }
  return;
}

