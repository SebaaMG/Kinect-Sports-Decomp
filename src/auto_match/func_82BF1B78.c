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
extern int fn_82F64020();
extern int fn_8314347C();
extern int fn_8314348C();
extern int fn_8314349C();
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


undefined8 fn_82BF1B78(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  if ((((param_3 & 0xffffffff) == 0) || ((param_1 & 0xffffffff) == 0)) || ((int)param_2 < 0x21)) {
    uVar1 = 0;
  }
  else {
    uStack_90 = 0;
    uStack_88 = 0;
    fn_8314349C(auStack_80);
    fn_8314348C(auStack_80,param_3,param_4);
    fn_8314347C(auStack_80,&uStack_90,0);
    fn_82F64020(param_1,param_2,0xffffffff820eb5a0,uStack_7c,uStack_78,uStack_74,uStack_70);
    uVar1 = 1;
  }
  return uVar1;
}

