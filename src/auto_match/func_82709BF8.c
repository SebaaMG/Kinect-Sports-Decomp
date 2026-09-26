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
extern int fn_8267B890();
extern int fn_826C3768();
extern int fn_82700DA0();
extern int fn_82709658();
extern unsigned int iStack_50;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_60;


void fn_82709BF8(int param_1,undefined4 param_2,int *param_3,int param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 uStack_60;
  int *piStack_5c;
  int iStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  
  if (*(int *)(param_1 + 0xa00) == 0) {
    puVar1 = (undefined4 *)fn_8267B890(lbl_831E7E64,4,0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
    }
    *(undefined4 **)(param_1 + 0xa00) = puVar1;
  }
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  if (param_4 != 0) {
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  iStack_50 = param_4;
  piStack_4c = param_3;
  fn_826C3768(&uStack_48,param_5);
  piStack_5c = &iStack_50;
  uStack_60 = param_2;
  fn_82709658(*(undefined4 *)(param_1 + 0xa00),*(undefined4 *)(param_1 + 0xa00),&uStack_60);
  fn_82700DA0(&iStack_50);
  return;
}

