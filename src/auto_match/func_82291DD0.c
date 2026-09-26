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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82528EE0();
extern int fn_82672C20();
extern unsigned int lbl_82196582;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82291DD0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 auStack_30 [32];
  
  fn_82528EE0(auStack_30,10,0xffffffff821aa210,param_2,param_3);
  if (*(int *)(param_1 + 0x3c) != 0) {
    uStack_40 = 0;
    uStack_3c = 0;
    fn_82273CD8(&uStack_40,5);
    puStack_38 = auStack_30;
    fn_82672C20(*(undefined4 *)(param_1 + 0x3c),0xffffffff821aa200,&uStack_40,1);
    fn_82273CD8(&uStack_40,4);
    puStack_38 = &lbl_82196582;
    fn_82672C20(*(undefined4 *)(param_1 + 0x3c),0xffffffff821aa1e8,&uStack_40,1);
    fn_82273C88(&uStack_40);
  }
  return;
}

