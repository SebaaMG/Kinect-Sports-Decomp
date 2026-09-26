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
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_8268C510();
extern int fn_826D7220();
extern int fn_826E5AE8();
extern int fn_826F5070();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_40;


undefined8 fn_826E6618(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [56];
  
  uVar1 = fn_8267B890(lbl_831E7E64,0x54,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_826F5070(uVar1,param_1,0,0);
  }
  if ((param_3 & 0x40) != 0) {
    *(undefined1 *)(iVar2 + 0x44) = 1;
  }
  if (*(int *)(iVar2 + 0x38) == 0) {
    uVar3 = 0;
  }
  else {
    uStack_40 = 0;
    fn_8268C510(auStack_3c,param_2);
    fn_8268B330(auStack_38);
    uVar3 = fn_826E5AE8(iVar2,&uStack_40,param_3,0,param_4);
    fn_826D7220(&uStack_40);
  }
  fn_8267C4F0(iVar2);
  return uVar3;
}

