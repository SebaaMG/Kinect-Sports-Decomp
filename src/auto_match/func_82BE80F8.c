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
extern int fn_82BE64E0();
extern int fn_82BE7AE0();
extern int fn_82BF2AC0();
extern int fn_82BF2DC0();


undefined8 fn_82BE80F8(int param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = param_3 - (ulonglong)*(uint *)(param_1 + 0x98);
  fn_82BE64E0(*(undefined4 *)(param_1 + 0x80),0x200);
  iVar2 = (int)uVar4;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x9c) = 4;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2c);
    if (uVar1 != 0) {
      uVar3 = (ulonglong)uVar1;
      if (iVar2 <= (int)uVar1) {
        uVar3 = uVar4;
      }
      iVar2 = fn_82BF2AC0(param_1 + 0xa0,param_2 + (ulonglong)*(uint *)(param_1 + 0x98),uVar3);
      if (iVar2 == -1) {
        iVar2 = fn_82BF2DC0(param_1 + 0xa0);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x98) = 0;
          fn_82BE7AE0(param_1);
        }
      }
      else {
        *(int *)(param_1 + 0x98) = iVar2 + *(int *)(param_1 + 0x98);
      }
    }
  }
  return 0;
}

