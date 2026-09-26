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
extern int fn_82B24768();
extern unsigned int iStack_40;


void fn_82B24828(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  int iStack_40;
  int aiStack_3c;
  
  fn_82B24768(param_1,param_2,*(undefined4 *)(param_3 + 0x2c),param_4,param_5,&iStack_40);
  fn_82B24768(param_1,param_2,*(undefined4 *)(param_3 + 0x30),param_4,param_5,&aiStack_3c);
  if ((iStack_40 == 0) || (aiStack_3c == 0)) {
    iStack_40 = 0;
  }
  if (*param_6 == -1) {
    *param_6 = iStack_40;
  }
  else if (*param_6 != iStack_40) {
    *param_6 = -2;
  }
  return;
}

