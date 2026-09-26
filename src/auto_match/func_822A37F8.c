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
extern int fn_822315A0();
extern int fn_8229D898();
extern int fn_822A3A38();
extern int fn_82517978();
extern int fn_8266F578();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_822A37F8(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  bVar1 = false;
  fn_8229D898();
  if (*(int *)(param_1 + 0x2c) == 0) {
    iStack_38 = 0;
    iStack_34 = 0;
    bVar2 = false;
    fn_82517978(&iStack_38,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
    if (iStack_38 != 0) {
      uStack_40 = 0;
      iStack_3c = 0;
      bVar2 = true;
      fn_82517978(&uStack_40,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
      iVar3 = fn_8266F578(uStack_40);
      if (iVar3 != 0) {
        bVar1 = true;
      }
    }
    if ((bVar2) && (iStack_3c != 0)) {
      fn_822315A0();
    }
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    if (bVar1) {
      fn_822A3A38(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
  }
  return;
}

