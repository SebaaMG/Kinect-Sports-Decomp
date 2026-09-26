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
extern int fn_82BC33B0();
extern unsigned int lbl_820E3B04;
extern unsigned int lbl_820E45A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BC3DC8(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_r6;
  undefined4 in_r7;
  
  puVar2 = (undefined4 *)fn_82BC33B0();
  puVar2[0x2a] = in_r7;
  puVar2[0x2b] = in_r6;
  *(undefined1 *)(puVar2 + 0x2c) = 0;
  uVar1 = lbl_820E3B04;
  puVar2[5] = 1;
  puVar2[4] = 1;
  *puVar2 = &lbl_820E45A8;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0x1e;
  puVar2[0xf] = 0;
  puVar2[0x20] = uVar1;
  return;
}

