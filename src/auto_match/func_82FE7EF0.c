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
extern unsigned int *auStack_50;
extern int fn_8300F1B0();
extern int fn_8300F208();
extern int fn_830132A0();
extern unsigned int iStack_4c;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_4e;


void fn_82FE7EF0(int param_1)

{
  undefined2 uVar1;
  undefined1 auStack_50 [2];
  undefined2 uStack_4e;
  int iStack_4c;
  
  uStack_4e = 0x19;
  iStack_4c = param_1;
  uVar1 = fn_8300F1B0();
  fn_8300F208(lbl_832642E4,auStack_50,uVar1);
  if (param_1 == -1) {
    fn_830132A0(lbl_832642E4);
  }
  return;
}

