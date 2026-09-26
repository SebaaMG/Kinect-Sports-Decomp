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
extern int fn_828B3B98();
extern unsigned int iStack_20;
extern unsigned int iStack_30;
extern unsigned int iStack_40;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


undefined8 fn_828B4218(undefined8 param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined1 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  uStack_48 = 0;
  uStack_44 = 0;
  if (((int *)*param_4 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_4, puVar1 != (undefined4 *)0x0)) {
    uStack_48 = *puVar1;
  }
  iStack_40 = param_4[2];
  uStack_38 = 0;
  uStack_34 = 0;
  if (((int *)*param_3 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_3, puVar1 != (undefined4 *)0x0)) {
    uStack_38 = *puVar1;
  }
  iStack_30 = param_3[2];
  uStack_28 = 0;
  uStack_24 = 0;
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_2, puVar1 != (undefined4 *)0x0)) {
    uStack_28 = *puVar1;
  }
  iStack_20 = param_2[2];
  fn_828B3B98(param_1,&uStack_28,&uStack_38,&uStack_48,uStack_50);
  return param_1;
}

