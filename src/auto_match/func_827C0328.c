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


void fn_827C0328(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  
  iVar3 = param_1[0x49];
  if (iVar3 == 1) {
    iVar3 = param_1[0x4a];
    param_1[0x4e] = *(int *)(iVar3 + 0x1c);
    param_1[0x4f] = *(int *)(iVar3 + 0x20);
    uVar1 = *(uint *)(iVar3 + 0xc);
    trapWord(6,(ulonglong)uVar1,0);
    *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(iVar3 + 0x34) = 1;
    *(undefined4 *)(iVar3 + 0x38) = 1;
    *(undefined4 *)(iVar3 + 0x3c) = 1;
    *(undefined4 *)(iVar3 + 0x44) = 1;
    uVar4 = (ulonglong)*(uint *)(iVar3 + 0x20) -
            (longlong)(int)(*(uint *)(iVar3 + 0x20) / uVar1) * (longlong)(int)uVar1;
    if (uVar4 == 0) {
      uVar4 = (ulonglong)uVar1;
    }
    *(int *)(iVar3 + 0x48) = (int)uVar4;
    param_1[0x50] = 1;
    param_1[0x51] = 0;
  }
  else {
    if ((iVar3 < 1) || (4 < iVar3)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1a;
      *(int *)(*param_1 + 0x18) = param_1[0x49];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar3 = fn_827C1AA0(param_1[7],param_1[0x44] << 3);
    param_1[0x4e] = iVar3;
    iVar3 = fn_827C1AA0(param_1[8],param_1[0x45] << 3);
    iVar5 = 0;
    param_1[0x4f] = iVar3;
    param_1[0x50] = 0;
    if (0 < param_1[0x49]) {
      piVar6 = param_1 + 0x4a;
      do {
        iVar3 = *piVar6;
        uVar1 = *(uint *)(iVar3 + 8);
        uVar2 = *(uint *)(iVar3 + 0xc);
        trapWord(6,(ulonglong)uVar1,0);
        lVar7 = (longlong)(int)uVar2 * (longlong)(int)uVar1;
        *(uint *)(iVar3 + 0x34) = uVar1;
        iVar8 = (int)lVar7;
        *(int *)(iVar3 + 0x3c) = iVar8;
        *(uint *)(iVar3 + 0x38) = uVar2;
        *(uint *)(iVar3 + 0x40) = *(int *)(iVar3 + 0x24) * uVar1;
        uVar4 = (ulonglong)*(uint *)(iVar3 + 0x1c) -
                (longlong)(int)(*(uint *)(iVar3 + 0x1c) / uVar1) * (longlong)(int)uVar1;
        if (uVar4 == 0) {
          uVar4 = (ulonglong)uVar1;
        }
        trapWord(6,(ulonglong)uVar2,0);
        *(int *)(iVar3 + 0x44) = (int)uVar4;
        uVar4 = (ulonglong)*(uint *)(iVar3 + 0x20) -
                (longlong)(int)(*(uint *)(iVar3 + 0x20) / uVar2) * (longlong)(int)uVar2;
        if (uVar4 == 0) {
          uVar4 = (ulonglong)uVar2;
        }
        *(int *)(iVar3 + 0x48) = (int)uVar4;
        if (10 < param_1[0x50] + iVar8) {
          *(undefined4 *)(*param_1 + 0x14) = 0xd;
          (**(code **)*param_1)(param_1);
        }
        if (0 < iVar8) {
          do {
            param_1[param_1[0x50] + 0x51] = iVar5;
            param_1[0x50] = param_1[0x50] + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < param_1[0x49]);
    }
  }
  return;
}

