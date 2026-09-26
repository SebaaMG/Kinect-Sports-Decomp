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
extern int fn_827DE048();
extern int fn_827E8580();
extern int fn_82811400();
extern int fn_82F68CC0();
extern unsigned int uStack_60;


undefined8 fn_827E8620(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_60;
  undefined1 auStack_5c [28];
  undefined1 auStack_40 [40];
  
  puVar1 = (undefined4 *)fn_827DE048(auStack_40);
  fn_82811400(auStack_5c,0x10);
  uStack_60 = *puVar1;
  fn_82F68CC0(auStack_5c,puVar1 + 1,0x18);
  fn_827E8580(param_1,&uStack_60);
  return param_1;
}

