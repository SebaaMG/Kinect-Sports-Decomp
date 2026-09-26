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
extern int fn_82FA5060();
extern int fn_82FA9208();
extern int fn_82FB3E80();
extern int fn_82FB3F88();
extern int fn_82FB4D78();
extern unsigned int lbl_831BC768;


int fn_82FB5408(int param_1,int param_2,undefined4 *param_3)

{
  int iVar2;
  ulonglong uVar1;
  int iVar3;
  
  *param_3 = 0;
  if ((param_2 != 0) && (iVar2 = fn_82FB4D78(), iVar2 != 0)) {
    return iVar2;
  }
  uVar1 = fn_82FA5060(lbl_831BC768,0x5c);
  if ((uVar1 & 0xffffffff) != 0) {
    iVar2 = fn_82FB3E80(uVar1,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + 1;
    iVar3 = *(int *)(param_1 + 0x38);
    iVar3 = fn_82FB3F88(iVar2,*(undefined4 *)(iVar3 + 0x28),iVar3 + 0x10,iVar3,param_3);
    if (iVar3 == 1) {
      fn_82FA9208(iVar2);
      return iVar2;
    }
    (**(code **)(*(int *)(iVar2 + 4) + 4))(iVar2 + 4,0);
    fn_82FA9208(iVar2);
  }
  return 0;
}

