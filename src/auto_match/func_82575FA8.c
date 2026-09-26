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
extern int fn_8251F720();
extern int fn_825758D0();
extern int fn_82575C78();


undefined8
fn_82575FA8(undefined8 param_1,undefined8 param_2,int param_3,uint *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(char *)(param_3 + 8) == '\0') {
    uVar1 = 0;
    uVar3 = *param_4 >> 0x18;
    if (*param_4 == 0) {
      uVar3 = 0x7a;
    }
    if (uVar3 == 0x1b) {
      uVar1 = fn_82575C78(param_1,param_2,param_3,param_4,param_5,0,param_6,param_7);
    }
    else {
      lVar2 = fn_8251F720(param_4,0);
      if (lVar2 != 0) {
        uVar1 = fn_825758D0(param_1,param_2,param_3,*param_4,0,lVar2,0,param_5,0,param_6);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

