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
extern unsigned int *auStack_2c;
extern int fn_82E2EBE8();
extern int fn_82E4FE40();
extern unsigned int uStack_30;


longlong fn_82E30388(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  lVar2 = 0;
  uStack_30 = 0;
  auStack_2c[0] = 0;
  if (param_2 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x40))(param_2,0xffffffff8214c710,&uStack_30,auStack_2c);
    if ((iVar1 != 0) || (lVar2 = fn_82E2EBE8(param_1,uStack_30,auStack_2c[0]), -1 < lVar2)) {
      (**(code **)(*param_2 + 0x80))(param_2,param_1);
    }
  }
  fn_82E4FE40(uStack_30);
  return lVar2;
}

