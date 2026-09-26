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
extern unsigned int *auStack_40;
extern int fn_82811238();
extern int fn_82811438();
extern unsigned int lbl_8201DD34;


void fn_827F38B8(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  undefined1 auStack_30 [32];
  
  *param_1 = &lbl_8201DD34;
  if (*(short *)((int)param_1 + 0x1e) != 0) {
    auStack_40[0] = 3;
    uVar1 = fn_82811438(auStack_30,auStack_40,0x10);
    fn_82811238(0xffffffff8320a3e0,param_1[6],uVar1);
  }
  return;
}

