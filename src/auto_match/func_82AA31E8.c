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
extern unsigned int *auStack_60;
extern int fn_8265B510();
extern int fn_82AA1C90();
extern int fn_82AA2720();


undefined8
fn_82AA31E8(undefined8 param_1,int param_2,undefined8 param_3,uint *param_4,undefined8 param_5,
             longlong param_6,undefined8 param_7,undefined4 *param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [96];
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  if (uVar2 != 0) {
    fn_82AA2720(param_5,0xffffffff821ce7a4);
    fn_82AA1C90(param_5,0xffffffff821cc86c);
    if (param_2 == 0) {
      *param_8 = param_4 + 9;
    }
    else {
      *param_8 = param_4 + 8;
    }
    uVar3 = fn_8265B510(param_4[2],param_4[3],(ulonglong)uVar1 + param_6,uVar2,0,0,
                              0xffffffff82aa04e0,auStack_60);
    fn_82AA2720(param_5,0xffffffff821ce7a4);
    fn_82AA1C90(param_5,0xffffffff821cc86c);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  return 0;
}

