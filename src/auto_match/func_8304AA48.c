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
extern int fn_83049D68();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E600();
extern int fn_8307E6E0();


char fn_8304AA48(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x28);
  if (param_1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  fn_8307DE78(*puVar2);
  fn_8307E6E0(*puVar2);
  *(int *)(param_1 + 0x60) = (int)param_2;
  fn_83049D68(param_1,param_3,param_2);
  iVar1 = fn_8307E600(*(undefined4 *)(param_1 + 0x28),0,param_2,param_3);
  fn_8307E060(*puVar2);
  return (iVar1 != 0) + '\x01';
}

