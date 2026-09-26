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
extern unsigned int *auStack_21a;
extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern int fn_82A1DDC0();
extern int fn_83142C5C();
extern unsigned int lbl_83219C8C;


undefined8 fn_82A20D78(undefined8 param_1,int param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [6];
  undefined1 auStack_21a [538];
  
  if (param_2 + 7U < 0x201) {
    fn_82A1DDC0(auStack_220,0xffffffff821c8560,6);
    fn_82A1DDC0(auStack_21a,param_1,param_2);
    auStack_21a[param_2] = 0;
    RtlInitAnsiString(auStack_230,auStack_220);
    uVar1 = fn_83142C5C(auStack_230,lbl_83219C8C,0x10000);
    if ((uVar1 & 0xc0000000) != 0xc0000000) {
      fn_82A1DDC0(param_3,(ulonglong)*(uint *)(lbl_83219C8C + 0x10) + 0x140,0x10);
      return 1;
    }
  }
  return 0;
}

