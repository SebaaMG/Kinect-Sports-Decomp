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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82489D60();
extern int fn_82517978();
extern int fn_82522588();
extern int fn_82522ED8();
extern int fn_827D5070();
extern int fn_827D50B8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int uStack_38;


void fn_8259AC38(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  fn_82522588(&iStack_30,param_2 + 0x134);
  uStack_38 = 0;
  iStack_34 = 0;
  fn_82517978(&uStack_38,*param_1,param_1[1],0);
  uVar1 = uStack_38;
  iVar2 = fn_827D50B8(uStack_38);
  if (iVar2 == 0) {
    auStack_40[0] = fn_827D5070(uVar1);
    fn_82489D60(iStack_30 + 0xac,auStack_40);
  }
  else if (*(char *)(iStack_30 + 0xc2) == '\0') {
    *(int *)(iStack_30 + 0x90) = iVar2;
    *(undefined1 *)(iStack_30 + 0xc2) = 1;
  }
  *(int *)(iStack_30 + 0x8c) = *(int *)(iStack_30 + 0x8c) + 1;
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  fn_82522ED8(param_2);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

