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
extern int fn_82FEC128();
extern int fn_82FEC630();
extern unsigned int lbl_83264300;
extern unsigned int lbl_832645A8;


void fn_83009B78(int param_1,ulonglong param_2,undefined8 param_3)

{
  if (param_1 == lbl_832645A8) {
    fn_82FEC128(param_2,param_3);
  }
  else {
    fn_82FEC630(*(undefined4 *)(param_1 + 0xc),param_2);
    if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + 0xc) == -2)) {
      *(char *)(lbl_83264300 + 0x94) = '\x01' - ((param_2 & 0x1f) == 0 && (param_2 & 0x11) == 0);
    }
  }
  return;
}

