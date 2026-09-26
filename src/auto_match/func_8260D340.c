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
extern unsigned int *auStack_40;
extern unsigned int *auStack_5c;
extern int fn_8256D798();
extern int fn_827DE048();
extern int fn_82811400();
extern int fn_82F68CC0();


int fn_8260D340(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_5c [28];
  undefined1 auStack_40 [40];
  
  puVar2 = (undefined4 *)fn_827DE048(auStack_40);
  fn_82811400(auStack_5c,0x10);
  uVar1 = *puVar2;
  fn_82F68CC0(auStack_5c,puVar2 + 1,0x18);
  fn_82811400(param_1 + 0x1c,0x10);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  fn_82F68CC0(param_1 + 0x1c,auStack_5c,0x18);
  fn_8256D798(param_1,0,0);
  return param_1;
}

