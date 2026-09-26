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
extern int fn_82CE5410();
extern int fn_82D08138();
extern int fn_82D1BCD8();
extern unsigned int iStack_2c;
extern unsigned int iStack_3c;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82D098D8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_40;
  int iStack_3c;
  uint uStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uStack_40 = 0;
  iStack_3c = 0;
  uStack_38 = 0x80000000;
  fn_82D1BCD8(param_1,&uStack_40);
  if (iStack_3c < 1) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 4) = 0;
  }
  else {
    iStack_2c = iStack_3c;
    uStack_28 = 0x10;
    uStack_30 = uStack_40;
    fn_82D08138(&uStack_30,param_2);
  }
  iVar1 = fn_82CE5410();
  iStack_3c = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar1 + 0x10) + 0x10))
              (*(int **)(iVar1 + 0x10),uStack_40,uStack_38 & 0x3fffffff,0x10);
  }
  return;
}

