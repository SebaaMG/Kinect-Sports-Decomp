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
extern int fn_82F68CC0();
extern int fn_82FE0080();
extern int fn_82FE0190();
extern int fn_82FE02A0();
extern int fn_82FE0890();
extern int fn_82FE0960();
extern unsigned int lbl_821AAD20;


void fn_82FE1028(int param_1)

{
  fn_82F68CC0(param_1 + 0xe4,(ulonglong)*(uint *)(param_1 + 0xe0) + 4,0x50);
  *(undefined1 *)(param_1 + 0xd3) = 0;
  if ((*(float *)(param_1 + 0xe4) != *(float *)(param_1 + 0x1a4)) ||
     (*(float *)(param_1 + 0xe8) != *(float *)(param_1 + 0x1a8))) {
    fn_82FE0960(param_1);
    *(undefined1 *)(param_1 + 0xd3) = 1;
  }
  if (*(float *)(param_1 + 0xec) != *(float *)(param_1 + 0x1ac)) {
    fn_82FE0890(param_1);
  }
  if (((*(float *)(param_1 + 0xf4) != *(float *)(param_1 + 0x1b4)) ||
      (*(float *)(param_1 + 0xf8) != *(float *)(param_1 + 0x1b8))) ||
     (*(float *)(param_1 + 0xfc) != *(float *)(param_1 + 0x1bc))) {
    fn_82FE0080(param_1);
  }
  if (((*(float *)(param_1 + 0x100) != *(float *)(param_1 + 0x1c0)) ||
      (*(float *)(param_1 + 0x104) != *(float *)(param_1 + 0x1c4))) ||
     (*(float *)(param_1 + 0x108) != *(float *)(param_1 + 0x1c8))) {
    fn_82FE0190(param_1);
  }
  if (((*(float *)(param_1 + 0x10c) != *(float *)(param_1 + 0x1cc)) ||
      (*(float *)(param_1 + 0x110) != *(float *)(param_1 + 0x1d0))) ||
     (*(float *)(param_1 + 0x114) != *(float *)(param_1 + 0x1d4))) {
    fn_82FE02A0(param_1);
  }
  if (*(char *)(param_1 + 0xd1) != '\0') {
    *(undefined4 *)(param_1 + 0x128) = lbl_821AAD20;
  }
  return;
}

