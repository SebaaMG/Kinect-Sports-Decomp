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
extern int fn_82ABE6D0();
extern int fn_82B841E8();


uint fn_82AC6D78(undefined8 param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)((param_2 & 0xfffffffe) + 0x24);
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar5 = uVar4 - 0x28;
    if (uVar5 != 0) {
      uVar3 = *(uint *)(uVar4 - 0x20) >> 7 & 0x7f;
      if ((uVar3 == 0) || (bVar2 = true, 0x1f < uVar3)) {
        bVar2 = false;
      }
      if (bVar2) {
        uVar3 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
        if ((uVar3 < 0x20) || (bVar2 = true, 0x52 < uVar3)) {
          bVar2 = false;
        }
        if ((bVar2) && (uVar3 = fn_82ABE6D0(uVar5), param_2 == uVar3)) {
          if ((*(uint *)(uVar4 - 4) & 1) != 0) goto LAB_82ac6d9c;
          uVar5 = (*(uint *)(uVar4 - 4) & 0xfffffffe) - 0x28;
        }
      }
      if ((uVar5 != 0) && (uVar4 = uVar5, (*(uint *)(uVar5 + 8) & 0x3f80) == 0x3f00))
      goto LAB_82ac6ed4;
    }
  }
  else {
LAB_82ac6d9c:
    uVar5 = 0;
  }
  uVar4 = fn_82B841E8(param_1,*(undefined4 *)(param_2 + 0x1c),0,0x7e,0,0);
  uVar3 = uVar4 & 0xfffffffe;
  if (uVar5 == 0) {
    iVar1 = *(int *)(param_2 + 0x1c);
    *(undefined4 *)(uVar3 + 0x28) = *(undefined4 *)(iVar1 + 0x1c);
    *(uint *)((*(uint *)(iVar1 + 0x1c) & 0xfffffffe) + 0x24) = uVar3 + 0x28;
    *(uint *)(uVar3 + 0x24) = iVar1 + 0x1cU | 1;
    *(uint *)(iVar1 + 0x1c) = uVar3;
  }
  else {
    *(undefined4 *)(uVar3 + 0x28) = *(undefined4 *)(uVar5 + 0x28);
    *(uint *)((*(uint *)(uVar5 + 0x28) & 0xfffffffe) + 0x24) = uVar3 + 0x28;
    *(uint *)(uVar3 + 0x24) = uVar5 + 0x28;
    *(uint *)(uVar5 + 0x28) = uVar3;
  }
LAB_82ac6ed4:
  *(uint *)(uVar4 + 0x14) = *(uint *)(uVar4 + 0x14) | 0x10000;
  return uVar4;
}

