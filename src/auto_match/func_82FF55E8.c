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
extern int fn_82FF5C48();
extern unsigned int lbl_831BC768;


undefined8 fn_82FF55E8(int param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_2 = 0xff;
  }
  *(int *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    iVar2 = fn_82FA5060(lbl_831BC768,param_2 << 2);
    *(int *)(param_1 + 8) = iVar2;
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 == 0) {
      return 0x34;
    }
    *(int *)(param_1 + 0x10) = param_2;
  }
  uVar1 = fn_82FF5C48(param_1 + 0x14,*(undefined4 *)(param_1 + 4));
  return uVar1;
}

