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
extern int fn_825089A0();
extern int fn_8251C390();
extern int fn_828849E8();
extern int fn_8288A398();
extern int fn_8288DEF0();
extern int fn_828A4660();
extern int fn_828A4C10();
extern int fn_828BCB88();
extern int fn_828C36B0();
extern int fn_828C37F0();
extern int fn_828CF370();
extern int fn_829E53B0();
extern int fn_82F65320();
extern unsigned int lbl_82186E6C;


void fn_828A50E0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [24];
  
  if (*(char *)(param_1 + 0x34) != '\x01') {
    piVar1 = (int *)fn_825089A0();
    uVar2 = (**(code **)(*piVar1 + 0x10))();
    fn_82F65320(uVar2);
    *(undefined1 *)(param_1 + 0x34) = 1;
    fn_8251C390(auStack_30,0xffffffff820242a8,0xe0);
    uVar2 = fn_828849E8();
    *(undefined4 *)(param_1 + 8) = uVar2;
    fn_829E53B0(auStack_30);
    fn_8288A398();
    fn_828A4C10(param_1);
    fn_828CF370(param_1);
    fn_8288DEF0(*(undefined4 *)(param_1 + 0x300));
    fn_828A4660((double)lbl_82186E6C,param_1);
    fn_828C36B0(param_1,0x800b,0xffffffff83159bec);
    fn_828C36B0(param_1,0x800a,0xffffffff83159c08);
    fn_828C37F0(param_1,0xffffffff83159c08,0,0xffffffff83159c24);
    fn_828C37F0(param_1,0xffffffff83159c08,1,0xffffffff83159c40);
    fn_828BCB88(param_1,0x40008109,4,0xffffffff83159c5c);
    fn_828BCB88(param_1,0x40008002,4,0xffffffff83159c78);
    fn_828BCB88(param_1,0x20008108,2,0xffffffff83159c94);
    fn_828BCB88(param_1,0x20008107,2,0xffffffff83159cb0);
    fn_828BCB88(param_1,0x30008106,3,0xffffffff83159ccc);
    fn_828BCB88(param_1,0x30008105,3,0xffffffff83159ce8);
    fn_828BCB88(param_1,0x50008104,5,0xffffffff83159d04);
    fn_828BCB88(param_1,0x10008103,1,0xffffffff83159d20);
    fn_828BCB88(param_1,0x10008102,1,0xffffffff83159d3c);
    fn_828BCB88(param_1,0x10008101,1,0xffffffff83159d58);
    fn_828BCB88(param_1,0x20008003,2,0xffffffff83159d74);
  }
  return;
}

