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
extern int fn_8267C498();
extern int fn_82730CA8();
extern unsigned int iStack_10;
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82731318(undefined8 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = *param_4;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iStack_18 = *param_4;
  iStack_14 = param_4[1];
  iStack_10 = param_4[2];
  uStack_20 = param_2;
  uStack_1c = param_3;
  fn_82730CA8(param_1,&uStack_20);
  if (iStack_18 != 0) {
    fn_8267C498();
  }
  return;
}

