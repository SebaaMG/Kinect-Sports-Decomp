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
extern int fn_826A1798();
extern int fn_826BD928();
extern int fn_826C98F8();
extern int fn_826D2290();


void fn_826D2AD0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  fn_826A1798();
  piVar3 = (int *)(param_2 + 0x68);
  iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
  if (iVar1 == 2) {
    fn_826BD928(piVar3);
    cVar2 = fn_826C98F8();
    if ((cVar2 != '\0') && (iVar1 = fn_826D2290(param_1), iVar1 != 0)) {
      *(undefined1 *)(iVar1 + 0x35) = 1;
    }
  }
  *(uint *)(*(int *)(param_1 + 0xa0) + 0xb00) = *(uint *)(*(int *)(param_1 + 0xa0) + 0xb00) | 0x400;
  return;
}

