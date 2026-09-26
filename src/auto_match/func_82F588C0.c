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
extern unsigned int *auStack_28;
extern int fn_82F56D40();
extern int fn_82F56DC0();
extern int fn_82F573F8();
extern int fn_82F58028();
extern int fn_82F58670();
extern unsigned int iStack_30;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_2c;


void fn_82F588C0(undefined8 param_1,int *param_2)

{
  int iVar1;
  int *piStack0000001c;
  int iStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  iStack_30 = *param_2;
  if (iStack_30 != 0) {
    piStack0000001c = param_2;
    fn_82F56D40(&uStack_2c,param_1,&iStack_30);
    iVar1 = fn_82F58670(param_1,&iStack_30);
    fn_82F56DC0(&iStack_30,iVar1,&stack0x0000001c);
    fn_82F573F8(auStack_28,iVar1,iStack_30);
    if (*(int *)(iVar1 + 8) == 0) {
      fn_82F58028(auStack_28,param_1,uStack_2c);
    }
  }
  return;
}

