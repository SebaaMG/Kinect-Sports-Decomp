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
extern int fn_8267B890();
extern int fn_8278FDC8();
extern int fn_82794B88();
extern int fn_82F68CC0();


void fn_8279CDC0(int *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((*(int *)(*param_1 + 0x10) == 0) ||
     (bVar2 = true, (*(byte *)(*(int *)(*param_1 + 0x10) + 8) & 1) == 0)) {
    bVar2 = false;
  }
  param_1[0x13e] = 0;
  *(bool *)(param_1 + 0xbd) = bVar2;
  if (!bVar2) {
    return;
  }
  uVar3 = fn_8278FDC8(param_1[1]);
  uVar1 = *(uint *)(param_1[1] + 0x1c);
  if (uVar1 <= (uint)param_1[0xc]) {
    iVar4 = fn_8278FDC8(param_1[1]);
    bVar2 = true;
    if ((uint)param_1[0xc] <= iVar4 + uVar1) goto LAB_8279ce48;
  }
  bVar2 = false;
LAB_8279ce48:
  if (bVar2) {
    iVar4 = fn_8278FDC8(param_1[1]);
    uVar3 = iVar4 + param_1[0xd];
  }
  if (uVar3 < 0x100) {
    iVar4 = (int)param_1 + 0x2f6;
  }
  else {
    iVar4 = fn_82794B88(*(undefined4 *)(*param_1 + 8));
    iVar4 = fn_8267B890(*(undefined4 *)(iVar4 + 0x1c),uVar3 + 1 & 0x7fffffff,0);
  }
  iVar6 = *(int *)param_1[1];
  uVar1 = uVar3;
  iVar5 = iVar4;
  if ((bVar2) && (param_1[0xd] != 0)) {
    iVar7 = param_1[0xc] - ((int *)param_1[1])[7];
    iVar8 = iVar7 * 2;
    fn_82F68CC0(iVar4,iVar6,iVar8);
    fn_82F68CC0(iVar8 + iVar4,*(undefined4 *)(param_1[0xb] + 0x14),param_1[0xd] << 1);
    iVar5 = fn_8278FDC8(param_1[1]);
    iVar6 = iVar8 + iVar6;
    uVar1 = iVar5 - iVar7;
    iVar5 = (param_1[0xd] + iVar7) * 2 + iVar4;
  }
  fn_82F68CC0(iVar5,iVar6,uVar1 & 0x7fffffff);
  *(undefined2 *)(uVar3 * 2 + iVar4) = 0;
  param_1[0x13e] = iVar4;
  param_1[0x13f] = uVar3;
  return;
}

