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
extern int fn_82AB15D0();
extern int fn_82BBFE78();
extern unsigned int lbl_8316FF50;


void fn_82BB5528(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_2 + 0x28) + 0x34))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(int **)(param_2 + 0x28) + 0x18))();
    if ((cVar1 == '\0') &&
       ((*(uint *)(&lbl_8316FF50 + *(int *)(*(int *)(param_2 + 0x28) + 0x18) * 0x34) >> 2 & 1) != 0)
       ) {
      if (param_1[1] != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0250,0xffffffff820e0168,0x13a);
      }
      param_1[1] = param_2;
    }
    else {
      if (*param_1 != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0240,0xffffffff820e0168,0x137);
      }
      *param_1 = param_2;
    }
  }
  else {
    fn_82BBFE78(param_1 + 2,param_2);
  }
  return;
}

