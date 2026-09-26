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
extern int fn_82329730();
extern int fn_82359C18();
extern int fn_82383300();
extern int fn_8238EBF8();
extern unsigned int uStack_20;


void fn_82382090(int *param_1)

{
  longlong lVar1;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  
  uStack_20 = 0;
  lVar1 = (**(code **)(*param_1 + 0x4c))();
  fn_82329730(lVar1 + 0x348,auStack_30);
  fn_82359C18(auStack_30);
  uStack_20 = 0;
  lVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  fn_82329730(lVar1 + 0x3c0,auStack_30);
  fn_82359C18(auStack_30);
  uStack_20 = 0;
  lVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  fn_82383300(lVar1 + 0x430,auStack_30);
  fn_82359C18(auStack_30);
  fn_8238EBF8(param_1[0x22]);
  return;
}

