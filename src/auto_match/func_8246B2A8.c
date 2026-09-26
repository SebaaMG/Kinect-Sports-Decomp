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
extern int fn_8246AFB0();
extern int fn_8246B320();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CC160;


void fn_8246B2A8(int param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x80) = *param_2;
  if (*(int *)(param_1 + 8) == 3) {
    fn_8246B320((double)*(float *)(param_1 + 0x8c),(double)*(float *)(param_1 + 0x90),param_1,
                      param_1 + 0x80,param_3,param_4,1);
    uVar1 = lbl_821917C0;
    *(undefined4 *)(param_1 + 0x8c) = lbl_821CC160;
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  else {
    fn_8246AFB0(param_1,3);
  }
  return;
}

