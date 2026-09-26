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
extern int fn_82687270();
extern int fn_826D6290();
extern int fn_8276DD70();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int uStack_28;


void fn_8276E568(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  iStack_30 = 0;
  iStack_2c = 0;
  fn_826D6290(&iStack_30,param_3);
  piStack_24 = &iStack_30;
  uStack_28 = param_2;
  fn_8276DD70(param_1 + 0x24,param_1 + 0x24,&uStack_28);
  if ((iStack_30 == 0) && (iStack_2c != 0)) {
    fn_82687270();
  }
  return;
}

