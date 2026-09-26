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
extern unsigned int *auStack_170;
extern unsigned int *auStack_178;
extern int fn_8259BA48();
extern int fn_8259BB38();
extern int fn_8259C5D8();
extern int fn_8265CA20();
extern int fn_827D96A0();
extern int fn_82A1BB18();
extern int fn_82A1EFC0();


void fn_8259B240(int param_1,undefined8 param_2)

{
  longlong lVar1;
  int aiStack_180 [2];
  undefined4 auStack_178 [2];
  undefined1 auStack_170 [368];
  
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar1 + 1);
  auStack_178[0] = fn_827D96A0(param_2);
  fn_8259BB38(aiStack_180,param_1 + 0x34,auStack_178);
  if (aiStack_180[0] != *(int *)(param_1 + 0x38)) {
    if (*(int *)(aiStack_180[0] + 0xc) != 0) {
      fn_8265CA20();
    }
    fn_8259BA48(aiStack_180,param_1 + 0x34,aiStack_180[0]);
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_170,0,0x134);
}

