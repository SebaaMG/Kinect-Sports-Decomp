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


void fn_82F11418(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x6e48) = *(undefined4 *)(param_1 + 0x548);
  uVar3 = (*(int *)(param_1 + 0x550) >> 1) + 0xf;
  *(undefined4 *)(param_1 + 0x6e4c) = *(undefined4 *)(param_1 + 0x554);
  uVar4 = uVar3 & 0xfffffff0;
  *(undefined4 *)(param_1 + 0x6e50) = *(undefined4 *)(param_1 + 0x550);
  uVar1 = *(int *)(param_1 + 800) >> 1;
  *(undefined4 *)(param_1 + 0x6e54) = *(undefined4 *)(param_1 + 0x55c);
  iVar2 = (int)uVar3 >> 4;
  *(undefined4 *)(param_1 + 0x6e58) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x6e5c) = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x6e60) = *(undefined4 *)(param_1 + 0x54c);
  *(undefined4 *)(param_1 + 0x6e64) = *(undefined4 *)(param_1 + 0x558);
  *(int *)(param_1 + 0x6e68) = *(int *)(param_1 + 0x548) * *(int *)(param_1 + 0x550);
  *(undefined4 *)(param_1 + 0x6e6c) = *(undefined4 *)(param_1 + 0x340);
  *(undefined4 *)(param_1 + 0x6e70) = *(undefined4 *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x6e74) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(param_1 + 0x6e78) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x6e7c) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x6e80) = *(undefined4 *)(param_1 + 0x564);
  *(undefined4 *)(param_1 + 0x6e84) = *(undefined4 *)(param_1 + 0x568);
  *(undefined4 *)(param_1 + 0x6e88) = *(undefined4 *)(param_1 + 0x56c);
  *(undefined4 *)(param_1 + 0x6e8c) = *(undefined4 *)(param_1 + 0x570);
  *(undefined4 *)(param_1 + 0x6e90) = *(undefined4 *)(param_1 + 0x574);
  *(undefined4 *)(param_1 + 0x6e94) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(param_1 + 0x6e98) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(param_1 + 0x6e9c) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(param_1 + 0x6ea0) = *(undefined4 *)(param_1 + 0x548);
  *(undefined4 *)(param_1 + 0x6ea4) = *(undefined4 *)(param_1 + 0x554);
  *(uint *)(param_1 + 0x6ea8) = uVar4;
  *(int *)(param_1 + 0x6eac) = (int)uVar4 >> 1;
  *(undefined4 *)(param_1 + 0x6eb0) = *(undefined4 *)(param_1 + 0x31c);
  *(uint *)(param_1 + 0x6eb4) = uVar1;
  *(undefined4 *)(param_1 + 0x6eb8) = *(undefined4 *)(param_1 + 0x54c);
  *(undefined4 *)(param_1 + 0x6ebc) = *(undefined4 *)(param_1 + 0x558);
  *(uint *)(param_1 + 0x6ec0) = *(int *)(param_1 + 0x548) * uVar4;
  if ((*(int *)(param_1 + 0x548) != *(int *)(param_1 + 0x31c)) || (uVar5 = 1, uVar4 != uVar1)) {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0x6ec4) = uVar5;
  *(undefined4 *)(param_1 + 0x6ec8) = *(undefined4 *)(param_1 + 0x2d0);
  *(int *)(param_1 + 0x6ecc) = iVar2;
  *(int *)(param_1 + 0x6ed0) = iVar2 * *(int *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x6ed4) = *(undefined4 *)(param_1 + 0x2dc);
  *(int *)(param_1 + 0x6ed8) = *(int *)(param_1 + 0x564) << 1;
  *(int *)(param_1 + 0x6ee4) = ((int)uVar4 >> 1) + 0x20;
  *(int *)(param_1 + 0x6edc) = *(int *)(param_1 + 0x568) << 1;
  *(uint *)(param_1 + 0x6ee0) = uVar4 + 0x40;
  *(undefined4 *)(param_1 + 0x6ee8) = *(undefined4 *)(param_1 + 0x574);
  *(undefined4 *)(param_1 + 0x6eec) = *(undefined4 *)(param_1 + 0x578);
  *(int *)(param_1 + 0x6ef0) = *(int *)(param_1 + 0x57c) << 1;
  *(int *)(param_1 + 0x6ef4) = *(int *)(param_1 + 0x580) << 1;
  return;
}

