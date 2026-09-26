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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_823F2E20();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern int fn_8266F6A8();
extern int fn_82672C20();
extern unsigned int iStack_4c;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 * fn_8229E9B8(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  
  *param_1 = 1;
  param_1[1] = 2;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = param_1 + 2;
  uVar1 = fn_8266EC60();
  uVar1 = fn_8266EE08(auStack_50,uVar1,param_2,0,1,0);
  fn_823F2E20(puVar2,uVar1);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  fn_8266F6A8(*puVar2,3);
  fn_82672C20(*puVar2,0xffffffff821ab560,0,0);
  uStack_40 = 0;
  uStack_3c = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
    fn_82273CD8(&uStack_40,4);
    pcStack_38 = "single";
    fn_82672C20(*puVar2,0xffffffff821ab578,&uStack_40,1);
  }
  fn_82273C88(&uStack_40);
  return param_1;
}

