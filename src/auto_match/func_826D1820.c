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
extern int fn_826824B0();
extern int fn_826829A0();
extern unsigned int iStack_2c;
extern unsigned int lbl_8200C070;
extern unsigned int uStack_28;


void fn_826D1820(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined **ppuStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  fn_826829A0();
  if ((param_3 != 0) &&
     (iVar1 = (**(code **)(*(int *)(param_3 + 0x10) + 8))(param_3 + 0x10), iVar1 != 0xb)) {
    iStack_2c = param_1 + -0x10;
    ppuStack_30 = &lbl_8200C070;
    if (iStack_2c != 0) {
      *(uint *)(param_1 + -8) = *(int *)(param_1 + -8) + 1U & 0x8fffffff;
    }
    uStack_28 = (undefined4)param_2;
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x20))
              (*(int *)(param_1 + 4) + 0x10,param_2,&ppuStack_30,0xd,0);
    if (iStack_2c != 0) {
      fn_826824B0();
    }
  }
  return;
}

