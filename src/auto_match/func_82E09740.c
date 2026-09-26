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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CFFFC8();
extern int fn_82D00020();
extern int fn_82D00060();
extern int fn_82D002F0();


void fn_82E09740(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  char acStack_30 [48];
  
  param_1 = param_1 + 0xc;
  uVar1 = fn_82CFFFC8(param_1);
  fn_82D002F0(acStack_30,param_1,uVar1);
  while( true ) {
    if (acStack_30[0] == '\0') {
      return;
    }
    uVar2 = fn_82D00020(param_1,uVar1);
    iVar3 = fn_82CE5410();
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) break;
    iVar3 = param_2[1];
    param_2[1] = iVar3 + 1;
    *(undefined4 *)(iVar3 * 4 + *param_2) = uVar2;
    uVar1 = fn_82D00060(param_1,uVar1);
    fn_82D002F0(acStack_30,param_1,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_2,4);
}

