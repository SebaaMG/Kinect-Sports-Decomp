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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_8247B210();
extern int fn_82486BC0();
extern int fn_82522FF0();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;


void fn_82487008(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  double dVar3;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  if ((param_2 & 0xffffffff) != 0) {
    puVar1 = (undefined4 *)fn_8247B210(auStack_30,param_1,param_2);
    fn_82486BC0(*puVar1,param_3);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  if ((param_3 & 0xffffffff) != 0) {
    piVar2 = (int *)fn_8247B210(auStack_28,param_1,param_3);
    piVar2 = (int *)*piVar2;
    piVar2[2] = (int)param_2;
    dVar3 = (double)fn_82522FF0();
    piVar2[3] = (int)(float)dVar3;
    (**(code **)(*piVar2 + 0xc))(piVar2);
    if (iStack_24 != 0) {
      fn_822315A0();
    }
  }
  return;
}

