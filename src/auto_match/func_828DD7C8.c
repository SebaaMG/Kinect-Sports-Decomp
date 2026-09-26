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
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_8288B760();
extern int fn_8288F1E8();
extern int fn_828BE250();
extern int fn_828DD6D8();


undefined8 fn_828DD7C8(int param_1)

{
  ulonglong uVar1;
  char cVar4;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = fn_8288F1E8(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x80);
  if ((uVar1 & 0xffffffff) != 0) {
    cVar4 = fn_8288B760();
    if (cVar4 != '\0') {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0x68))
                        (*(int **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),uVar1);
      return uVar2;
    }
    uVar3 = fn_8265C9E0(0x98);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828DD6D8(uVar3,*(undefined4 *)(param_1 + 0x88),uVar1,
                            *(undefined4 *)(param_1 + 0x8c),*(undefined1 *)(param_1 + 0x90));
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
    fn_828BE250(*(undefined4 *)(param_1 + 0x6c),uVar2,uVar1);
  }
  return 1;
}

