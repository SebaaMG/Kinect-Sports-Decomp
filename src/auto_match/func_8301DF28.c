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
extern int fn_8301BCA0();
extern int fn_8301BEA0();
extern int fn_8301CFE8();


undefined8 fn_8301DF28(int param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  
  iVar2 = fn_8301BCA0(param_1,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xfc));
  iVar3 = 0x400;
  if ((*(byte *)(param_2 + 0xda) & 2) != 0) {
    iVar3 = 8;
  }
  if (iVar2 == 0x3f) {
LAB_8301dfc4:
    uVar1 = 0x3f;
  }
  else {
    if (iVar2 == 1) {
      if (iVar3 <= *(int *)(param_2 + 0x134)) goto LAB_8301dfc4;
      iVar2 = fn_8301BEA0(param_1,*(undefined4 *)(param_1 + 0xc));
      if (iVar2 == 1) {
        return 1;
      }
    }
    fn_8301CFE8(*(undefined4 *)(param_1 + 0xc),1);
    uVar1 = 2;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return uVar1;
}

