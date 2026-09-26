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
extern unsigned int *auStack_820;
extern int fn_8229F688();
extern int fn_8229F758();
extern int fn_8229F858();
extern int fn_822A02D8();
extern int fn_82358FD8();
extern unsigned int iStack_824;
extern unsigned int iStack_828;
extern unsigned int lbl_821CC160;


void fn_8229B0E0(double param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lStack_830;
  int iStack_828;
  int iStack_824;
  undefined1 auStack_820 [2056];
  
  if (param_1 <= (double)lbl_821CC160) {
    fn_82358FD8(*(undefined4 *)(param_2 + 0x1c),auStack_820,0x400,0xffffffff821aae0c);
    fn_8229F688(*(undefined4 *)(param_2 + 0xc),auStack_820,0);
  }
  else {
    iVar1 = fn_822A02D8(param_2,&iStack_824,&iStack_828,&lStack_830);
    lStack_830 = (longlong)iStack_828;
    fn_8229F758((double)(longlong)iStack_824,(double)lStack_830,*(undefined4 *)(iVar1 + 0xc));
    fn_8229F858(*(undefined4 *)(param_2 + 0xc),param_4);
  }
  return;
}

