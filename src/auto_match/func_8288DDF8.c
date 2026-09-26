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
extern int fn_828872C8();
extern int fn_828A1C98();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828EA790();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_8288DDF8(longlong param_1,ulonglong param_2)

{
  int aiStack_40 [2];
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  
  fn_828B5580(auStack_38,param_2 + 0x14);
  aiStack_40[0] = fn_828B55F8(auStack_38);
  fn_828A1C98(&iStack_30,param_1 + 0x6c,aiStack_40);
  fn_828B55B0(auStack_38);
  aiStack_40[0] = iStack_30;
  while( true ) {
    if (aiStack_40[0] == iStack_2c) {
      return;
    }
    if ((ulonglong)*(uint *)(aiStack_40[0] + 0x10) == (param_2 & 0xffffffff)) break;
    fn_828EA790();
  }
  fn_828872C8(aiStack_40,param_1 + 0x6c);
  return;
}

