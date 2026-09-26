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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82356F98();
extern int fn_823F2E20();
extern unsigned int iStack_2c;
extern unsigned int lbl_832766D4;


undefined4 fn_8246FA68(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  uVar1 = *(undefined4 *)(lbl_832766D4 + 0x308);
  *(undefined4 *)(lbl_832766D4 + 0x308) = 0;
  fn_82356F98(auStack_30);
  fn_823F2E20(lbl_832766D4 + 0x300,auStack_30);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  fn_82356F98(auStack_30);
  fn_823F2E20(lbl_832766D4 + 0x310,auStack_30);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  *param_1 = 1;
  return uVar1;
}

