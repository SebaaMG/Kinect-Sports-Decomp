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
extern int fn_82AA6110();
extern int fn_82AA6150();
extern int fn_82AA6DC0();
extern int fn_82AA6EA0();
extern int fn_82AA6F30();
extern int fn_82AA7010();
extern int fn_82F6C150();
extern unsigned int iStack_30;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_82AA7300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  undefined4 uStack0000004c;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  int iStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  fn_82AA6110(param_2,&uStack_28);
  do {
    iStack_30 = fn_82AA6150(&uStack_28,in_stack_0000005c,in_stack_00000064);
    if (iStack_30 == 0) {
      iVar1 = fn_82F6C150((ulonglong)uStack_24 + 0x470);
      if (iVar1 == 0) {
        fn_82AA6F30(uStack_24,in_stack_0000005c,in_stack_00000064);
        fn_82AA7010(uStack_24,uStack00000014,uStack_28,uStack00000024,uStack0000002c,
                      uStack00000034,uStack0000003c,uStack00000044);
        break;
      }
      iStack_30 = fn_82AA6DC0(&uStack_28);
    }
  } while (iStack_30 == 0);
  fn_82AA6EA0(&uStack_28,iStack_30);
  return;
}

