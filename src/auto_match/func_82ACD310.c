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
extern int fn_82ACB310();
extern int fn_82ACB458();
extern int fn_82ACCAC0();
extern int fn_82ACCBB8();


int fn_82ACD310(int *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  fn_82ACB458(param_1[0xc],param_2,1);
  fn_82ACB310(param_1[0xe]);
  fn_82ACCAC0(param_1[0xc],param_2,param_1[0xe]);
  if ((((uint *)*param_1)[1] & 1) == 0) {
    uVar1 = *(uint *)*param_1;
    do {
      iVar2 = (uVar1 & 0xfffffffe) - 0x28;
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar2 == param_3) {
        return iVar2;
      }
      fn_82ACCBB8(param_1[0xc],iVar2,param_2,param_1[0xe],param_3);
      if ((*(char *)((int)param_1 + 0x4a) == '\0') &&
         ((uint)param_1[0x10] <= *(uint *)(param_1[0xe] + 0x10))) {
        return iVar2;
      }
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) - 4);
    } while ((uVar1 & 1) == 0);
  }
  return 0;
}

