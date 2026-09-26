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
extern unsigned int fStack_3c;
extern int fn_83013E80();
extern int fn_8304EDB8();
extern unsigned int lbl_83264308;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_8304EEA0(double param_1,undefined8 param_2,int param_3,undefined8 param_4,longlong param_5
                  ,longlong param_6,undefined4 param_7)

{
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  fn_8304EDB8(param_2,param_3,param_5,param_5 + param_6);
  if ((*(uint *)(param_3 + 8) & 0x10000) != 0) {
    uStack_34 = *(undefined4 *)(*(int *)(param_3 + 0x6c) + 0x20);
    fStack_3c = (float)param_1;
    uStack_40 = (undefined4)param_5;
    uStack_38 = param_7;
    fn_83013E80(lbl_83264308,*(undefined4 *)(param_3 + 0x50),&uStack_40,param_2);
  }
  return;
}

