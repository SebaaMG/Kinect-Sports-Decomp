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
extern unsigned int *auStack_40;
extern int fn_82297DB0();
extern int fn_828656E8();
extern int fn_82865C08();


undefined4 *
fn_82865CC8(undefined4 *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_40 [64];
  
  fn_82865C08(auStack_40,param_4,param_5);
  puVar3 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar3 = (undefined4 *)*param_1;
  }
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_3 - param_2 >> 1;
  }
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 - (int)puVar3 >> 1;
  }
  fn_828656E8(param_1,iVar1,iVar2,auStack_40,0,0xffffffffffffffff);
  fn_82297DB0(auStack_40,1,0);
  return param_1;
}

