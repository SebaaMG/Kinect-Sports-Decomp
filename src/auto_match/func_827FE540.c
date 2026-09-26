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
extern unsigned int *auStack_38;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_827F9450();
extern int fn_827F94C8();
extern int fn_827F98C8();
extern int fn_82800E88();
extern unsigned int iStack_40;
extern unsigned int uStack_3c;


void fn_827FE540(undefined8 param_1,undefined2 param_2,float *param_3)

{
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [2];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  fn_82800E88(param_1,&uStack_3c);
  fn_827F9450(uStack_3c,param_2,&iStack_40);
  fn_827F98C8(uStack_3c,param_2,auStack_38);
  fn_827F94C8(auStack_38[0],iStack_40,&fStack_30);
  *(float *)(iStack_40 + 0x30) = *param_3 - fStack_30;
  *(float *)(iStack_40 + 0x34) = param_3[1] - fStack_2c;
  *(float *)(iStack_40 + 0x38) = param_3[2] - fStack_28;
  return;
}

