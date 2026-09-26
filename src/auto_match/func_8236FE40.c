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
extern int fn_82358810();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


ulonglong fn_8236FE40(int *param_1,int param_2)

{
  uint uVar1;
  int iVar3;
  ulonglong uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = 0;
  uStack_1c = 0;
  iVar3 = (**(code **)(*param_1 + 0x70))(param_1,&uStack_20,&uStack_1c);
  if (0 < iVar3) {
    if (param_2 != 0) {
      return (ulonglong)(param_1[0xd0] == 0);
    }
    uVar1 = param_1[0x15];
    if ((1 < uVar1) && ((uVar1 < 5 || ((0xf < uVar1 && (uVar1 < 0x12)))))) {
      uVar2 = fn_82358810(param_1,0);
      return uVar2;
    }
  }
  return 0;
}

