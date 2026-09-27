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
extern int fn_82F655D8();
extern float lbl_82005718;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_82015618;


undefined8 fn_82FE3488(int param_1,undefined2 param_2,float *param_3)

{
  double dVar1;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x54) = *param_3;
    break;
  case 1:
    *(float *)(param_1 + 0x58) = *param_3;
    break;
  case 2:
    *(float *)(param_1 + 0x5c) = *param_3;
    break;
  case 3:
    *(float *)(param_1 + 0x60) = *param_3;
    break;
  case 4:
    *(char *)(param_1 + 0x91) = '\x01' - (*(char *)param_3 == '\0');
    break;
  case 10:
    *(float *)(param_1 + 4) = *param_3;
    break;
  case 0xb:
    *(float *)(param_1 + 8) = *param_3;
    break;
  case 0xc:
    *(float *)(param_1 + 100) = *param_3;
    break;
  case 0xd:
    *(float *)(param_1 + 0x68) = *param_3;
    break;
  case 0xe:
    *(float *)(param_1 + 0x6c) = *param_3;
    break;
  case 0xf:
    *(float *)(param_1 + 0xc) = *param_3;
    break;
  case 0x10:
    *(float *)(param_1 + 0x10) = *param_3;
    break;
  case 0x14:
    *(char *)(param_1 + 0x90) = '\x01' - (*(char *)param_3 == '\0');
    break;
  case 0x15:
    *(float *)(param_1 + 0x78) = *param_3;
    break;
  case 0x16:
    *(float *)(param_1 + 0x7c) = *param_3;
    break;
  case 0x17:
    *(float *)(param_1 + 0x14) = *param_3;
    break;
  case 0x18:
    *(float *)(param_1 + 0x18) = *param_3;
    break;
  case 0x19:
    *(float *)(param_1 + 0x1c) = *param_3;
    break;
  case 0x1a:
    *(float *)(param_1 + 0x80) = *param_3;
    break;
  case 0x1b:
    *(float *)(param_1 + 0x84) = *param_3;
    break;
  case 0x1c:
    *(float *)(param_1 + 0x20) = *param_3;
    break;
  case 0x1d:
    *(float *)(param_1 + 0x24) = *param_3;
    break;
  case 0x1e:
    *(float *)(param_1 + 0x28) = *param_3;
    break;
  case 0x1f:
    *(float *)(param_1 + 0x88) = *param_3;
    break;
  case 0x20:
    *(float *)(param_1 + 0x8c) = *param_3;
    break;
  case 0x21:
    *(float *)(param_1 + 0x2c) = *param_3;
    break;
  case 0x22:
    *(float *)(param_1 + 0x30) = *param_3;
    break;
  case 0x23:
    *(float *)(param_1 + 0x34) = *param_3;
    break;
  case 0x28:
    dVar1 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
    *(float *)(param_1 + 0x70) = (float)dVar1;
    break;
  case 0x29:
    dVar1 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
    *(float *)(param_1 + 0x74) = (float)dVar1;
    break;
  case 0x32:
    dVar1 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
    *(float *)(param_1 + 0x38) = (float)dVar1;
    break;
  case 0x33:
    dVar1 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
    *(float *)(param_1 + 0x3c) = (float)dVar1;
    break;
  case 0x34:
    dVar1 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
    *(float *)(param_1 + 0x40) = (float)dVar1;
    break;
  case 0x35:
    dVar1 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
    *(float *)(param_1 + 0x44) = (float)dVar1;
    break;
  case 0x3c:
    dVar1 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
    *(float *)(param_1 + 0x48) = (float)dVar1;
    break;
  case 0x3d:
    dVar1 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
    *(float *)(param_1 + 0x4c) = (float)dVar1;
    break;
  case 0x3e:
    dVar1 = (double)fn_82F655D8(lbl_82015618,(double)((*param_3 - lbl_8200BF40) * lbl_82005718));
    *(float *)(param_1 + 0x50) = (float)dVar1;
    break;
  case 100:
    *(float *)(param_1 + 0x94) = *param_3;
    break;
  case 0x65:
    *(float *)(param_1 + 0x98) = *param_3;
    break;
  case 0x66:
    *(float *)(param_1 + 0x9c) = *param_3;
    break;
  case 0x67:
    *(float *)(param_1 + 0xa0) = *param_3;
    break;
  case 0x68:
    *(float *)(param_1 + 0xa4) = *param_3;
    break;
  case 0x69:
    *(float *)(param_1 + 0xa8) = *param_3;
    break;
  case 0x6a:
    *(float *)(param_1 + 0xac) = *param_3;
    break;
  case 0x6b:
    *(float *)(param_1 + 0xb0) = *param_3;
    break;
  case 0x6c:
    *(float *)(param_1 + 0xb4) = *param_3;
    break;
  case 0x6d:
    *(float *)(param_1 + 0xb8) = *param_3;
    break;
  case 0x6e:
    *(float *)(param_1 + 0xbc) = *param_3;
  }
  return 1;
}

