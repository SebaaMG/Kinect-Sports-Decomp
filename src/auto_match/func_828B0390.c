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
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828AE818();
extern int fn_828D2F28();
extern int fn_828DA9D8();
extern int fn_828DAA50();
extern int fn_828DAB70();
extern int fn_828DAC60();
extern int fn_828DAF10();
extern int fn_828DB128();
extern int fn_828DB2F8();


void fn_828B0390(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    return;
  }
  switch(*(undefined4 *)(iVar1 + 0xc)) {
  case 1:
    fn_828DAA50(iVar1);
    return;
  case 2:
    cVar2 = fn_828ACCE8(*(undefined4 *)(iVar1 + 8));
    if ((cVar2 == '\0') || (cVar2 = fn_828AD740(*(undefined4 *)(iVar1 + 8)), cVar2 != '\0')) {
      fn_828D2F28(iVar1);
      return;
    }
    break;
  case 3:
    fn_828DB128(iVar1);
    return;
  case 4:
    fn_828DB2F8(iVar1);
    return;
  case 5:
    fn_828DAB70(iVar1);
    return;
  case 6:
    fn_828DAC60(iVar1);
    return;
  case 7:
    fn_828DA9D8(iVar1);
    return;
  case 8:
    fn_828DAF10(iVar1);
    return;
  case 10:
    cVar2 = fn_828ACCE8(*(undefined4 *)(iVar1 + 8));
    if (cVar2 != '\0') {
      fn_828AE818(*(undefined4 *)(iVar1 + 8),0x10);
    }
  }
  return;
}

