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
extern unsigned int lbl_831ADF60;
extern unsigned int lbl_831ADFE0;
extern unsigned int lbl_831AE060;
extern unsigned int lbl_831AE0E0;
extern unsigned int lbl_831AE160;
extern unsigned int lbl_831AE1E0;
extern unsigned int lbl_831AE260;
extern unsigned int lbl_831AE2A0;
extern unsigned int lbl_831AE2E0;


void fn_82F1DDA0(int param_1,int param_2)

{
  if (param_2 < 5) {
    *(undefined **)(param_1 + 0x7600) = &lbl_831AE0E0;
    *(undefined **)(param_1 + 0x7604) = &lbl_831AE260;
    *(undefined **)(param_1 + 0x7608) = &lbl_831ADF60;
    return;
  }
  if (param_2 < 0xd) {
    *(undefined **)(param_1 + 0x7600) = &lbl_831AE160;
    *(undefined **)(param_1 + 0x7604) = &lbl_831AE2A0;
    *(undefined **)(param_1 + 0x7608) = &lbl_831ADFE0;
    return;
  }
  *(undefined **)(param_1 + 0x7600) = &lbl_831AE1E0;
  *(undefined **)(param_1 + 0x7604) = &lbl_831AE2E0;
  *(undefined **)(param_1 + 0x7608) = &lbl_831AE060;
  return;
}

