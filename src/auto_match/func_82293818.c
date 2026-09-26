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
extern unsigned int *auStack_1040;
extern unsigned int *auStack_1840;
extern unsigned int *auStack_18c0;
extern unsigned int *auStack_840;
extern int fn_82293E20();
extern int fn_8229D418();
extern int fn_8229D4E8();
extern int fn_82358FD8();
extern int fn_82526C70();
extern int fn_82528EE0();
extern unsigned int lbl_821939D8;
extern unsigned int lbl_821939DC;
extern unsigned int lbl_821939E0;
extern unsigned int lbl_821939E4;


void fn_82293818(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                  undefined8 param_9,int param_10)

{
  undefined1 auStack_18c0 [128];
  undefined1 auStack_1840 [2048];
  undefined1 auStack_1040 [2048];
  undefined1 auStack_840 [2112];
  
  if (param_7 != 0) {
    if (param_7 == 1) {
      fn_82358FD8(*(undefined4 *)(param_3 + 0x1c),auStack_1840,0x400,
                        lbl_821939DC);
    }
    else {
      if (2 < param_7) {
        return;
      }
      fn_82358FD8(*(undefined4 *)(param_3 + 0x1c),auStack_1840,0x400,
                        lbl_821939D8);
      if ((1 < (int)param_6) && ((int)param_6 < 0xd)) {
        fn_82526C70(auStack_18c0,0x80,0xffffffff821aa664,0xffffffff821aa5c8,param_6);
        fn_82358FD8(*(undefined4 *)(param_3 + 0x1c),auStack_840,0x400,auStack_18c0);
        fn_8229D4E8(*(undefined4 *)(param_3 + 0x14),param_4,auStack_1840,auStack_840);
        return;
      }
    }
    fn_8229D418(*(undefined4 *)(param_3 + 0x14),param_4,auStack_1840);
    return;
  }
  if ((param_5 & 0xffffffff) == 0) {
    if (param_10 == 0) {
      return;
    }
    fn_82358FD8(*(undefined4 *)(param_3 + 0x1c),auStack_1840,0x400,lbl_821939E4
                     );
    param_5 = 0;
  }
  else {
    if ((param_5 & 0xffffffff) == 1) {
      fn_82358FD8(*(undefined4 *)(param_3 + 0x1c),auStack_1840,0x400,
                        lbl_821939E0);
      goto LAB_8229397c;
    }
    fn_82358FD8(*(undefined4 *)(param_3 + 0x1c),auStack_1840,0x400,lbl_821939E4
                     );
  }
  fn_82528EE0(auStack_1040,0x400,auStack_1840,param_5);
LAB_8229397c:
  fn_82293E20(param_1,param_2,param_3);
  return;
}

