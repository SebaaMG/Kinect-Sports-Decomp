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
extern int fn_82A3FE48();
extern int fn_82A3FEE0();
extern int fn_82A3FF60();
extern int fn_82A4AB90();
extern int fn_82A4BA58();
extern int fn_82A4F4E0();


longlong fn_82A42808(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  fn_82A3FE48(0xffffffff83219d50);
  if (param_1 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    iVar1 = fn_82A3FF60(0xffffffff83219d50,0x184,0x20970006,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_82A4BA58();
    }
    if (iVar1 == 0) {
      lVar2 = -0x7ff8fff2;
    }
    else {
      lVar2 = fn_82A4AB90(iVar1);
      if (lVar2 < 0) {
        (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))(iVar1 + 0x10,0);
        fn_82A4F4E0();
      }
      else {
        *param_1 = iVar1;
      }
    }
  }
  fn_82A3FEE0(0xffffffff83219d50);
  return lVar2;
}

