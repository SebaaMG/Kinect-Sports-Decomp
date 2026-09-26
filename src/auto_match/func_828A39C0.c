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
extern int fn_828A2E00();
extern int fn_828A34C0();
extern unsigned int iStack_28;
extern unsigned int iStack_38;
extern unsigned int iStack_48;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828A39C0(int param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int *apiStack_30 [2];
  int iStack_28;
  
  iStack_38 = *(int *)(param_1 + 0x24c);
  uStack_50 = *(undefined4 *)(param_1 + 0x240);
  uStack_4c = 0;
  uStack_3c = 0;
  iStack_48 = *(int *)(param_1 + 0x250) + iStack_38;
  uStack0000001c = param_2;
  uStack_40 = uStack_50;
  fn_828A2E00(apiStack_30,&uStack_40,&uStack_50,&stack0x0000001c);
  if (iStack_28 != *(int *)(param_1 + 0x250) + *(int *)(param_1 + 0x24c)) {
    uStack_50 = 0;
    uStack_4c = 0;
    if ((apiStack_30[0] != (int *)0x0) && ((undefined4 *)*apiStack_30[0] != (undefined4 *)0x0)) {
      uStack_50 = *(undefined4 *)*apiStack_30[0];
    }
    iStack_48 = iStack_28;
    fn_828A34C0(apiStack_30,param_1 + 0x240,&uStack_50);
  }
  return;
}

