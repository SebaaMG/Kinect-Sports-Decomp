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
extern int fn_82D07B30();
extern int fn_82D07CB0();
extern unsigned int uStack_28;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_82D07EB8(int *param_1,undefined8 param_2,undefined8 param_3)

{
  byte abStack_40 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  char cStack_2c;
  undefined4 uStack_28;
  
  (**(code **)(*param_1 + 0x10))(param_1,param_2,1,abStack_40);
  if (cStack_2c == '\0') {
    fn_82D07B30(abStack_40[0],uStack_38,uStack_34,param_3);
  }
  else if (cStack_2c == '\x01') {
    if ((2 < abStack_40[0]) && (abStack_40[0] < 5)) {
      fn_82D07CB0(abStack_40[0],uStack_28,uStack_38,0,param_3);
    }
  }
  (**(code **)(*param_1 + 0x14))(param_1,abStack_40);
  return;
}

