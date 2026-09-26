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
extern int fn_82696330();
extern int fn_826C07C0();
extern unsigned int uStack_3f;
extern unsigned int uStack_40;
extern unsigned int uStack_50;


bool fn_826C2350(int *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  
  uStack_40 = 0;
  uStack_3f = 0;
  cVar1 = (**(code **)(*param_1 + 0x14))();
  if (cVar1 != '\0') {
    puStack_4c = &uStack_40;
    uStack_50 = param_3;
    uStack_3f = param_4;
    fn_826C07C0(param_1 + 2,param_1 + 2,&uStack_50);
  }
  fn_82696330(&uStack_40);
  return cVar1 != '\0';
}

