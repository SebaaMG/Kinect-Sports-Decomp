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
extern int fn_82517978();
extern int fn_827D5600();
extern int fn_827D9918();
extern int fn_827E0088();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_827E2E50(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar1 = 2;
  }
  else {
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82517978(&uStack_30,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0);
    uVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 8))
                      (*(int **)(param_1 + 0x4c),param_2,&uStack_30);
    iVar3 = (int)uVar1;
    if ((iVar3 != 0x3e5) && (iVar3 != 0x3e4)) {
      if (iVar3 == 0) {
        uVar2 = fn_827D5600(param_2);
        fn_827E0088(uVar2,param_1 + 0x18);
        (**(code **)(**(int **)(param_1 + 0x40) + 0x34))
                  (*(int **)(param_1 + 0x40),param_1 + 0x18,*(undefined4 *)(param_1 + 0x48));
      }
      fn_827D9918(*(undefined4 *)(param_1 + 0x40));
      (**(code **)(**(int **)(param_1 + 0x40) + 0x50))
                (*(int **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c));
    }
  }
  return uVar1;
}

