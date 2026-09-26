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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EE8630();
extern int fn_82EE8BB8();
extern int fn_82EE8D20();


longlong fn_82EE8EE0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  iVar1 = fn_82E50BE8(0xb8,0,0,0,0);
  if (iVar1 == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    piVar2 = (int *)fn_82EE8BB8();
    lVar3 = fn_82EE8D20(piVar2,param_2,param_1);
    if (lVar3 < 0) {
      if (piVar2 != (int *)0x0) {
        fn_82EE8630(piVar2);
        fn_82E4FE40(piVar2);
      }
    }
    else {
      *param_3 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return lVar3;
}

