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
extern unsigned int *auStack_40;
extern int fn_8267C498();
extern int fn_826FE548();
extern int fn_82701088();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
extern unsigned int uStack_15;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;


void fn_82701CA0(undefined8 param_1)

{
  undefined1 auStack_40 [16];
  int aiStack_30 [3];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  
  aiStack_30[0] = 0;
  aiStack_30[1] = 0xffffffff;
  uStack_18 = 0;
  aiStack_30[2] = lbl_821AAD20;
  uStack_16 = 0;
  uStack_24 = lbl_821AAD20;
  uStack_15 = 0;
  uStack_20 = lbl_821AAD20;
  uStack_14 = 0;
  uStack_1c = lbl_821AAD20;
  auStack_40[0] = 0x80;
  fn_82701088(param_1,9,5,auStack_40,aiStack_30);
  fn_826FE548(param_1,aiStack_30);
  if (aiStack_30[0] != 0) {
    fn_8267C498();
  }
  return;
}

