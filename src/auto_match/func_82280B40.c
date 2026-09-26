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
extern int fn_82279C58();
extern int fn_8266F740();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;


void fn_82280B40(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  piVar2 = (int *)fn_82279C58(auStack_30,*param_1);
  iVar1 = *piVar2;
  if (iStack_2c != 0) {
    fn_822315A0(iStack_2c);
  }
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)fn_82279C58(auStack_28,*param_1);
    fn_8266F740(*puVar3);
    if (iStack_24 != 0) {
      fn_822315A0();
    }
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

