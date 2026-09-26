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
extern int fn_82250A18();
extern int fn_823913F0();
extern unsigned int lbl_832975B0;


void fn_82377C68(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (((*(char *)(iVar1 + 4) != '\0') && (*(int *)(param_4 + 0x84) != 0)) &&
     (iVar1 = *(int *)(*(int *)(param_4 + 0x84) + 0x88), iVar1 != 0)) {
    fn_823913F0(param_1,param_2,param_3,(ulonglong)*(uint *)(iVar1 + 0x78) + 0x268,param_5,
                      param_6,param_7,param_8);
  }
  return;
}

