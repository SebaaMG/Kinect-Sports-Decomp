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
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern int fn_82A93C18();
extern int fn_82A94368();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_4c;
extern unsigned int uStack_5c;


void fn_82A86338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [20];
  undefined4 uStack_5c;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  
  fn_82A93C18(param_2,param_3,0,0,param_1,0,0,0);
  fn_82A94368(auStack_b0,param_4,auStack_70);
  *param_5 = iStack_44 * iStack_50;
  *param_6 = uStack_5c;
  *param_7 = uStack_4c;
  return;
}

