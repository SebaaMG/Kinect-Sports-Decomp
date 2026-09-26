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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_54;
extern int fn_82B17968();
extern int fn_82B82D28();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8
fn_82B17E58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6,int param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [76];
  
  if ((param_7 == 0) && (uVar1 = *(uint *)(param_5 + 8) >> 7 & 0x7f, uVar1 != 1)) {
    if (uVar1 == 5) {
      uVar2 = 0x13;
    }
    else if (uVar1 == 6) {
      uVar2 = 0x10;
    }
    else if (uVar1 == 7) {
      uVar2 = 0x12;
    }
    else {
      if (uVar1 != 8) goto LAB_82b17f64;
      uVar2 = 0x14;
    }
    fn_82B82D28(*(undefined4 *)(param_5 + 0x2c),param_6,&uStack_58,&uStack_5c,&uStack_60,0,0,0
                     );
    fn_82B82D28(*(undefined4 *)(param_5 + 0x30),param_6,auStack_4c,auStack_50,auStack_54,0,0,0
                     );
    uVar2 = fn_82B17968(param_1,param_2,param_3,param_4,uStack_58,uStack_5c,uStack_60,uVar2);
  }
  else {
LAB_82b17f64:
    uVar2 = 0;
  }
  return uVar2;
}

