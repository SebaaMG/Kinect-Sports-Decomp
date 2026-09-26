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
extern unsigned int *auStack_a0;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82526C70();
extern int fn_82672C20();
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82279398(int param_1,longlong param_2)

{
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char cStack_a8;
  undefined1 auStack_a0 [136];
  
  if ((int)param_2 != *(int *)(param_1 + 0x25c)) {
    uStack_b0 = 0;
    uStack_ac = 0;
    fn_82273CD8(&uStack_b0,2);
    cStack_a8 = '\x01' - (param_2 == 0);
    fn_82526C70(auStack_a0,0x80,0xffffffff821a81fc,param_1 + 0x18);
    fn_82672C20(*(undefined4 *)(param_1 + 8),auStack_a0,&uStack_b0,1);
    *(int *)(param_1 + 0x25c) = (int)param_2;
    fn_82273C88(&uStack_b0);
  }
  return;
}

