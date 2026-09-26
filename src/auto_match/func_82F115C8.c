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


void fn_82F115C8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 * 0x58 + param_1;
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(iVar3 + 0x6e48);
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(iVar3 + 0x6e4c);
  *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(iVar3 + 0x6e50);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(iVar3 + 0x6e54);
  iVar2 = *(int *)(iVar3 + 0x6e58);
  *(int *)(param_1 + 0x31c) = iVar2;
  iVar1 = *(int *)(iVar3 + 0x6e5c);
  *(int *)(param_1 + 800) = iVar1;
  *(int *)(param_1 + 0x324) = iVar2 * iVar1;
  iVar2 = iVar2 + 1 >> 1;
  iVar1 = iVar1 + 1 >> 1;
  *(int *)(param_1 + 0x334) = iVar2;
  *(int *)(param_1 + 0x33c) = iVar1;
  *(int *)(param_1 + 0x330) = iVar2 << 1;
  *(int *)(param_1 + 0x338) = iVar1 << 1;
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(iVar3 + 0x6e60);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(iVar3 + 0x6e64);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(iVar3 + 0x6e68);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(iVar3 + 0x6e6c);
  iVar2 = *(int *)(iVar3 + 0x6e70);
  *(int *)(param_1 + 0x2d0) = iVar2;
  iVar2 = iVar2 * 0x600;
  if (iVar2 < 0x1800) {
    iVar2 = 0x1800;
  }
  *(int *)(param_1 + 0x1a4c) = iVar2;
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(iVar3 + 0x6e74);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(iVar3 + 0x6e78);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar3 + 0x6e7c);
  *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(iVar3 + 0x6e80);
  iVar2 = *(int *)(iVar3 + 0x6e84);
  *(int *)(param_1 + 0x568) = iVar2;
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(iVar3 + 0x6e88);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(iVar3 + 0x6e8c);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(iVar3 + 0x6e90);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(iVar3 + 0x6e94);
  *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(iVar3 + 0x6e98);
  *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(iVar3 + 0x6e9c);
  *(int *)(param_1 + 0x584) = iVar2 << 4;
  return;
}

