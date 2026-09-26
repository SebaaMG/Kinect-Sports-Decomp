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
extern int fn_828593A0();
extern int fn_828593C0();
extern int fn_828593D0();
extern int fn_82859760();
extern int fn_8285A808();
extern int fn_8285A830();


undefined8
fn_828602F8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar3;
  undefined4 uVar2;
  
  fn_8285A808();
  puVar1 = (undefined4 *)fn_8285A830(param_1,param_2);
  cVar3 = fn_828593D0();
  if (cVar3 != '\0') {
    fn_828593C0();
  }
  uVar2 = fn_82859760(param_1,param_2,param_3,param_4);
  *puVar1 = uVar2;
  if (cVar3 != '\0') {
    fn_828593A0();
  }
  return 1;
}

