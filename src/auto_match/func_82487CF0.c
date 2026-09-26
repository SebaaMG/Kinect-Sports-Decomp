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
extern int fn_82487840();
extern int fn_8254B438();
extern int fn_8255B1E0();
extern unsigned int lbl_821CC160;


void fn_82487CF0(int param_1)

{
  fn_8254B438(*(undefined4 *)(*(int *)(param_1 + 0x490) + 0x8c8));
  fn_82487840(param_1 + 0x10,*(int *)(param_1 + 8) == 5);
  if ((*(int *)(param_1 + 8) == 7) && (*(int *)(param_1 + 0x494) != 0)) {
    fn_8255B1E0((double)lbl_821CC160,*(undefined4 *)(*(int *)(param_1 + 0x490) + 0x844),
                      param_1 + 0x494,1,0,0,0,1);
  }
  return;
}

