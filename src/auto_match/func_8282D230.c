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
extern unsigned int *auStack_2c;
extern int fn_82827770();
extern int fn_82827FB0();
extern int fn_8282AE70();
extern int fn_8282BDD0();
extern int fn_8282D0E0();
extern int fn_8282D640();
extern int fn_8282FE08();
extern int fn_828308B8();
extern unsigned int uStack_30;


longlong fn_8282D230(undefined8 param_1,uint *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar4;
  undefined8 uVar3;
  uint uStack_30;
  undefined4 auStack_2c [11];
  
  fn_82827FB0(param_1,&uStack_30);
  auStack_2c[0] = 0;
  lVar2 = fn_8282D0E0(param_1,4,auStack_2c);
  uVar1 = auStack_2c[0];
  if (lVar2 == 0) {
    fn_828308B8(auStack_2c[0],uStack_30);
    fn_8282FE08(uVar1,uStack_30);
    cVar4 = fn_82827770(uVar1);
    if (cVar4 != '\0') {
      fn_8282D640((ulonglong)uStack_30,(ulonglong)uStack_30 + 0x318,0xffffffff8282b828,0);
    }
    uVar3 = fn_82827770(uVar1);
    fn_8282AE70(uStack_30,uVar3);
    fn_8282BDD0(uVar1);
    *param_2 = uStack_30;
  }
  else {
    *param_2 = 0;
  }
  return lVar2;
}

