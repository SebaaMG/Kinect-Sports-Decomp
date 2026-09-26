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
extern int fn_82762AE0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_820149E0;
extern unsigned int lbl_821AAD20;


void fn_82765CA0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)fn_82762AE0();
  *puVar3 = &lbl_820149E0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  *(undefined2 *)(puVar3 + 0x13) = 0;
  *(undefined2 *)((int)puVar3 + 0x4e) = 0x1ff8;
  puVar3[0x14] = 0;
  uVar2 = lbl_821AAD20;
  puVar3[0x15] = 0;
  uVar1 = lbl_82005748;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1b] = uVar2;
  puVar3[0x1c] = uVar2;
  puVar3[0x1d] = uVar2;
  puVar3[0x1e] = uVar2;
  puVar3[0x1a] = uVar1;
  *(byte *)(puVar3 + 9) = *(byte *)(puVar3 + 9) | 0xc0;
  puVar3[0x1b] = uVar2;
  puVar3[0x1c] = uVar2;
  puVar3[0x1d] = uVar2;
  puVar3[0x1e] = uVar2;
  return;
}

