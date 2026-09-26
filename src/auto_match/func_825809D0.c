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
extern unsigned int *auStack_70;
extern int fn_8256D798();
extern int fn_82599418();
extern int fn_825D61E0();
extern int fn_827D9EA8();
extern int fn_827DA090();
extern int fn_827DBA00();
extern unsigned int lbl_8326B7C8;


undefined8
fn_825809D0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [112];
  
  uVar1 = fn_827D9EA8();
  fn_827DBA00(lbl_8326B7C8,param_1,uVar1,0,param_4,param_2,0,param_3);
  fn_82599418();
  fn_827DA090(auStack_70,param_1);
  uVar1 = fn_825D61E0(0);
  fn_8256D798(auStack_70,1,0);
  return uVar1;
}

