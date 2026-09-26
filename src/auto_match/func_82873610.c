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
extern int fn_82835208();
extern int fn_82872EC8();
extern int fn_8287AC68();
extern unsigned int lbl_820222DC;


undefined4 *
fn_82873610(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int *param_4,char param_5,
             undefined1 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_8287AC68();
  puVar2 = param_1 + 0x3d;
  *param_1 = &lbl_820222DC;
  fn_82872EC8(puVar2,param_4);
  *(char *)(param_1 + 0x41) = param_5;
  *(undefined1 *)((int)param_1 + 0x105) = param_6;
  puVar1 = (undefined4 *)*param_4;
  param_1[0x42] = *puVar1;
  param_1[0x43] = puVar1[1];
  param_1[0x44] = puVar1[2];
  puVar1 = (undefined4 *)*param_4;
  param_1[0x45] = *puVar1;
  param_1[0x46] = puVar1[1];
  param_1[0x47] = puVar1[2];
  if (param_5 != '\0') {
    fn_82835208(puVar2,*puVar2);
  }
  return param_1;
}

