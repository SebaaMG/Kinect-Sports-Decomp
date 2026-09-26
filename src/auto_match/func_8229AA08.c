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
extern int fn_822315A0();
extern int fn_82292450();
extern int fn_8229AE58();
extern int fn_8229AEF0();
extern int fn_8265CA20();
extern int fn_82672660();
extern unsigned int lbl_821AADF4;


void fn_8229AA08(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &lbl_821AADF4;
  if (param_1[1] != 0) {
    fn_82672660(param_1[1],param_1);
  }
  if (param_1[9] != 0) {
    fn_82292450(param_1[9],1);
  }
  if (param_1[8] != 0) {
    fn_82292450(param_1[8],1);
  }
  if (param_1[6] != 0) {
    fn_8229AEF0();
  }
  puVar1 = (undefined4 *)param_1[5];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar2);
  }
  fn_8229AE58(param_1 + 3);
  if (param_1[2] != 0) {
    fn_822315A0();
  }
  return;
}

