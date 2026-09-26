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
extern int fn_82230300();
extern int fn_822EE628();
extern int fn_82865E68();
extern unsigned int uStack_30;


undefined8 fn_82865000(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 uStack_30;
  
  uVar1 = param_2[4];
  fn_82230300(param_1,0,0);
  fn_822EE628(param_1,uVar1,0x20);
  puVar3 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar3 = (undefined4 *)*param_2;
  }
  piVar2 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  fn_82865E68(param_1,param_2,*piVar2 * 2 + (int)puVar3,uStack_30);
  return param_1;
}

