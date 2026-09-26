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
extern int fn_83029B20();
extern int fn_83029B30();
extern unsigned int lbl_832642E4;


int fn_82FEFD08(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x17c);
  if (iVar1 == 0) {
    return param_1;
  }
  if (param_2 != '\0') {
    iVar2 = 0x26;
    if (*(int *)(iVar1 + 4) == 1) {
      fn_83029B20(iVar1,*(undefined4 *)(lbl_832642E4 + 0x90));
      iVar2 = 1;
    }
    return iVar2;
  }
  iVar2 = 0x27;
  if (*(int *)(iVar1 + 4) == 2) {
    fn_83029B30(iVar1,*(undefined4 *)(lbl_832642E4 + 0x90));
    iVar2 = 1;
  }
  return iVar2;
}

