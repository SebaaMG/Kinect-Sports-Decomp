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
extern int fn_82511928();
extern int fn_82513BC8();
extern int fn_8288A320();
extern int fn_8288A340();
extern int fn_8288B060();
extern int fn_828A5328();
extern int fn_828AD798();
extern int fn_828C0080();
extern unsigned int lbl_821912A4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_832659CC;
extern unsigned int lbl_8327F894;
extern unsigned int lbl_83297810;


void fn_82511700(int param_1)

{
  double dVar1;
  
  *(undefined1 *)(param_1 + 10) = 1;
  dVar1 = (double)lbl_8327F894;
  if (*(char *)(param_1 + 8) != '\0') {
    fn_828A5328();
    if (lbl_83297810 == 0) {
      fn_82511928();
    }
    fn_82513BC8(dVar1);
    lbl_832659CC = 0;
  }
  fn_828C0080((double)lbl_821CA460);
  if (*(int *)(param_1 + 4) != 0) {
    fn_8288A340((double)lbl_821912A4);
    fn_828AD798(*(undefined4 *)(param_1 + 4),0);
    fn_8288A320(*(undefined4 *)(param_1 + 4),0);
    fn_8288B060(*(undefined4 *)(param_1 + 4),0);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}

