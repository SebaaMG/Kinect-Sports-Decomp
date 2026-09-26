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
extern int fn_82FA5190();
extern int fn_8301BB18();
extern int fn_8301D0D8();
extern int fn_83021E70();
extern int fn_830224E8();
extern int fn_83024470();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC770;


void fn_82FED0C0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  fn_83024470(param_1 + 4);
  iVar1 = param_1[2];
  while (iVar1 != 0) {
    piVar2 = (int *)*param_1;
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        *param_1 = *piVar2;
      }
      param_1[2] = param_1[2] + -1;
    }
    fn_8301BB18(piVar2 + 2);
    fn_8301D0D8(piVar2 + 2);
    fn_83021E70(piVar2 + 0x6b);
    piVar2[0x68] = (int)&lbl_8217D040;
    fn_82FA5190(lbl_831BC770,piVar2);
    iVar1 = param_1[2];
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_830224E8(param_1 + 0x24);
  fn_82FA5190(lbl_831BC770,param_1);
  return;
}

