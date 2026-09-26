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
extern int fn_8288E150();
extern unsigned int iStack_18;
extern unsigned int iStack_28;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_8288FBF0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  piVar1 = (int *)*param_3;
  piVar2 = (int *)0x0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    piVar2 = *(int **)*piVar1;
  }
  iStack_18 = param_3[2];
  uStack_30 = 0;
  iStack_28 = iStack_18 + 1;
  uStack_2c = 0;
  if ((piVar2 != (int *)0x0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) {
    uStack_30 = *(undefined4 *)*piVar2;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uStack_20 = *(undefined4 *)*piVar1;
  }
  fn_8288E150(param_1,param_2,&uStack_20,&uStack_30);
  return param_1;
}

