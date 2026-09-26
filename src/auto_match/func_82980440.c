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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82932B38();


ulonglong fn_82980440(int param_1,int *param_2)

{
  int iVar2;
  int iVar3;
  ulonglong uVar1;
  
  iVar2 = fn_82930318(0x34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82932B38();
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    if (param_2 != (int *)0x0) {
      iVar3 = (**(code **)(*param_2 + 4))(param_2);
      *(int *)(iVar2 + 0x14) = iVar3;
      if (iVar3 == 0) {
        return 0;
      }
    }
    uVar1 = fn_82930318(0x14);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_829304E0(uVar1,iVar2,0,0xffffffff8202df2c);
    }
    if ((uVar1 & 0xffffffff) != 0) {
      return uVar1;
    }
  }
  return 0;
}

