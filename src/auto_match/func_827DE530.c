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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_827DC918();
extern int fn_827DE278();
extern int fn_827E0C38();
extern int fn_82F68CC0();
extern unsigned int lbl_82002AE0;


undefined1 * fn_827DE530(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puStack00000014;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [60];
  
  *param_1 = *param_2;
  puStack00000014 = param_1;
  fn_827DE278(param_1 + 4,param_3);
  fn_82F68CC0(auStack_3c,param_3 + 4,0x18);
  fn_827DC918(param_1 + 0x44,auStack_40);
  *(undefined4 *)(param_1 + 0x74) = lbl_82002AE0;
  fn_827E0C38(param_1,8);
  return param_1;
}

