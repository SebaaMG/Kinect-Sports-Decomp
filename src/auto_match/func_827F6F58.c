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
extern int fn_827F9A10();
extern int fn_827F9AB0();
extern int fn_827FA1F0();
extern int fn_827FACF0();
extern unsigned int lbl_821960D0;


void fn_827F6F58(undefined4 *param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  param_1[1] = param_2;
  param_1[4] = 0;
  *param_1 = &lbl_821960D0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 == 0) {
    param_1[2] = 0;
    *(undefined2 *)((int)param_1 + 0x32) = 0;
    *(undefined2 *)((int)param_1 + 0x2e) = 0;
    fn_827FA1F0(param_1,0);
    uVar2 = 1;
  }
  else {
    param_1[2] = *(undefined4 *)(param_2 + 0x2c);
    *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x1a);
    *(undefined2 *)((int)param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x1c);
    fn_827FA1F0(param_1,*(undefined2 *)(param_2 + 0x1e));
    uVar2 = *(undefined4 *)(param_2 + 0x30);
  }
  param_1[0x24] = uVar2;
  param_1[7] = 0;
  param_1[0x21] = 0;
  param_1[5] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0xffff;
  uVar1 = fn_827F9A10(param_1);
  fn_827F9AB0(param_1,(uVar1 & 0xffff) - 1);
  fn_827FACF0(param_1);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

