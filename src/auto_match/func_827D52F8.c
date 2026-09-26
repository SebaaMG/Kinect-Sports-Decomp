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
extern unsigned int *auStack_50;
extern unsigned int *auStack_6c;
extern int fn_827D51A0();
extern int fn_82F68CC0();


int * fn_827D52F8(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piStack00000014;
  undefined1 auStack_6c [28];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [76];
  
  piVar1 = (int *)*param_2;
  piStack00000014 = param_1;
  fn_82F68CC0(auStack_6c,param_2 + 1,0x18);
  uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,0x40,auStack_6c);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_82F68CC0(auStack_4c,param_2 + 1,0x18);
    fn_827D51A0(uVar2,auStack_50);
  }
  param_1[1] = (int)uVar2;
  *param_1 = (int)uVar2 + 0xc;
  return param_1;
}

