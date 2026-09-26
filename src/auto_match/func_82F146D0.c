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
extern int fn_82F02410();
extern int fn_82F14588();
extern unsigned int uRam8325edb8;


undefined8 fn_82F146D0(int param_1,undefined8 param_2)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82F14588();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  puVar2 = *(uint **)(*(int *)(param_1 + 0x48) + 0x58);
  bVar1 = *(byte *)puVar2;
  iVar3 = (uint)bVar1 * 4;
  uVar6 = *(uint *)(*(int *)(param_1 + 0x3c) + iVar3);
  if (*(int *)(param_1 + 8) < 4) {
    bVar1 = *(byte *)(*(int *)(param_1 + 4) + (uint)bVar1);
    uVar4 = bVar1 + uRam8325edb8 + 1;
    uVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x38) + iVar3) + (ulonglong)bVar1 +
            (ulonglong)uRam8325edb8 + 1;
  }
  else {
    if (*(int *)(param_1 + 8) == 4) {
      uVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x38) + iVar3);
      goto LAB_82f1479c;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 4) + (uint)bVar1);
    uVar4 = bVar1 + uRam8325edb8;
    uVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x38) + iVar3) + (ulonglong)bVar1 +
            (ulonglong)uRam8325edb8;
  }
  uVar6 = uVar6 << (uVar4 & 0x3f) | *puVar2 >> 1 & 0x1ffff;
LAB_82f1479c:
  fn_82F02410(param_2,uVar6,uVar5);
  return 0;
}

