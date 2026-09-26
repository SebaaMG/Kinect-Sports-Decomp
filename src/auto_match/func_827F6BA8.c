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
extern int fn_827F9450();
extern int fn_827F94C8();
extern int fn_827F98C8();
extern int fn_8280CB58();
extern int fn_82810208();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_827F6BA8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [56];
  
  fn_827F98C8(param_2,param_3,&uStack_3c);
  fn_827F9450(param_2,param_3,&uStack_40);
  fn_827F94C8(uStack_3c,uStack_40,auStack_38);
  fn_8280CB58(uStack_40,param_1);
  fn_82810208(auStack_38,param_1,param_1);
  return param_1;
}

