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
extern int fn_8288B760();
extern float lbl_82191FB0;
extern unsigned int lbl_82192708;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_82365488(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x168) == 0) {
      uVar1 = *(uint *)(param_1 + 0x16c);
    }
    else {
      uVar1 = fn_8288B760();
      uVar1 = uVar1 & 0xff;
    }
    if (uVar1 != 0) {
      if (*(int *)(param_1 + 0x7a0) != 0) {
        return -(double)(*(float *)(param_1 + 0x794) * lbl_82191FB0 - lbl_821CA460);
      }
      if (*(int *)(param_1 + 0x7a4) != 0) {
        return (double)lbl_82192708;
      }
    }
  }
  return (double)lbl_821CC160;
}

