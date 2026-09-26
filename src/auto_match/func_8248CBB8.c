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
extern int fn_82365BD8();
extern unsigned int lbl_821BEA60;


void fn_8248CBB8(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &lbl_821BEA60;
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    fn_82365BD8(param_1 + 4,param_2 + 0x10);
    param_1[6] = *(undefined4 *)(param_2 + 0x18);
    param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  }
  return;
}

