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
extern unsigned int *auStack_50;
extern int fn_825089A0();
extern int fn_828C01A0();
extern int fn_828C10D0();
extern unsigned int lbl_8202603C;


undefined4 *
fn_828C1430(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 auStack_50 [80];
  
  piVar1 = (int *)fn_825089A0();
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x24))(piVar1,0x98,2);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 1;
    *puVar2 = &lbl_8202603C;
    puVar2[2] = 1;
    if (puVar2 + 4 != (undefined4 *)0x0) {
      fn_828C01A0(auStack_50,param_5);
      fn_828C10D0(puVar2 + 4,*param_3,param_4,auStack_50);
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 4;
  return param_1;
}

