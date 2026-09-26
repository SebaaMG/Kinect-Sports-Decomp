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


undefined1 * fn_82DEFD20(undefined1 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined1 auStack_20 [16];
  
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    pcVar2 = (char *)(**(code **)(*(int *)(iVar1 + 0xc) + 4))(auStack_20,iVar1 + 0xc);
    uVar3 = 0;
    if (*pcVar2 == '\0') goto LAB_82defd70;
  }
  uVar3 = 1;
LAB_82defd70:
  *param_1 = uVar3;
  return param_1;
}

