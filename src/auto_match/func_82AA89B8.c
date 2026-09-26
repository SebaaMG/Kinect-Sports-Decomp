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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_82F68CC0();


undefined8 fn_82AA89B8(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xe8);
  if ((int)puVar1[1] < 0) {
    uVar2 = 0xfffffffffffffff5;
  }
  else {
    puVar1[2] = 0;
    if ((int)puVar1[1] < 0x28) {
      uVar2 = 0xfffffffffffffff4;
    }
    else {
      fn_82F68CC0(param_1,*puVar1,0x28);
      uVar2 = 0;
      puVar1[2] = puVar1[2] + 0x28;
      *(ushort *)(param_1 + 8) = CONCAT11(*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 8))
      ;
      *(ushort *)(param_1 + 10) =
           CONCAT11(*(undefined1 *)(param_1 + 0xb),*(undefined1 *)(param_1 + 10));
      *(ushort *)(param_1 + 0xc) =
           CONCAT11(*(undefined1 *)(param_1 + 0xd),*(undefined1 *)(param_1 + 0xc));
      *(ushort *)(param_1 + 0xe) =
           CONCAT11(*(undefined1 *)(param_1 + 0xf),*(undefined1 *)(param_1 + 0xe));
      *(uint *)(param_1 + 0x10) =
           (uint)*(byte *)(param_1 + 0x13) << 0x18 | (uint)*(byte *)(param_1 + 0x12) << 0x10 |
           (uint)*(byte *)(param_1 + 0x11) << 8 | (uint)*(byte *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x14) =
           (uint)*(byte *)(param_1 + 0x17) << 0x18 | (uint)*(byte *)(param_1 + 0x16) << 0x10 |
           (uint)*(byte *)(param_1 + 0x15) << 8 | (uint)*(byte *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x18) =
           (uint)*(byte *)(param_1 + 0x1b) << 0x18 | (uint)*(byte *)(param_1 + 0x1a) << 0x10 |
           (uint)*(byte *)(param_1 + 0x19) << 8 | (uint)*(byte *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x1c) =
           (uint)*(byte *)(param_1 + 0x1f) << 0x18 | (uint)*(byte *)(param_1 + 0x1e) << 0x10 |
           (uint)*(byte *)(param_1 + 0x1d) << 8 | (uint)*(byte *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x20) =
           (uint)*(byte *)(param_1 + 0x23) << 0x18 | (uint)*(byte *)(param_1 + 0x22) << 0x10 |
           (uint)*(byte *)(param_1 + 0x21) << 8 | (uint)*(byte *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x24) =
           (uint)*(byte *)(param_1 + 0x27) << 0x18 | (uint)*(byte *)(param_1 + 0x26) << 0x10 |
           (uint)*(byte *)(param_1 + 0x25) << 8 | (uint)*(byte *)(param_1 + 0x24);
    }
  }
  return uVar2;
}

