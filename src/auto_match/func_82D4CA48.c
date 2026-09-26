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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82D4C580();
extern int fn_82D4C8B0();


char * fn_82D4CA48(char *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  uVar1 = fn_82D4C8B0(param_3,param_2 + 0x20,*(undefined4 *)(param_2 + 0x10),auStack_50,
                          auStack_70);
  lVar2 = fn_82D4C580(param_2 + 0x20,auStack_50,auStack_70,uVar1,param_3,param_4);
  *param_1 = (char)(lVar2 + 1) - ((char)lVar2 + (lVar2 + 1 == 0));
  return param_1;
}

