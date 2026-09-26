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
extern int fn_82FA5190();
extern int fn_83001F78();
extern int fn_83008310();
extern int fn_83017470();
extern int fn_830184C0();
extern unsigned int lbl_8217D1E0;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642FC;


void fn_83035620(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &lbl_8217D1E0;
  if (lbl_832642FC != 0) {
    param_1[7] = 0;
    fn_830184C0(lbl_832642FC,param_1);
    if (param_1[9] != 0) {
      fn_83017470(lbl_832642FC,param_1);
    }
  }
  iVar1 = param_1[4];
  if (iVar1 != param_1[5]) {
    piVar2 = (int *)(iVar1 + 8);
    do {
      if (*piVar2 != 0) {
        fn_83001F78(*piVar2,param_1);
        *piVar2 = 0;
      }
      piVar2[-1] = 0;
      *piVar2 = 0;
      if (piVar2[1] != 0) {
        fn_82FA5190(lbl_831BC768);
        piVar2[1] = 0;
      }
      iVar1 = iVar1 + 0x18;
      piVar2[3] = 0;
      piVar2[2] = 0;
      piVar2 = piVar2 + 6;
    } while (iVar1 != param_1[5]);
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    fn_82FA5190(lbl_831BC768);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  fn_83008310(param_1);
  return;
}

