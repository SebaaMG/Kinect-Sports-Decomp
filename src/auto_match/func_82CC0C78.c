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
extern int fn_82CC0A18();
extern unsigned int lbl_83177398;
extern unsigned int lbl_8317739C;
extern unsigned int lbl_831773A0;
extern unsigned int lbl_8317741C;


void fn_82CC0C78(int param_1,int param_2)

{
  if (3 < param_2) {
    param_2 = 3;
  }
  if (*(int *)(param_1 + 0x54c8) == 0) {
    param_2 = param_2 * 0x1c;
    *(undefined4 *)(param_1 + 0x5520) = *(undefined4 *)(&lbl_83177398 + param_2);
    *(undefined4 *)(param_1 + 0x5524) = *(undefined4 *)(&lbl_8317739C + param_2);
    *(undefined4 *)(param_1 + 0x5528) = *(undefined4 *)(&lbl_831773A0 + param_2);
    *(undefined4 *)(param_1 + 0x552c) = *(undefined4 *)(param_2 + -0x7ce88c5c);
    *(undefined4 *)(param_1 + 0x5530) = *(undefined4 *)(param_2 + -0x7ce88c58);
    *(undefined4 *)(param_1 + 0x5534) = *(undefined4 *)(param_2 + -0x7ce88c54);
    *(undefined4 *)(param_1 + 0x5538) = *(undefined4 *)(param_2 + -0x7ce88c50);
  }
  else {
    param_2 = param_2 * 0x1c;
    *(undefined4 *)(param_1 + 0x5520) = *(undefined4 *)(param_2 + -0x7ce88bf8);
    *(undefined4 *)(param_1 + 0x5524) = *(undefined4 *)(param_2 + -0x7ce88bf4);
    *(undefined4 *)(param_1 + 0x5528) = *(undefined4 *)(param_2 + -0x7ce88bf0);
    *(undefined4 *)(param_1 + 0x552c) = *(undefined4 *)(param_2 + -0x7ce88bec);
    *(undefined4 *)(param_1 + 0x5530) = *(undefined4 *)(param_2 + -0x7ce88be8);
    *(undefined4 *)(param_1 + 0x5534) = *(undefined4 *)(&lbl_8317741C + param_2);
    *(undefined4 *)(param_1 + 0x5538) = *(undefined4 *)(param_2 + -0x7ce88be0);
  }
  fn_82CC0A18();
  return;
}

