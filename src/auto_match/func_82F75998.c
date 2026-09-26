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
extern int fn_82F728D0();
extern int fn_82F72A98();
extern int fn_82F73228();
extern int fn_82F73680();
extern int fn_82F75708();
extern int fn_82F76E68();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


int * fn_82F75998(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [48];
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  piVar2 = (int *)fn_82F75708(&uStack_38,1,0);
  *param_1 = *piVar2;
  uVar1 = piVar2[1];
  param_1[1] = uVar1;
  if ((uVar1 & 0xff000000) == 0) {
    if ((*lbl_832635C0 != '\0') && (*lbl_832635C0 != '@')) {
      puVar3 = (undefined8 *)fn_82F76E68(auStack_30);
      uStack_40 = *puVar3;
      fn_82F73680(&uStack_40,0xffffffff8214b5d8);
      uStack_38 = uStack_40;
      fn_82F73228(&uStack_38,param_1);
      *(undefined8 *)param_1 = uStack_38;
    }
  }
  if (*lbl_832635C0 == '@') {
    lbl_832635C0 = lbl_832635C0 + 1;
  }
  else if (*lbl_832635C0 == '\0') {
    if (*param_1 == 0) {
      fn_82F72A98(param_1);
    }
    else {
      puVar3 = (undefined8 *)fn_82F728D0(auStack_30,1);
      uStack_38 = *puVar3;
      fn_82F73680(&uStack_38,0xffffffff8214b5d8);
      uStack_40 = uStack_38;
      fn_82F73228(&uStack_40,param_1);
      *(undefined8 *)param_1 = uStack_40;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 2;
  }
  return param_1;
}

