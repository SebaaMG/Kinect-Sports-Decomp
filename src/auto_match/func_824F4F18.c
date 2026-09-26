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
extern int fn_82630750();
extern int fn_826308A0();
extern int fn_82639F78();
extern int fn_82640680();
extern int fn_82645EA8();
extern unsigned int lbl_8320A898;
extern unsigned int uStack_28;


void fn_824F4F18(int param_1)

{
  uint uVar1;
  ulonglong *puVar2;
  uint uStack_28;
  
  puVar2 = lbl_8320A898;
  uVar1 = *(uint *)(param_1 + 0x24);
  *(undefined4 *)((int)lbl_8320A898 + 0x13f4) = 0x4b000000;
  *(undefined4 *)((int)puVar2 + 0x13fc) = 0x4b000546;
  *(uint *)(puVar2 + 0x27f) = uStack_28 & 0xc0f8 | 0x4b072402;
  *(uint *)(puVar2 + 0x27e) =
       ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1ffffffc) >> 2 | 0x40000000;
  *puVar2 = *puVar2 | 0x4000;
  fn_82639F78(lbl_8320A898,0,*(undefined4 *)(param_1 + 0x1c),0,0,1);
  fn_82645EA8(lbl_8320A898,3);
  fn_82630750(lbl_8320A898,0,*(undefined4 *)(param_1 + 0x18),0);
  fn_82640680(lbl_8320A898,1,0,0x1c2);
  fn_826308A0(lbl_8320A898,0,*(undefined4 *)(param_1 + 0x18),0);
  fn_82645EA8(lbl_8320A898,0);
  return;
}

