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
extern unsigned int *auStack_7c;
extern int fn_829C89A8();
extern int fn_829C8A38();
extern int fn_82F691F0();
extern unsigned int lbl_83217148;
extern unsigned int lbl_8321715C;
extern unsigned int lbl_83217160;
extern unsigned int lbl_83217164;


undefined8
fn_829CAE90(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_7c [124];
  
  if ((((param_2 == 0) || (param_3 == 0)) || (param_5 == 0)) || ((param_4 == 0 || (param_6 == 0))))
  {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (lbl_83217148 != 0) {
      RtlEnterCriticalSection(0xffffffff8315c428);
      lbl_83217164 = 1;
      lbl_8321715C = 0x80004005;
      lbl_83217160 = 0x8321714c;
      sync(0);
      RtlLeaveCriticalSection(0xffffffff8315c428);
      fn_829C8A38(1,param_7);
      fn_829C89A8(0,1);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_7c,0,0x2c);
    }
    uVar1 = 0xffffffff83010005;
  }
  return uVar1;
}

