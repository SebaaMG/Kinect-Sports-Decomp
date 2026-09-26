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
extern int fn_8265CA20();
extern int fn_8265CAA0();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82E20BF8();
extern int fn_82E21080();


void fn_82E1E820(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_1 != 0) {
    fn_8265CAA0();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    fn_8265CAA0();
    param_1[1] = 0;
  }
  if (param_1[0x13] != 0) {
    fn_8265CAA0();
    param_1[0x13] = 0;
  }
  iVar1 = param_1[0x15];
  if (iVar1 != 0) {
    fn_82E20BF8(iVar1);
    fn_8265CA20(iVar1);
    param_1[0x15] = 0;
  }
  iVar1 = param_1[0x12];
  if (iVar1 != 0) {
    fn_82E21080(iVar1);
    fn_8265CA20(iVar1);
  }
  puVar2 = (undefined4 *)param_1[0x16];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  if (param_1[7] != 0) {
    fn_82A1E650(param_1[7],0xffffffffffffffff);
    fn_82A1E658(param_1[7]);
  }
  if (param_1[0x18] != 0) {
    fn_82A1E650(param_1[0x18],0xffffffffffffffff);
    fn_82A1E658(param_1[0x18]);
  }
  return;
}

