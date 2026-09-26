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
extern unsigned int *auStack_50;
extern int fn_82536288();
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();


void fn_82293000(int param_1)

{
  undefined8 uVar1;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [40];
  
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82864988(auStack_40,0xffffffff821aa484);
    auStack_50[0] = fn_828647D8();
    fn_82864898(auStack_40);
    uVar1 = fn_828647D8(param_1 + 0x28);
    fn_82536590(auStack_50,uVar1);
    fn_82536288((undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

