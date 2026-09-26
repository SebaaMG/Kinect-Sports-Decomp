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
extern unsigned int *auStack_60;
extern int fn_82279768();
extern int fn_82280798();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_822806F0(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [96];
  
  lVar2 = fn_8265C9E0(0x130);
  if (lVar2 == 0) {
    uStack_70 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
    uVar3 = fn_822C5B18(auStack_60,param_4);
    uStack_70 = fn_82279768(lVar2,param_2,param_1,1,1,uVar3,uVar1,1);
  }
  uStack_6c = param_3;
  fn_82280798(param_1,&uStack_70,param_5,1);
  fn_82359C18(param_4);
  return;
}

