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
extern char cRam832766f2;
extern int fn_822746B8();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_82292D50();
extern int fn_8247F240();
extern int fn_8254B438();
extern int fn_8255B1E0();
extern unsigned int lbl_821CC160;
extern unsigned int uRam832766f1;


void fn_82483AD8(int param_1)

{
  if (cRam832766f2 == '\0') {
    fn_82292BC0(0,0,0);
    fn_82292C30(0);
    fn_82292D50(1);
    fn_8254B438(*(undefined4 *)(*(int *)(param_1 + 0x978) + 0x8c8));
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 100) = 1;
    if (*(int *)(param_1 + 8) == 6) {
      fn_8247F240(param_1 + 0x10,0);
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      fn_822746B8(*(int *)(param_1 + 0xfc),0);
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    *(undefined4 *)(param_1 + 0x980) = 1;
    uRam832766f1 = 1;
    if (((*(int *)(param_1 + 8) == 5) || (*(int *)(param_1 + 8) == 6)) &&
       (*(int *)(param_1 + 0x97c) != 0)) {
      fn_8255B1E0((double)lbl_821CC160,*(undefined4 *)(*(int *)(param_1 + 0x978) + 0x844),
                        param_1 + 0x97c,1,0,0,0,1);
    }
  }
  return;
}

