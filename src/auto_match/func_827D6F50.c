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
extern int fn_822315A0();
extern int fn_827D6E18();
extern int fn_827E0088();
extern unsigned int iStack_2c;


void fn_827D6F50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piStack_30;
  int iStack_2c;
  
  fn_827E0088(param_1 + 0x110,param_3);
  fn_827D6E18(&piStack_30,param_1,param_2);
  (**(code **)(*piStack_30 + 0x38))(piStack_30,param_3);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

