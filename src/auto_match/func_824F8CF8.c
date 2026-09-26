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
extern int fn_824F6818();
extern int fn_824F6C80();
extern int fn_824F7138();
extern int fn_824F7718();
extern int fn_824F7E38();
extern int fn_824F8890();
extern unsigned int lbl_831C3120;


void fn_824F8CF8(double param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x214) = *(undefined4 *)(param_2 + 0x218);
  if (lbl_831C3120 == 1) {
    fn_824F6818(param_2);
  }
  else if (lbl_831C3120 == 2) {
    fn_824F6C80(param_2);
  }
  else if (lbl_831C3120 == 3) {
    fn_824F7138(param_2);
  }
  else if (lbl_831C3120 == 4) {
    fn_824F7718(param_1,param_2);
  }
  else if (lbl_831C3120 == 5) {
    fn_824F8890(param_2);
  }
  else if (lbl_831C3120 == 6) {
    fn_824F7E38();
  }
  *(float *)(param_2 + 0x34) = (float)((double)*(float *)(param_2 + 0x34) + param_1);
  return;
}

