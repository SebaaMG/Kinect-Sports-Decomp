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
extern int fn_8229F758();
extern int fn_822A02D8();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_18;


void fn_82374D08(double param_1,int param_2)

{
  int iVar1;
  int iStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  
  iVar1 = *(int *)(param_2 + 0xd4);
  uStack_18 = (ulonglong)(((U64)(uStack_18) >> 32) & 0xFFFFFFFF);
  iStack_1c = 0;
  iStack_20 = 0;
  if ((double)lbl_821CC160 < param_1) {
    fn_822A02D8(param_2,&uStack_18,&iStack_1c,&iStack_20);
  }
  uStack_18 = (ulonglong)(((U64)(uStack_18) >> 0) & 0xFFFFFFFF);
  fn_8229F758((double)(longlong)uStack_18,(double)(longlong)iStack_1c,
                    (double)(longlong)iStack_20,*(undefined4 *)(iVar1 + 0xc));
  return;
}

