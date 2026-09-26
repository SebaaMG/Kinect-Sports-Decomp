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
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BA0FD8();
extern int fn_82BC0088();
extern int fn_82BD0A18();
extern unsigned int lbl_83223EC4;


void fn_82BD0DB8(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar1 = param_1[4];
  iVar2 = *param_1;
  param_1[4] = uVar1 + 1;
  uVar6 = uVar1 * (uVar1 + 1);
  lVar7 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  iVar3 = fn_82BA0FD8(lVar7,*(undefined4 *)(param_1[2] + 0x5b0));
  *param_1 = iVar3;
  uVar6 = 0;
  if (0 < (longlong)((lVar7 - (ulonglong)(uint)param_1[4]) + 1)) {
    do {
      iVar3 = ((uVar6 >> 5) + 2) * 4;
      if ((*(uint *)(iVar3 + iVar2) >> (uVar6 & 0x1f) & 1) != 0) {
        *(uint *)(iVar3 + *param_1) = 1 << (uVar6 & 0x1f) | *(uint *)(iVar3 + *param_1);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < ((int)lVar7 - param_1[4]) + 1);
  }
  if (iVar2 != 0) {
    fn_82B7BEB0(*(undefined4 *)(iVar2 + -4),iVar2 + -4);
  }
  iVar2 = lbl_83223EC4;
  lbl_83223EC4 = fn_82B7BD28(*(undefined4 *)(param_1[2] + 0x5b0),param_1[4] << 2);
  if (0 < (int)uVar1) {
    iVar3 = 0;
    uVar8 = (ulonglong)uVar1;
    do {
      *(undefined4 *)(iVar3 + lbl_83223EC4) = *(undefined4 *)(iVar3 + iVar2);
      iVar3 = iVar3 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  fn_82B7BEB0(*(undefined4 *)(param_1[2] + 0x5b0),iVar2);
  uVar5 = *(undefined4 *)(param_1[2] + 0x5b0);
  puVar4 = (undefined4 *)fn_82B7BD28(uVar5,0x18);
  *puVar4 = uVar5;
  if (puVar4 + 1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_82BD0A18(puVar4 + 1,(ulonglong)uVar1,0,param_1[2]);
  }
  puVar4 = (undefined4 *)fn_82BC0088(param_1[1],*(undefined4 *)(param_1[1] + 4));
  *puVar4 = uVar5;
  return;
}

