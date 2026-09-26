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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8260D428();


bool fn_82867168(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  puVar2 = (undefined4 *)fn_82230110(auStack_40,0xffffffff83157750);
  iVar3 = fn_82230110(auStack_60,param_2);
  puVar1 = puVar2 + 4;
  if (0xf < (uint)puVar2[5]) {
    puVar2 = (undefined4 *)*puVar2;
  }
  iVar3 = fn_8260D428(iVar3,0,*(undefined4 *)(iVar3 + 0x10),puVar2,*puVar1);
  fn_82230300(auStack_60,1,0);
  fn_82230300(auStack_40,1,0);
  return iVar3 == 0;
}

