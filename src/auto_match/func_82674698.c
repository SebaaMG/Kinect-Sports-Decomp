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
extern int fn_8236D750();
extern int fn_8251F718();
extern int fn_8251FA58();
extern int fn_82526B90();
extern int fn_8255AF78();
extern int fn_8255AF80();
extern int fn_82674630();
extern int fn_82BA02A8();


undefined8 fn_82674698(int param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
  uVar4 = 0;
  iVar2 = fn_8255AF80(uVar5);
  if (iVar2 != 0) {
    do {
      uVar1 = fn_8236D750(uVar5);
      iVar2 = fn_82526B90(uVar1,param_2);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x24) != 0) {
          fn_8251FA58();
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
        fn_82BA02A8(uVar5);
        uVar1 = fn_8251F718();
        *(int *)(param_1 + 0x24) = (int)uVar1;
        uVar1 = fn_82674630(param_1,param_2,uVar1);
        return uVar1;
      }
      uVar4 = uVar4 + 1;
      uVar5 = fn_8255AF78(uVar5);
      uVar3 = fn_8255AF80(*(undefined4 *)(param_1 + 0xc));
    } while (uVar4 < uVar3);
  }
  return 0;
}

