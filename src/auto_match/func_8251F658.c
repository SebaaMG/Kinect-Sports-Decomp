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
extern int fn_823AB478();
extern int fn_82517978();
extern int fn_827D5070();
extern int fn_827D50B8();
extern int fn_82A1E810();
extern int fn_82A1EFA0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_83276742;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8251F658(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  sync(1);
  uVar1 = fn_827D5070(*param_1);
  iVar2 = fn_827D50B8(*param_1);
  if (iVar2 != 0) {
    if (*(int *)(param_2 + 0x13c) != 0) goto LAB_8251f6f4;
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82517978(&uStack_30,*param_1,param_1[1],0);
    lbl_83276742 = 1;
    if (lbl_832659CD != '\0') {
      fn_823AB478(lbl_83265988);
      fn_82A1EFA0();
    }
    fn_82A1EFA0(0);
  }
  **(undefined4 **)(param_2 + 8) = uVar1;
LAB_8251f6f4:
  sync(1);
  fn_82A1E810(*(undefined4 *)(param_2 + 0x18));
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

