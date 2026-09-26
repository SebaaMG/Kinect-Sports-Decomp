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
extern int fn_8288AE70();
extern int fn_8289EDA0();
extern int fn_828A1C98();
extern unsigned int iStack_1c;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


undefined8 fn_8288B150(longlong param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack0000001c;
  undefined1 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack0000001c = param_2;
  fn_828A1C98(&uStack_18,param_1 + 0x124,&stack0x0000001c);
  iStack_1c = 0;
  fn_8289EDA0(uStack_18,uStack_14,&iStack_1c,uStack_20);
  if ((iStack_1c != 0) &&
     (pcVar1 = (char *)fn_8288AE70(param_1 + 0x124,&stack0x0000001c), *pcVar1 == '\0')) {
    return 0;
  }
  return 1;
}

