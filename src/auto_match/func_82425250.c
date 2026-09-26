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
extern unsigned int uStack_c;


void fn_82425250(int param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if ((*(int *)(param_2 + 0x100) != 0) && (*(int *)(param_2 + 0x16c) <= iVar1)) {
    iVar1 = *(int *)(param_2 + 0x16c);
  }
  *(int *)(param_2 + 0x16c) = iVar1;
  iVar1 = *(int *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x30) < *(int *)(param_2 + 0x100)) {
    iVar1 = *(int *)(param_2 + 0x100);
  }
  *(int *)(param_2 + 0x100) = iVar1;
  iVar1 = *(int *)(param_2 + 0x60);
  if (*(int *)(param_2 + 0x60) < *(int *)(param_2 + 0x104)) {
    iVar1 = *(int *)(param_2 + 0x104);
  }
  *(int *)(param_2 + 0x104) = iVar1;
  iVar1 = *(int *)(param_2 + 0x108);
  if (*(int *)(param_2 + 0x108) <= *(int *)(param_2 + 100)) {
    iVar1 = *(int *)(param_2 + 100);
  }
  *(int *)(param_2 + 0x108) = iVar1;
  *(int *)(param_2 + 0x10c) = *(int *)(param_2 + 0x68) + *(int *)(param_2 + 0x10c);
  *(int *)(param_2 + 0x110) = *(int *)(param_2 + 0x6c) + *(int *)(param_2 + 0x110);
  *(int *)(param_2 + 0x114) = *(int *)(param_2 + 0x70) + *(int *)(param_2 + 0x114);
  *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x74) + *(int *)(param_2 + 0x118);
  *(int *)(param_2 + 0x11c) = *(int *)(param_2 + 0x78) + *(int *)(param_2 + 0x11c);
  *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x7c) + *(int *)(param_2 + 0x120);
  *(int *)(param_2 + 0x124) = *(int *)(param_2 + 0x80) + *(int *)(param_2 + 0x124);
  *(int *)(param_2 + 0x128) = *(int *)(param_2 + 0x84) + *(int *)(param_2 + 0x128);
  *(int *)(param_2 + 300) = *(int *)(param_2 + 0x88) + *(int *)(param_2 + 300);
  *(int *)(param_2 + 0x130) = *(int *)(param_2 + 0x8c) + *(int *)(param_2 + 0x130);
  *(int *)(param_2 + 0x134) = *(int *)(param_2 + 0x90) + *(int *)(param_2 + 0x134);
  *(int *)(param_2 + 0x138) = *(int *)(param_2 + 0x94) + *(int *)(param_2 + 0x138);
  *(int *)(param_2 + 0x13c) = *(int *)(param_2 + 0x98) + *(int *)(param_2 + 0x13c);
  *(int *)(param_2 + 0x140) = *(int *)(param_2 + 0x9c) + *(int *)(param_2 + 0x140);
  *(int *)(param_2 + 0x144) = *(int *)(param_2 + 0xa0) + *(int *)(param_2 + 0x144);
  *(int *)(param_2 + 0x148) = *(int *)(param_2 + 0x148) + 1;
  *(int *)(param_2 + 0x14c) = *(int *)(param_2 + 0xa8) + *(int *)(param_2 + 0x14c);
  *(int *)(param_2 + 0x150) = *(int *)(param_2 + 0xac) + *(int *)(param_2 + 0x150);
  *(int *)(param_2 + 0x154) = *(int *)(param_2 + 0xb0) + *(int *)(param_2 + 0x154);
  *(int *)(param_2 + 0x158) = *(int *)(param_2 + 0xb4) + *(int *)(param_2 + 0x158);
  *(int *)(param_2 + 0x15c) = *(int *)(param_2 + 0xb8) + *(int *)(param_2 + 0x15c);
  uStack_c = (int)(longlong)*(float *)(*(int *)(param_1 + 4) + 0x2e4);
  *(int *)(param_2 + 0x160) = uStack_c + *(int *)(param_2 + 0x160);
  *(int *)(param_2 + 0x164) = *(int *)(param_2 + 0xc0) + *(int *)(param_2 + 0x164);
  *(int *)(param_2 + 0x168) = *(int *)(param_2 + 0xc4) + *(int *)(param_2 + 0x168);
  return;
}

