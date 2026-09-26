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
extern unsigned int *auStack_20;
extern int fn_82F6DDE0();
extern unsigned int lbl_8323A918;
extern unsigned int lbl_8323A91C;


undefined8 fn_82CE1EA8(undefined2 param_1,uint *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined2 auStack_20 [8];
  
  if (lbl_8323A91C == 0) {
    uVar1 = 0xffffffff80150005;
  }
  else {
    auStack_20[0] = param_1;
    iVar2 = fn_82F6DDE0(auStack_20,lbl_8323A91C,lbl_8323A918,4,0xffffffff82ce1e00);
    if (iVar2 == 0) {
      uVar1 = 0xffffffff8015000e;
    }
    else {
      uVar1 = 0;
      *param_2 = (uint)*(ushort *)(iVar2 + 2);
    }
  }
  return uVar1;
}

