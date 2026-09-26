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
extern int fn_8267B6F8();
extern int fn_8267B7E0();
extern int fn_826F6DD0();
extern unsigned int iStack_3c;


undefined8 fn_826F8F18(int param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iStack_3c;
  
  uVar2 = fn_8267B6F8(param_2);
  uVar1 = *(uint *)(param_2 + 0x2c);
  uVar3 = (ulonglong)(*(float *)(param_1 + 0x14) * (float)(uVar2 & 0xffffffff));
  iStack_3c = (int)uVar3;
  uVar3 = (uVar3 & 0xffffffff) + (ulonglong)uVar1 + param_3;
  if ((iStack_3c <= (int)uVar2 - *(int *)(param_1 + 0xc)) ||
     ((*(uint *)(param_1 + 8) != 0 && ((ulonglong)*(uint *)(param_1 + 8) < (uVar3 & 0xffffffff)))))
  {
    fn_826F6DD0(param_1,param_2);
    if (*(uint *)(param_1 + 8) == 0) {
      return 1;
    }
    if ((uVar3 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 8)) {
      return 1;
    }
    if ((uVar2 - *(uint *)(param_1 + 0xc) & 0xffffffff) < (param_3 & 0xffffffff)) {
      uVar3 = (*(uint *)(param_1 + 0xc) - uVar2) + (ulonglong)uVar1 + param_3;
      *(int *)(param_1 + 0x10) = (int)uVar3;
    }
    else {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x10);
    }
  }
  fn_8267B7E0(param_2,uVar3);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x2c);
  return 1;
}

