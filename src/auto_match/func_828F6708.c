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
extern int fn_828F59D0();
extern int fn_828FA8D8();


undefined8 fn_828F6708(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x274) + 0x38);
  if (iVar1 == 0) {
    fn_828FA8D8(param_1 + 0x18,param_1 + 0x280,0x5e6,0xffffffff820293c0);
    *(undefined4 *)(param_1 + 0x50) = 1;
    uVar2 = 0xffffffff80004005;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(*(int *)(param_1 + 0x274) + 0x38) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    fn_828F59D0(iVar1,1);
    uVar2 = 0;
  }
  return uVar2;
}

