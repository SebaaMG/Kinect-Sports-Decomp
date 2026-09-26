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
extern unsigned int *auStack_4c;
extern int fn_82A82160();
extern int fn_8314303C();
extern unsigned int lbl_8322344C;
extern unsigned int uStack_50;


ulonglong fn_82A821B0(ulonglong param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                       ulonglong param_5,uint param_6,ulonglong param_7,int param_8)

{
  int iVar1;
  uint uStack_50;
  uint auStack_4c [19];
  
  if (lbl_8322344C == '\0') {
    iVar1 = -0x7fff0001;
  }
  else {
    fn_82A82160(param_2,&uStack_50,auStack_4c);
    if (((((param_1 & 0xffffffff) == 0) || ((param_2 & 0xffff) == 0)) || ((param_2 & 0xe000) != 0))
       || (((param_4 < uStack_50 || ((param_5 & 0xffffffff) == 0)) ||
           ((param_6 < auStack_4c[0] || ((param_7 & 0xffffffff) == 0)))))) {
      iVar1 = -0x7ff8ffa9;
    }
    else {
      iVar1 = fn_8314303C(param_1,param_2,param_3 << 0x20 | param_3 & 0xfe00ffff,param_5,param_7
                              ,param_8);
    }
    if (-1 < iVar1) {
      return -(ulonglong)(param_8 != 0) & 0x3e5;
    }
  }
  if (param_8 == 0) {
    thunk_FUN_82a2b748();
  }
  else {
    *(int *)(param_8 + 0x18) = iVar1;
  }
  return 0x65b;
}

