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
extern int fn_8289D8D0();
extern int fn_828ACCB0();
extern int fn_828ACCE8();
extern int fn_828D2E20();
extern int fn_828D9A48();


undefined8 fn_828B0528(int param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = fn_8289D8D0();
  cVar3 = fn_828ACCB0(param_1);
  if (cVar3 == '\0') {
    cVar3 = fn_828ACCE8(param_1);
    bVar1 = false;
    if (cVar3 == '\0') goto LAB_828b0578;
  }
  bVar1 = true;
LAB_828b0578:
  if (((!bVar1) || (iVar2 == 0)) || (bVar1 = true, *(int *)(iVar2 + 4) != 1)) {
    bVar1 = false;
  }
  if ((bVar1) && ((*(int *)(param_1 + 0x58) == 0 || (cVar3 = fn_828D2E20(), cVar3 == '\0')))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (cVar3 = fn_828D9A48(param_1), cVar3 == '\0')) {
    return 1;
  }
  return 0;
}

