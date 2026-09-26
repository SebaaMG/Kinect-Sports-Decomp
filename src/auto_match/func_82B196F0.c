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
extern unsigned int *auStack_30;
extern int fn_82B18218();


void fn_82B196F0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_30 [48];
  
  uVar5 = *(uint *)(param_1 + 4);
  do {
    if (((uVar5 & 1) != 0) || (uVar5 == 0)) {
      uVar5 = *(uint *)(param_1 + 4);
      uVar2 = -(uint)((uVar5 & 1) == 0) & uVar5;
      if ((*(uint *)((-(uint)((uVar5 & 1) == 0) & uVar5) + 0x14) & 1) == 0) {
        uVar2 = *(uint *)(uVar2 + 0x14);
        uVar3 = -(uint)((uVar2 & 1) == 0);
        iVar4 = (-(uint)((uVar5 & 1) == 0) & uVar5) + 0x10;
      }
      else {
        uVar3 = -(uint)((uVar5 & 1) == 0) & uVar5;
        if ((*(uint *)(uVar2 + 0x1c) & 1) == 0) {
          uVar2 = *(uint *)(uVar3 + 0x1c);
          uVar3 = -(uint)((uVar2 & 1) == 0);
          iVar4 = (-(uint)((uVar5 & 1) == 0) & uVar5) + 0x18;
        }
        else {
          uVar2 = *(uint *)(uVar3 + 0x24);
          uVar3 = -(uint)((uVar2 & 1) == 0);
          iVar4 = (-(uint)((uVar5 & 1) == 0) & uVar5) + 0x20;
        }
      }
      uVar3 = uVar3 & uVar2;
      while( true ) {
        if (uVar3 == 0) {
          return;
        }
        do {
          if ((*(uint *)(uVar3 + 8) >> 0x1a & 1) != 0) {
            *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) & 0xfbffffff;
          }
          uVar3 = *(uint *)((uVar3 & 0xfffffffe) + 0x28);
        } while (((uVar3 & 1) == 0) && (uVar3 != 0));
        uVar5 = *(uint *)(param_1 + 4);
        if (iVar4 == (-(uint)((uVar5 & 1) == 0) & uVar5) + 0x20) break;
        if ((iVar4 == (-(uint)((uVar5 & 1) == 0) & uVar5) + 0x18) ||
           ((*(uint *)((-(uint)((uVar5 & 1) == 0) & uVar5) + 0x1c) & 1) != 0)) {
          uVar5 = -(uint)((uVar5 & 1) == 0) & uVar5;
          iVar4 = uVar5 + 0x20;
          uVar3 = *(uint *)(uVar5 + 0x24);
        }
        else {
          uVar5 = -(uint)((uVar5 & 1) == 0) & uVar5;
          iVar4 = uVar5 + 0x18;
          uVar3 = *(uint *)(uVar5 + 0x1c);
        }
        if ((uVar3 & 1) != 0) {
          return;
        }
      }
      return;
    }
    if (*(int *)(uVar5 + 0x2c) == param_2) {
      auStack_30[0] = 0;
      fn_82B18218(param_1,*(undefined4 *)(uVar5 + 0x50),auStack_30);
      if ((*(uint *)(uVar5 + 0x14) & 1) == 0) {
        uVar2 = *(uint *)(uVar5 + 0x14);
        iVar4 = uVar5 + 0x10;
      }
      else if ((*(uint *)(uVar5 + 0x1c) & 1) == 0) {
        uVar2 = *(uint *)(uVar5 + 0x1c);
        iVar4 = uVar5 + 0x18;
      }
      else {
        uVar2 = *(uint *)(uVar5 + 0x24);
        iVar4 = uVar5 + 0x20;
      }
      uVar2 = -(uint)((uVar2 & 1) == 0) & uVar2;
      do {
        if (uVar2 == 0) break;
        do {
          if ((*(uint *)(uVar2 + 8) >> 0x1a & 1) != 0) {
            *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) & 0xfbffffff;
            *(uint *)(*(int *)(uVar2 + 0x20) + 8) =
                 *(uint *)(*(int *)(uVar2 + 0x20) + 8) & 0xfbffffff;
          }
          uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 0x28);
        } while (((uVar2 & 1) == 0) && (uVar2 != 0));
        iVar1 = uVar5 + 0x20;
        if (iVar4 == iVar1) break;
        if ((iVar4 == uVar5 + 0x18) || ((*(uint *)(uVar5 + 0x1c) & 1) != 0)) {
          uVar2 = *(uint *)(uVar5 + 0x24);
        }
        else {
          uVar2 = *(uint *)(uVar5 + 0x1c);
          iVar1 = uVar5 + 0x18;
        }
        iVar4 = iVar1;
      } while ((uVar2 & 1) == 0);
    }
    uVar5 = *(uint *)((uVar5 & 0xfffffffe) + 4);
  } while( true );
}

