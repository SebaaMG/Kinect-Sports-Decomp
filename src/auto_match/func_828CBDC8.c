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
extern int fn_823AA970();
extern int fn_8288DB98();
extern int fn_828B5580();
extern int fn_828BDDA0();
extern unsigned int lbl_82025A98;
extern unsigned int lbl_82025AA0;


undefined4 *
fn_828CBDC8(undefined4 *param_1,int param_2,int param_3,undefined1 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  fn_828BDDA0();
  *param_1 = &lbl_82025AA0;
  param_1[0x14] = &lbl_82025A98;
  fn_828B5580(param_1 + 0x20,param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x23) = param_4;
  *(undefined1 *)((int)param_1 + 0x8d) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = param_5;
  if (param_3 == 0) {
    uVar2 = 0x10000;
  }
  else {
    uVar2 = fn_823AA970(param_3);
  }
  param_1[0x29] = uVar2;
  param_1[0x22] = (uint)*(byte *)(param_2 + 0x5c);
  if (*(char *)(param_1 + 0x23) != '\0') {
    *(undefined1 *)((int)param_1 + 0x8d) = *(undefined1 *)(param_3 + 0x26);
    cVar1 = *(char *)(param_3 + 0x26);
    *(char *)((int)param_1 + 0x8d) = cVar1;
    if (cVar1 == '\0') {
      fn_8288DB98(param_2,param_3,param_1 + 0x24);
    }
  }
  return param_1;
}

