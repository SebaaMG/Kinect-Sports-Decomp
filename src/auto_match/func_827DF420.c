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
extern int fn_827D5070();
extern int fn_827E0658();
extern int fn_827E2790();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;


undefined8 fn_827DF420(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  puVar1 = (undefined4 *)fn_827E2790(auStack_28);
  iVar2 = fn_827D5070(*puVar1);
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  if ((iVar2 != 0) &&
     (iVar2 = *(int *)(param_1 + 0xf4), fn_827E0658(&iStack_2c,param_1 + 0xf0,auStack_30),
     iStack_2c != iVar2)) {
    return 1;
  }
  return 0;
}

