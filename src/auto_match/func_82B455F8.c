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
extern unsigned int *auStack_30;
extern int fn_828F0170();
extern unsigned int uStack_2c;


undefined8 fn_82B455F8(int param_1,int param_2,uint *param_3)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  undefined1 auStack_30 [4];
  uint uStack_2c;
  
  uVar3 = 0;
  if (param_2 != 0) {
    iVar2 = fn_828F0170(*(undefined4 *)(param_2 + 0x18),0,auStack_30);
    uVar3 = uStack_2c;
    if (iVar2 < 0) {
      uVar3 = 0xffffffff;
    }
  }
  if ((((uVar3 & 0xffff0000) == 0) ||
      ((uVar3 & 0xffff0000) == (*(uint *)(param_1 + 0x30) & 0xffff0000))) &&
     (((uVar3 & 0xffff) == 0 || ((uVar3 & 0xffff) == (uint)*(ushort *)(param_1 + 0x32))))) {
    *param_3 = uVar3;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

