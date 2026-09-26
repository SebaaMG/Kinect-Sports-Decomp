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
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_823F2E20();
extern int fn_82520098();
extern int fn_8265C9E0();
extern int fn_82670CE0();
extern int fn_82672358();
extern int fn_82673CF0();
extern unsigned int iStack_54;
extern unsigned int uStack_58;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * fn_82673F48(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 uStack_58;
  int iStack_54;
  
  iVar2 = fn_8265C9E0(0x15c);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82672358();
  }
  *param_1 = 0;
  param_1[1] = 0;
  fn_82670CE0(param_1,uVar1,0);
  fn_82520098((ulonglong)*param_1 + 0xd4,param_2);
  iVar2 = fn_82673CF0(*param_1,param_3,param_4,param_5,param_6,param_7);
  if (iVar2 == 0) {
    uStack_58 = 0;
    iStack_54 = 0;
    fn_82266D28(&uStack_58,0);
    fn_823F2E20(param_1,&uStack_58);
    if (iStack_54 != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

