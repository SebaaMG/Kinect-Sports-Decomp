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
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_82F4ED78();
extern int fn_82F4FF38();
extern int fn_82F68CC0();
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;


void fn_82F50108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_b0 [20];
  undefined4 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_84;
  undefined1 auStack_80 [128];
  
  puVar1 = (undefined8 *)fn_82F4FF38(auStack_80,param_1);
  uStack_9c = param_4;
  uStack_94 = param_5;
  uStack_8c = param_6;
  uStack_84 = param_7;
  fn_82F68CC0(auStack_b0,puVar1 + 6,0x10);
  fn_82F4ED78(param_1,param_2,*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5]);
  return;
}

