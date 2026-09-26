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
extern unsigned int *auStack_460;
extern unsigned int *auStack_60;
extern int fn_82230300();
extern int fn_8225C590();
extern int fn_82483888();
extern int fn_82486B08();
extern int fn_82A1DD38();


void fn_82483590(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar7;
  undefined8 uVar6;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_460 [1024];
  undefined1 auStack_60 [96];
  
  iVar7 = fn_8225C590();
  lVar10 = 0;
  uVar4 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
  uVar5 = *(int *)(iVar7 + 0x24) - *(int *)(iVar7 + 0x20) >> 2;
  do {
    uVar6 = fn_82486B08(auStack_460);
    fn_82A1DD38(lVar10 + (ulonglong)*(uint *)(param_1 + 0x48) + 0x838,uVar6,0x420);
    fn_82230300(auStack_60,1,0);
    lVar10 = lVar10 + 0x420;
  } while ((int)lVar10 < 0x1080);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x48) + 0x18b8);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar11 = 0;
      if (uVar4 != 0) {
        iVar9 = 0;
        do {
          iVar3 = *(int *)(iVar7 + 0x10);
          if ((uVar11 & 0xffffffff) < (ulonglong)(uint)(*(int *)(iVar7 + 0x14) - iVar3 >> 2)) {
            uVar8 = *(undefined4 *)(iVar9 + iVar3);
          }
          else {
            uVar8 = 0;
          }
          fn_82483888(param_1,uVar8,uVar11);
          uVar11 = uVar11 + 1;
          iVar9 = iVar9 + 4;
        } while ((uVar11 & 0xffffffff) < (ulonglong)uVar4);
      }
      uVar11 = 0;
      if (uVar5 == 0) {
        return;
      }
      iVar9 = 0;
      do {
        iVar3 = *(int *)(iVar7 + 0x20);
        if ((uVar11 & 0xffffffff) < (ulonglong)(uint)(*(int *)(iVar7 + 0x24) - iVar3 >> 2)) {
          uVar8 = *(undefined4 *)(iVar9 + iVar3);
        }
        else {
          uVar8 = 0;
        }
        fn_82483888(param_1,uVar8,uVar11 + 2);
        uVar11 = uVar11 + 1;
        iVar9 = iVar9 + 4;
      } while ((uVar11 & 0xffffffff) < (ulonglong)uVar5);
      return;
    }
    if (2 < uVar1) {
      return;
    }
  }
  puVar2 = *(undefined4 **)(iVar7 + 0x10);
  if (*(int *)(iVar7 + 0x14) - (int)puVar2 >> 2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar2;
  }
  fn_82483888(param_1,uVar8,0);
  puVar2 = *(undefined4 **)(iVar7 + 0x20);
  if (*(int *)(iVar7 + 0x24) - (int)puVar2 >> 2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar2;
  }
  fn_82483888(param_1,uVar8,1);
  return;
}

