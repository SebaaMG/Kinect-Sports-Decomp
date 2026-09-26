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
extern int fn_82975B00();


undefined8 fn_82992C38(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = 0xffff0200;
  *(undefined4 *)(param_1 + 0x38) = 0x20;
  uVar2 = (ulonglong)*(uint *)(param_1 + 200) + 0xfe00;
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 200);
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0xc;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x20400010;
LAB_82992d4c:
    uVar3 = *(uint *)(param_1 + 0x70) | 0x28000000;
  }
  else {
    if ((uVar2 & 0xffffffff) != 2) {
      if ((uVar2 & 0xffffffff) == 3) {
        uVar1 = 0xffff0201;
      }
      else if ((uVar2 & 0xffffffff) != 100) {
        if ((uVar2 & 0xffffffff) != 0xff) {
          fn_82975B00(param_1,0,0,0xffffffff8204fd18);
          return 0xffffffff80004005;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0x20;
        *(undefined4 *)(param_1 + 0x60) = 0x800;
        *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xf9ffffff | 0x4000000;
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x400001;
        goto LAB_82992d58;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0x20;
      *(undefined4 *)(param_1 + 200) = uVar1;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x20400010;
      goto LAB_82992d4c;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    uVar3 = *(uint *)(param_1 + 0x70) & 0xb9ffffff | 0x44000000;
    *(undefined4 *)(param_1 + 200) = 0xffff0201;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x400009;
  }
  *(uint *)(param_1 + 0x70) = uVar3;
LAB_82992d58:
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined4 *)(param_1 + 0x44) = 10;
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x48) = 4;
  *(undefined4 *)(param_1 + 0x4c) = 0x10;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x42800200;
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x2c);
  return 0;
}

