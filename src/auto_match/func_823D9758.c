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
extern int fn_823D9828();
extern int fn_8265BF48();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_823D9758(undefined8 param_1)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_40 = fn_8265BF48(0xffffffff821b629c,0);
  uStack_3c = fn_8265BF48(0xffffffff821b6508,0);
  uStack_38 = fn_8265BF48(0xffffffff821b64f0,0);
  uStack_34 = fn_8265BF48(0xffffffff821b64e4,0);
  uStack_30 = fn_8265BF48(0xffffffff821b64d8,0);
  uStack_2c = fn_8265BF48(0xffffffff821b64cc,0);
  fn_823D9828(param_1,&uStack_40,6,0);
  return;
}

