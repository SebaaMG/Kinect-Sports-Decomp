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
extern unsigned int *auStack_60;
extern int fn_82CFE1B0();
extern int fn_82CFE240();
extern int fn_82CFE370();
extern int fn_82E182B0();
extern int fn_82E18720();
extern int fn_82E19000();


bool fn_82E19B50(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  fn_82CFE240(auStack_50,param_4,*(undefined1 *)(param_1 + 0x14));
  uVar2 = fn_82E18720(param_1,param_2,param_3,auStack_50,param_5);
  fn_82E182B0(param_4,0x10);
  fn_82E19000(param_1,param_2,param_3,auStack_50,param_5,uVar2,param_6,0);
  fn_82E182B0(param_4,0x10);
  pcVar3 = (char *)fn_82CFE1B0(auStack_60,auStack_50);
  cVar1 = *pcVar3;
  fn_82CFE370(auStack_50);
  return cVar1 == '\0';
}

