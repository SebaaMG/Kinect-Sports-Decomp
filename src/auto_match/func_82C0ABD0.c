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


undefined8 fn_82C0ABD0(int param_1,uint *param_2)

{
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    *param_2 = (uint)*(ushort *)(param_1 + 0x3c);
    param_2[2] = (uint)*(ushort *)(param_1 + 0x4c);
    param_2[1] = *(uint *)(param_1 + 0x40);
    param_2[3] = *(uint *)(param_1 + 0x20);
    param_2[4] = *(uint *)(param_1 + 0x14);
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x30);
    param_2[10] = *(uint *)(param_1 + 0x224);
    param_2[0xb] = *(uint *)(param_1 + 0xdc);
    param_2[0xc] = *(int *)(param_1 + 0x44) << 3;
    *(undefined2 *)(param_2 + 0xd) = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)((int)param_2 + 0x36) = *(undefined2 *)(param_1 + 0x5a);
    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 0x5c);
    param_2[0x13] = *(uint *)(param_1 + 0x60);
    param_2[0xf] = *(uint *)(param_1 + 100);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_1 + 0x68);
    *(undefined2 *)((int)param_2 + 0x42) = *(undefined2 *)(param_1 + 0x6a);
    param_2[0x11] = *(uint *)(param_1 + 0x6c);
    param_2[0x12] = *(uint *)(param_1 + 0x70);
    return 0;
  }
  return 2;
}

