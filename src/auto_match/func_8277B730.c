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
extern int fn_8277B540();
extern int fn_82F63EC8();
extern unsigned int lbl_82015470;
extern unsigned int lbl_831F1378;
extern unsigned int lbl_831F137C;


int * fn_8277B730(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((ulonglong)param_2[1] <= (ulonglong)*param_2) {
    fn_8277B540(param_2,(ulonglong)*param_2 + 0x10,0);
  }
  uVar1 = *param_2;
  if (uVar1 < param_2[1]) {
    uVar2 = param_2[2];
    *param_2 = uVar1 + 1;
    iVar3 = *(int *)(param_2[3] + 4);
    param_1[1] = *(int *)(param_2[3] + 8);
    iVar3 = iVar3 * uVar1 + uVar2;
  }
  else {
    if ((lbl_831F137C & 1) == 0) {
      lbl_831F137C = lbl_831F137C | 1;
      lbl_831F1378 = &lbl_82015470;
      fn_82F63EC8(0xffffffff8313ff80);
    }
    iVar3 = 0;
    param_1[1] = (int)&lbl_831F1378;
  }
  *param_1 = iVar3;
  return param_1;
}

