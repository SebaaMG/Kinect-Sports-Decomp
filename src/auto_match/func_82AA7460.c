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
extern int fn_82AA6210();
extern int fn_82AA6DC0();
extern int fn_82AA6EA0();
extern int fn_82AA6F30();
extern int fn_82AA71F8();
extern int fn_82F6C150();
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int iStack_34;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82AA7460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined4 *puStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  code *pcStack_38;
  int iStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 uStack_28;
  int iStack_24;
  int iStack_20;
  
  pcStack_38 = fn_82AA6210;
  puStack00000034 = &uStack_40;
  iStack_34 = 0;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack_40 = param_5;
  uStack_3c = param_6;
  fn_82AA6110(param_3,&uStack_30);
  do {
    iStack_34 = fn_82AA6150(&uStack_30,puStack00000034,pcStack_38);
    if (iStack_34 == 0) {
      iStack_24 = fn_82F6C150((ulonglong)uStack_2c + 0x470);
      iStack_20 = iStack_24;
      if (iStack_24 == 0) {
        uStack_28 = 1;
        fn_82AA6F30(uStack_2c,puStack00000034,pcStack_38);
        fn_82AA71F8(uStack_2c,uStack00000014,uStack0000001c,uStack_30,uStack0000002c,
                      uStack00000044);
        break;
      }
      iStack_34 = fn_82AA6DC0(&uStack_30);
    }
  } while (iStack_34 == 0);
  fn_82AA6EA0(&uStack_30,iStack_34);
  return;
}

