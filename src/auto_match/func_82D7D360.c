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
extern int fn_82D7CDB8();


void fn_82D7D360(undefined8 param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)fn_82D7CDB8();
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[3] = param_2[3];
  puVar2[4] = param_2[4];
  puVar2[5] = param_2[5];
  puVar2[6] = param_2[6];
  puVar2[7] = param_2[7];
  puVar2[8] = param_2[8];
  puVar2[9] = param_2[9];
  puVar2[10] = param_2[10];
  puVar2[0xb] = param_2[0xb];
  puVar2[0xc] = param_2[0xc];
  puVar2[0xd] = param_2[0xd];
  puVar2[0xe] = param_2[0xe];
  puVar2[0xf] = param_2[0xf];
  puVar2[0x10] = param_2[0x10];
  puVar2[0x11] = param_2[0x11];
  puVar2[0x12] = param_2[0x12];
  puVar2[0x13] = param_2[0x13];
  puVar2[0x14] = param_2[0x14];
  puVar2[0x15] = param_2[0x15];
  puVar2[0x16] = param_2[0x16];
  puVar2[0x17] = param_2[0x17];
  puVar2[0x18] = param_2[0x18];
  puVar2[0x19] = param_2[0x19];
  puVar2[0x1a] = param_2[0x1a];
  puVar2[0x1b] = param_2[0x1b];
  puVar2[0x1c] = param_2[0x1c];
  puVar2[0x1d] = param_2[0x1d];
  puVar2[0x1e] = param_2[0x1e];
  puVar2[0x1f] = param_2[0x1f];
  uVar1 = *(ushort *)((int)puVar2 + 6);
  *(undefined4 **)((uint)*(ushort *)(puVar2 + 1) * 8 + *(int *)(puVar2[4] + 0x50)) = puVar2;
  *(undefined4 **)((uint)uVar1 * 8 + *(int *)(puVar2[5] + 0x50)) = puVar2;
  return;
}

