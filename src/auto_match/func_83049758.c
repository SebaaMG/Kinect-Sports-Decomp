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
extern int fn_830491F8();
extern int fn_8304D678();
extern int fn_8304D690();


undefined8 fn_83049758(int param_1,uint *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char acStack_30 [48];
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x3c);
  acStack_30[0] = '\0';
  uVar1 = fn_830491F8(param_1,param_2,acStack_30);
  if (acStack_30[0] == '\0') {
    uVar3 = (ulonglong)*param_2;
    uVar2 = uVar4;
  }
  else {
    fn_8304D678(param_1,uVar4,*(undefined4 *)(param_1 + 0x24));
    uVar3 = ((ulonglong)*param_2 - (ulonglong)*(uint *)(param_1 + 0x24)) +
            (ulonglong)*(uint *)(param_1 + 0x20);
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
  }
  fn_8304D678(param_1,uVar2,uVar3 + uVar4);
  fn_8304D690(param_1,uVar4,*(undefined4 *)(param_1 + 0x34));
  return uVar1;
}

