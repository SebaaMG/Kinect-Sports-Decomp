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
extern int fn_82BE5240();
extern int fn_82BE6050();


undefined8 fn_82BE6B58(int param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar2 = 0x44c;
    uVar3 = 0xffffffff820e97ac;
  }
  else {
    *(int *)(param_1 + 0x2c) = param_2;
    *(undefined4 *)(param_1 + 0x48) = param_4;
    iVar1 = fn_82BE6050(param_1,param_3);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 0x65;
    uVar3 = 0xffffffff820e9788;
  }
  fn_82BE5240(param_1,uVar2,uVar3);
  return 0;
}

