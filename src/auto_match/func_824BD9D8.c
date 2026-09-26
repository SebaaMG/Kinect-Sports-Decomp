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
extern unsigned int *auStack_210;
extern int fn_82292450();
extern int fn_82299948();
extern int fn_82299AC8();
extern int fn_824BD858();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327672C;


undefined8 fn_824BD9D8(int *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStack_210 [512];
  
  if ((*(int *)(*param_1 + 4) == 0) || (*(int *)(*param_1 + 8) != 0)) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if (param_1[0x142] != 0) {
      fn_82292450(param_1[0x142],1);
      param_1[0x142] = 0;
    }
    uVar2 = fn_8265C9E0(0x1230);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82299948(uVar2,9,0);
    }
    param_1[0x142] = iVar3;
    fn_82528BF8(lbl_8327672C,0xffffffff821c05dc,auStack_210,0x100,0,1);
    fn_82299AC8(param_1[0x142],auStack_210);
    uVar1 = fn_824BD858((double)lbl_821CA460,(double)lbl_821CC160,param_1);
  }
  return uVar1;
}

