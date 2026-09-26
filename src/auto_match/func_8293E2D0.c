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
extern int fn_82635A58();
extern int fn_82635FE8();
extern int fn_829370D8();
extern int fn_82937A60();
extern int fn_8293C408();
extern int fn_8293D550();
extern int fn_8293DD48();
extern int fn_82F54250();


undefined8 fn_8293E2D0(int param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffffffff80004005;
  uVar2 = 0;
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82937A60(param_1,0xffffffff82034090);
    uVar2 = uVar3;
  }
  if ((*(uint *)(param_1 + 0x60) & 0x40) == 0) {
    fn_82937A60(param_1,0xffffffff82034048);
    uVar2 = uVar3;
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    fn_82937A60(param_1,0xffffffff82034014);
    uVar2 = uVar3;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_82937A60(param_1,0xffffffff82033fd0);
    uVar2 = uVar3;
  }
  if (-1 < (int)uVar2) {
    fn_8293D550(param_1);
    *(undefined4 *)(param_1 + 0x134) = 1;
    fn_8293DD48(param_1);
    fn_8293C408(param_1,1);
    fn_82635A58();
    fn_8293C408(param_1,1);
    lVar1 = fn_82635FE8();
    if (*(int *)(param_1 + 0x13c) != 0) {
      fn_82F54250(*(int *)(param_1 + 0x13c),(lVar1 + 1U & 0xffffffff) >> 1);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    fn_829370D8(param_1);
  }
  return uVar2;
}

