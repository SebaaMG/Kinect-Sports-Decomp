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
extern int fn_822B17A8();
extern int fn_822BD338();
extern int fn_824CD030();


void fn_823D2808(int param_1,uint *param_2)

{
  int iVar1;
  char cVar3;
  int iVar2;
  
  cVar3 = fn_822BD338((ulonglong)*param_2 + 0x38,0xffffffff821b61d4);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x48c);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x34) != 0)) &&
       (iVar2 = fn_824CD030(iVar1), iVar2 != 0)) {
      fn_822B17A8(*(undefined4 *)(iVar1 + 0x34),0x1c,0);
    }
  }
  return;
}

