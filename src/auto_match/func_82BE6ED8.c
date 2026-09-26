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
extern unsigned int *auStack_20;
extern int fn_82BE6268();
extern int fn_82BE6E28();
extern int fn_82F6D460();
extern unsigned int iStack_1c;


undefined8 fn_82BE6ED8(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  if ((param_2 & 0xffffffff) != 0) {
    auStack_20[0] = 0xe6;
    iVar1 = fn_82BE6268(param_1,auStack_20,1);
    if (iVar1 != 0) {
      iStack_1c = fn_82F6D460(param_2,2000);
      iStack_1c = iStack_1c + 3;
      iVar1 = fn_82BE6268(param_1,&iStack_1c,4);
      if (iVar1 != 0) {
        auStack_20[0] = 0x3d;
        iVar1 = fn_82BE6268(param_1,auStack_20,1);
        if ((iVar1 != 0) && (iVar1 = fn_82BE6E28(param_1,param_2,0), iVar1 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

