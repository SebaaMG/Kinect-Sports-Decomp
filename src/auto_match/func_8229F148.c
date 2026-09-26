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
extern int fn_8229F208();
extern int fn_823F2E20();
extern int fn_82520158();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern unsigned int iStack_24;
extern unsigned int lbl_821CC160;


undefined4 * fn_8229F148(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [4];
  int iStack_24;
  
  *param_1 = 1;
  param_1[1] = 2;
  uVar1 = lbl_821CC160;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uVar1;
  fn_82520158(0xffffffff821ab704,auStack_30,0);
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EE08(auStack_28,uVar2,auStack_30,0,2,0);
  fn_823F2E20(param_1 + 2,uVar2);
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  fn_8229F208(param_1,1);
  return param_1;
}

