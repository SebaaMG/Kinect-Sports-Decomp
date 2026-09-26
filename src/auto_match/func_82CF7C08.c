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
extern unsigned int *auStack_120;
extern unsigned int *auStack_1a0;
extern int fn_82CFBB60();
extern int fn_82D00D38();
extern int fn_82D00D60();


void fn_82CF7C08(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_1a0 [128];
  undefined1 auStack_120 [288];
  
  fn_82CFBB60(auStack_120,0x100,0xffffffff821336b8,param_3,param_4[1]);
  (**(code **)(param_1 + 0x3c))(param_2,*(undefined4 *)(param_1 + 0x40));
  (**(code **)(param_1 + 0x3c))(auStack_120,*(undefined4 *)(param_1 + 0x40));
  uVar1 = fn_82D00D60(param_1 + 8,*param_4,auStack_1a0,0x20);
  fn_82D00D38(*(undefined4 *)(param_1 + 4),auStack_1a0,uVar1,*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x40));
  (**(code **)(param_1 + 0x3c))(0xffffffff82133670,*(undefined4 *)(param_1 + 0x40));
  return;
}

