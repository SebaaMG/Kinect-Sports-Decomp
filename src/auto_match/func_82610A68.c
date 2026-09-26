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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82522588();
extern int fn_827D9630();
extern int fn_827DEA30();
extern unsigned int lbl_821CB8C0;


undefined4 *
fn_82610A68(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  fn_827D9630(auStack_30);
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)0x0;
  }
  else {
    iVar1 = fn_82522588(auStack_40,param_1 + 4);
    fn_827DEA30(param_4);
    *param_4 = &lbl_821CB8C0;
    fn_82365BD8(param_4 + 3,iVar1);
    fn_827D9630(param_4 + 6,auStack_30);
    if (*(int *)(iVar1 + 4) != 0) {
      fn_822315A0();
    }
  }
  return param_4;
}

