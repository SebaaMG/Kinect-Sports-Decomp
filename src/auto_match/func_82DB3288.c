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
extern unsigned int *auStack_30;
extern int fn_83084210();
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int lbl_82141F30;
extern unsigned int uStack_10;
extern unsigned int uStack_1c;
extern unsigned int uStack_c;


void fn_82DB3288(int param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined1 auStack_30 [16];
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iStack_14 = 0;
  uStack_1c = (undefined4)param_2;
  uStack_c = 0;
  ppuStack_20 = &lbl_82141F30;
  if (param_3 == 0) {
    iStack_18 = 0;
  }
  else {
    iStack_18 = param_3 + 0x14;
    iStack_14 = param_3 + 0x10;
  }
  uStack_10 = param_4;
  fn_83084210(auStack_30,*(undefined4 *)(param_1 + 0x10),param_2,param_2 + 0x10,&ppuStack_20);
  return;
}

