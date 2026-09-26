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
extern unsigned int *auStack_90;
extern char cRam8323e418;
extern int fn_82DDE248();
extern int fn_82DDEB98();
extern int fn_830B1CB0();
extern unsigned int uStack_4c;


undefined1 *
fn_82DDEEC0(undefined1 *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_90 [68];
  undefined4 uStack_4c;
  
  if ((cRam8323e418 == '\0') && (fn_830B1CB0(0xffffffff8323e418), cRam8323e418 == '\0')) {
    *param_1 = 0;
    return param_1;
  }
  *(int *)(param_2 + 0x44) = param_3;
  uVar1 = *(undefined4 *)(param_3 + 0x20);
  fn_82DDEB98(param_2,param_5,param_4,param_6,auStack_90);
  *(undefined1 *)(param_2 + 0x40) = 0;
  uStack_4c = 0;
  fn_82DDE248(param_2,auStack_90,uVar1);
  *param_1 = *(undefined1 *)(param_2 + 0x40);
  return param_1;
}

