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
extern int fn_82AB6EC0();
extern int fn_82AB71F0();
extern int fn_82B69A00();


void fn_82B7E210(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar4 = fn_82AB6EC0(param_2,2);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
LAB_82b7e380:
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xe000e000 | 0x10001;
  }
  else {
    bVar2 = true;
    iVar4 = fn_82B69A00(*(undefined4 *)(param_1 + 0xc),0xb);
    if (iVar4 != 0) {
      uVar6 = 0;
      do {
        if (3 < (uVar6 & 0xffffffff)) break;
        iVar4 = fn_82AB71F0(param_2,0x21,uVar6);
        if (((iVar4 != 0) && (uVar3 = *(ushort *)*param_3 & 0xf, 0x17 < uVar3)) &&
           ((uVar3 < 0x1b || ((0x23 < uVar3 && (uVar3 < 0x27)))))) {
          bVar2 = false;
        }
        uVar6 = uVar6 + 1;
        param_3 = param_3 + 1;
      } while (bVar2);
      if (!bVar2) goto LAB_82b7e380;
    }
    uVar5 = fn_82AB71F0(param_2,0,0);
    *(uint *)(iVar1 + 0xc) = uVar5 & 0x1f | *(uint *)(iVar1 + 0xc) & 0xffffffe0;
    uVar5 = fn_82AB71F0(param_2,2,0);
    *(uint *)(iVar1 + 0xc) = (uVar5 & 0x1f) << 8 | *(uint *)(iVar1 + 0xc) & 0xffffe0ff;
    uVar5 = fn_82AB71F0(param_2,1,0);
    *(uint *)(iVar1 + 0xc) = (uVar5 & 7) << 5 | *(uint *)(iVar1 + 0xc) & 0xffffff1f;
    uVar5 = fn_82AB71F0(param_2,3,0);
    *(uint *)(iVar1 + 0xc) = (uVar5 & 0x1f) << 0x10 | *(uint *)(iVar1 + 0xc) & 0xffe0ffff;
    uVar5 = fn_82AB71F0(param_2,5,0);
    *(uint *)(iVar1 + 0xc) = (uVar5 & 0x1f) << 0x18 | *(uint *)(iVar1 + 0xc) & 0xe0ffffff;
    uVar5 = fn_82AB71F0(param_2,4,0);
    uVar5 = (uVar5 & 7) << 0x15 | *(uint *)(iVar1 + 0xc) & 0xff1fffff;
    *(uint *)(iVar1 + 0xc) = uVar5;
    *(uint *)(iVar1 + 0x2c) = uVar5;
    *(uint *)(iVar1 + 0x30) = uVar5;
    *(uint *)(iVar1 + 0x34) = uVar5;
  }
  return;
}

