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
extern int fn_827C1AA0();


void fn_827C8838(int *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  
  iVar4 = param_1[0x39];
  if (iVar4 == 1) {
    iVar4 = param_1[0x3a];
    param_1[0x3e] = *(int *)(iVar4 + 0x1c);
    param_1[0x3f] = *(int *)(iVar4 + 0x20);
    uVar1 = *(uint *)(iVar4 + 0xc);
    trapWord(6,(ulonglong)uVar1,0);
    *(undefined4 *)(iVar4 + 0x40) = 8;
    *(undefined4 *)(iVar4 + 0x34) = 1;
    *(undefined4 *)(iVar4 + 0x38) = 1;
    *(undefined4 *)(iVar4 + 0x3c) = 1;
    *(undefined4 *)(iVar4 + 0x44) = 1;
    uVar3 = (ulonglong)*(uint *)(iVar4 + 0x20) -
            (longlong)(int)(*(uint *)(iVar4 + 0x20) / uVar1) * (longlong)(int)uVar1;
    if (uVar3 == 0) {
      uVar3 = (ulonglong)uVar1;
    }
    *(int *)(iVar4 + 0x48) = (int)uVar3;
    param_1[0x40] = 1;
    param_1[0x41] = 0;
  }
  else {
    if ((iVar4 < 1) || (4 < iVar4)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1a;
      *(int *)(*param_1 + 0x18) = param_1[0x39];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar4 = fn_827C1AA0(param_1[7],param_1[0x36] << 3);
    param_1[0x3e] = iVar4;
    iVar4 = fn_827C1AA0(param_1[8],param_1[0x37] << 3);
    iVar5 = 0;
    param_1[0x3f] = iVar4;
    param_1[0x40] = 0;
    if (0 < param_1[0x39]) {
      piVar6 = param_1 + 0x3a;
      do {
        iVar4 = *piVar6;
        uVar1 = *(uint *)(iVar4 + 8);
        uVar2 = *(uint *)(iVar4 + 0xc);
        *(uint *)(iVar4 + 0x40) = uVar1 << 3;
        lVar7 = (longlong)(int)uVar2 * (longlong)(int)uVar1;
        *(uint *)(iVar4 + 0x34) = uVar1;
        iVar8 = (int)lVar7;
        *(int *)(iVar4 + 0x3c) = iVar8;
        *(uint *)(iVar4 + 0x38) = uVar2;
        trapWord(6,(ulonglong)uVar1,0);
        uVar3 = (ulonglong)*(uint *)(iVar4 + 0x1c) -
                (longlong)(int)(*(uint *)(iVar4 + 0x1c) / uVar1) * (longlong)(int)uVar1;
        if (uVar3 == 0) {
          uVar3 = (ulonglong)uVar1;
        }
        trapWord(6,(ulonglong)uVar2,0);
        *(int *)(iVar4 + 0x44) = (int)uVar3;
        uVar3 = (ulonglong)*(uint *)(iVar4 + 0x20) -
                (longlong)(int)(*(uint *)(iVar4 + 0x20) / uVar2) * (longlong)(int)uVar2;
        if (uVar3 == 0) {
          uVar3 = (ulonglong)uVar2;
        }
        *(int *)(iVar4 + 0x48) = (int)uVar3;
        if (10 < param_1[0x40] + iVar8) {
          *(undefined4 *)(*param_1 + 0x14) = 0xd;
          (**(code **)*param_1)(param_1);
        }
        if (0 < iVar8) {
          do {
            param_1[param_1[0x40] + 0x41] = iVar5;
            param_1[0x40] = param_1[0x40] + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < param_1[0x39]);
    }
  }
  if (0 < param_1[0x30]) {
    iVar4 = param_1[0x30] * param_1[0x3e];
    if (0xfffe < iVar4) {
      iVar4 = 0xffff;
    }
    param_1[0x2f] = iVar4;
  }
  return;
}

