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
extern int fn_822CF300();
extern int fn_822E13D0();
extern float lbl_821917B0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822E1770(int param_1)

{
  fn_822E13D0();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x24) == 0) {
    fn_822CF300(*(int *)(param_1 + 0x14),0);
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x108);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x54) == 0xb) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    *(float *)(*(int *)(param_1 + 0x14) + 0x108) =
         ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821917B0 +
         lbl_821917B0;
  }
  return;
}

