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
extern int fn_82F68CC0();
extern int fn_82FA5100();
extern unsigned int lbl_832645A4;


undefined8 fn_82FF9F20(int param_1,undefined4 *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x800;
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 8);
  *param_3 = uVar1;
  if ((param_4 != '\0') || ((uVar1 & 0x7ff) != 0)) {
    uVar3 = 0x10;
  }
  uVar2 = fn_82FA5100(lbl_832645A4,uVar1,uVar3);
  *param_2 = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0x34;
  }
  else {
    fn_82F68CC0(uVar2,*(undefined4 *)(*(int *)(param_1 + 8) + 4),*param_3);
    uVar3 = 1;
  }
  return uVar3;
}

