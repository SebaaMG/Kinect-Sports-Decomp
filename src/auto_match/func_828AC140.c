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
extern int fn_828ABE08();
extern int fn_82BA02A8();
extern unsigned int lbl_82002AF4;
extern unsigned int lbl_8219701C;


void fn_828AC140(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 auStack_30 [2];
  undefined **ppuStack_28;
  char *pcStack_24;
  
  puVar1 = (undefined4 *)fn_828ABE08(param_3);
  if (puVar1 == (undefined4 *)0x0) {
    pcStack_24 = "bad cast";
    ppuStack_28 = &lbl_8219701C;
    fn_82BA02A8(&ppuStack_28);
    ppuStack_28 = &lbl_82002AF4;
  }
  auStack_30[0] = *puVar1;
  (**(code **)(*param_1 + 0x10))(param_1,param_2,auStack_30);
  return;
}

