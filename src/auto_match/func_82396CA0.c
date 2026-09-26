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
extern unsigned int *auStack_60;
extern int fn_824C97F0();
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821CC160;


void fn_82396CA0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  if (*(int *)(param_1 + 0x2d0) != 0) {
    fn_82864988(auStack_50,0xffffffff821b4aac);
    auStack_60[0] = fn_828647D8();
    fn_82864898(auStack_50);
    fn_82536590(auStack_60,0);
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *(undefined4 *)(param_1 + 0x868) = lbl_821CC160;
    piVar1 = (int *)(*(undefined4 **)(param_1 + 0xa8))[1];
    for (piVar2 = (int *)**(undefined4 **)(param_1 + 0xa8); piVar2 != piVar1; piVar2 = piVar2 + 2) {
      fn_824C97F0(*(undefined4 *)(*piVar2 + 0x28),0xffffffff821b45a8);
    }
  }
  return;
}

