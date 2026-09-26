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


ulonglong fn_829E1258(int param_1)

{
  uint uVar1;
  uint *in_r11;
  byte in_cr0;
  
  while( true ) {
    if ((bool)(in_cr0 >> 1 & 1)) {
      return -(ulonglong)(*(short *)(param_1 + 0xc) == 0) & 0xffffffff80004005;
    }
    if ((in_r11[1] & 0x1ff00) == 0) {
      if (*(short *)(param_1 + 0xc) != 0) {
        return 0xffffffff80004005;
      }
      *(ushort *)(param_1 + 0xc) = (ushort)(in_r11[1] >> 0x11);
    }
    uVar1 = (*in_r11 >> 3 & 0x7fe) + (*in_r11 >> 0xe) + *(int *)(param_1 + 8);
    *(uint *)(param_1 + 8) = uVar1;
    if (*(uint *)(param_1 + 4) <= uVar1) break;
    if ((uint)*(ushort *)(param_1 + 0xe) <= in_r11[1] >> 0x11) {
      *(ushort *)(param_1 + 0xe) = (ushort)(in_r11[1] >> 0x11) + 1;
    }
    in_r11 = (uint *)((int)in_r11 + (*in_r11 >> 3 & 0x7fe) + (*in_r11 >> 0xe));
    in_cr0 = ((*in_r11 & 0xffffc000) == 0) << 1;
  }
  return 0xffffffff80004005;
}

