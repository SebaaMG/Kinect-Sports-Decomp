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
extern unsigned int *auStack_30;
extern int fn_82E6FC00();
extern int fn_82E71308();
extern int fn_82E71510();


void fn_82E717A8(int param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 auStack_30 [6];
  
  iVar2 = fn_82E71510();
  if (-1 < iVar2) {
    uVar1 = *(undefined2 *)(param_1 + 0x72);
    auStack_30[0] = 0;
    iVar2 = fn_82E71308(param_1,param_2,0xff,auStack_30,0,0);
    if (-1 < iVar2) {
      fn_82E6FC00(param_1,auStack_30[0],uVar1);
    }
  }
  return;
}

