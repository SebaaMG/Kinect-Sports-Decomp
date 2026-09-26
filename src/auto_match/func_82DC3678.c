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
extern int fn_82CE5410();
extern int fn_82DC9AA8();
extern unsigned int lbl_8214227C;
extern unsigned int lbl_82142618;
extern unsigned int lbl_82142624;
extern unsigned int lbl_82142630;
extern unsigned int lbl_82142644;
extern unsigned int lbl_82142650;


undefined4 * fn_82DC3678(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + -3;
  *param_1 = &lbl_82142630;
  *puVar1 = &lbl_82142650;
  param_1[-1] = &lbl_82142644;
  param_1[1] = &lbl_82142624;
  param_1[2] = &lbl_82142618;
  param_1[0xd] = &lbl_8214227C;
  fn_82DC9AA8(puVar1);
  if ((param_2 & 1) != 0) {
    iVar2 = fn_82CE5410();
    (**(code **)(**(int **)(iVar2 + 0x10) + 8))
              (*(int **)(iVar2 + 0x10),puVar1,*(undefined2 *)(param_1 + -2));
  }
  return puVar1;
}

