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
extern int fn_82E50BE8();
extern int fn_82E66120();
extern int fn_82E661E8();
extern unsigned int lbl_82153AB4;


longlong fn_82E81208(int *param_1,int param_2,undefined8 param_3,ulonglong param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || ((param_4 & 0xffffffff) == 0)) {
    lVar2 = -0x7fffbffd;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x30))();
    if (-1 < lVar2) {
      piVar1 = (int *)fn_82E50BE8(0x3c,0,0,0,0);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        fn_82E66120(piVar1,0,param_4,param_5);
        piVar1[0xe] = 0;
        *piVar1 = (int)&lbl_82153AB4;
      }
      if (piVar1 == (int *)0x0) {
        lVar2 = -0x7ff8fff2;
      }
      else {
        (**(code **)(*piVar1 + 4))(piVar1);
        piVar1[0xe] = 0;
        fn_82E661E8(piVar1,0);
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
  }
  return lVar2;
}

