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
extern int fn_822AA770();
extern int fn_822B17A8();
extern int fn_8236FDE0();
extern int fn_823807F0();


void fn_823753E8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x664);
  *(int *)(param_1 + 0xa10) = *(int *)(param_1 + 0xa10) + 1;
  iVar3 = *(int *)(param_3 + 0x24);
  iVar2 = fn_8236FDE0(param_3);
  if ((byte)((iVar2 == 0) + 0xdU) < 0x1e) {
    fn_823807F0(uVar1);
  }
  if ((param_5 != 0x10) && (param_5 == 0xf)) {
    fn_822AA770(*(undefined4 *)(param_4 + 0x1c));
  }
  if (iVar3 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x7dc) + 0x24) = 1;
    iVar3 = *(int *)(iVar3 + 0x34);
    if (iVar3 != 0) {
      fn_822B17A8(iVar3,0x33,0);
    }
  }
  if (*(int *)(param_1 + 0x204) == 0) {
    iVar3 = (*(int *)(param_3 + 0x2c) * 2 + *(int *)(param_3 + 0x28)) * 0x88 + param_1 + 0xa14;
    *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

