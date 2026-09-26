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
extern int fn_829F5368();
extern int fn_829F5370();
extern int fn_829F7F48();
extern int fn_829F92C0();
extern int fn_829F92C8();
extern unsigned int uRam83218c38;


ulonglong fn_829F5298(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)uRam83218c38;
  if (uVar3 == 0) {
    if (param_1 == (int *)0x0) {
      uVar2 = 0x57;
    }
    else {
      if (*param_1 == 0) {
        return 0;
      }
      iVar1 = fn_829F5368(0x90);
      if (iVar1 == 0) {
        uVar3 = 0;
        uVar2 = 0xe;
        uRam83218c38 = 0;
      }
      else {
        uVar3 = fn_829F7F48();
        uRam83218c38 = (uint)uVar3;
        if ((uVar3 & 0xffffffff) == 0) {
          uVar2 = 0xe;
        }
        else {
          uVar2 = fn_829F92C8(uVar3,param_1);
          if ((uVar2 & 0xffffffff) == 0) {
            return uVar2;
          }
          uVar3 = (ulonglong)uRam83218c38;
        }
      }
    }
  }
  else {
    uVar2 = 0x4df;
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_829F92C0(uVar3);
    fn_829F5370(uVar3);
  }
  uRam83218c38 = 0;
  return uVar2;
}

