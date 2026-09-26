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
extern int fn_8236D498();
extern int fn_828BB690();
extern int fn_828EDC90();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


undefined8 fn_828B6778(int param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iStack_30;
  int iStack_2c;
  
  if ((*(char *)(param_1 + 0x4c) != '\0') || (bVar3 = true, *(int *)(param_1 + 0x20) != 0)) {
    bVar3 = false;
  }
  uVar2 = 0;
  if (bVar3) {
    fn_828BB690(&iStack_30,*(undefined4 *)(param_1 + 0x14),param_2);
    uVar1 = *(undefined4 *)(iStack_30 + 8);
    uVar2 = fn_8236D498(*param_3);
    uVar2 = fn_828EDC90(*(undefined4 *)(param_1 + 0x50),uVar1,uVar2);
    if (iStack_2c != 0) {
      fn_822315A0(iStack_2c);
    }
  }
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return uVar2;
}

