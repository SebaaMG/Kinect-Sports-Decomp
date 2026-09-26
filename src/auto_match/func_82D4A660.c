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
extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern int fn_82D6F590();
extern unsigned int lbl_83182A98;


undefined8 fn_82D4A660(int *param_1)

{
  longlong lVar1;
  char *pcVar3;
  undefined8 uVar2;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [512];
  
  if (param_1[10] == 0) {
    return 0xffffffffffffffff;
  }
  lVar1 = (**(code **)(*param_1 + 0x14))(param_1,0,auStack_210);
  pcVar3 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_220,lVar1 + 0x20,lVar1 + 0x30,
                                lVar1 + 0x40);
  if (*pcVar3 == '\0') {
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0xc))(param_1,0);
  return uVar2;
}

