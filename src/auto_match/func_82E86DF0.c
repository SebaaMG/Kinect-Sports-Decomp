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


void fn_82E86DF0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((param_2 + 0x1385) * 4 + param_1);
  puVar2 = *(undefined4 **)((param_2 + 5000) * 4 + param_1);
  *(undefined4 *)(param_1 + 0x4e78) = *puVar1;
  *(undefined4 *)(param_1 + 0x4e7c) = puVar1[1];
  *(undefined4 *)(param_1 + 0x4e80) = puVar1[2];
  *(undefined4 *)(param_1 + 0x4e70) = puVar1[4];
  *(undefined4 *)(param_1 + 0x4e74) = puVar1[5];
  *(undefined4 *)(param_1 + 0x4e8c) = *puVar2;
  *(undefined4 *)(param_1 + 0x4e90) = puVar2[1];
  *(undefined4 *)(param_1 + 0x4e94) = puVar2[2];
  *(undefined4 *)(param_1 + 0x4e9c) = puVar2[3];
  *(undefined4 *)(param_1 + 0x4e84) = puVar2[4];
  *(undefined4 *)(param_1 + 0x4e88) = puVar2[5];
  *(undefined4 *)(param_1 + 0x4e98) = puVar2[6];
  *(undefined4 *)(param_1 + 0x4ea0) = puVar2[7];
  puVar1 = *(undefined4 **)((param_3 + 0x138b) * 4 + param_1);
  puVar2 = *(undefined4 **)((param_3 + 0x138e) * 4 + param_1);
  *(undefined4 *)(param_1 + 0x4eac) = *puVar1;
  *(undefined4 *)(param_1 + 0x4eb0) = puVar1[1];
  *(undefined4 *)(param_1 + 0x4eb4) = puVar1[2];
  *(undefined4 *)(param_1 + 0x4ea4) = puVar1[4];
  *(undefined4 *)(param_1 + 0x4ea8) = puVar1[5];
  *(undefined4 *)(param_1 + 0x4ec4) = *puVar2;
  *(undefined4 *)(param_1 + 0x4ec8) = puVar2[1];
  *(undefined4 *)(param_1 + 0x4ecc) = puVar2[2];
  *(undefined4 *)(param_1 + 0x4ed0) = puVar2[3];
  *(undefined4 *)(param_1 + 0x4eb8) = puVar2[4];
  *(undefined4 *)(param_1 + 0x4ebc) = puVar2[5];
  *(undefined4 *)(param_1 + 0x4ec0) = puVar2[6];
  *(undefined4 *)(param_1 + 0x4ed4) = puVar2[7];
  return;
}

