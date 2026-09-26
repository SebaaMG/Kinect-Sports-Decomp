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
extern int fn_82230300();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82631488();


bool fn_82580EF8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar3;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_30 [48];
  
  puVar3 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar3 = (undefined4 *)*param_1;
  }
  fn_82520158(puVar3,auStack_30,0);
  uVar1 = fn_8251F720(auStack_30,0);
  lVar2 = fn_82631488();
  *param_2 = (int)lVar2;
  fn_8251FA58(uVar1);
  fn_82230300(param_1,1,0);
  return -1 < (longlong)-(ulonglong)(lVar2 == 0);
}

