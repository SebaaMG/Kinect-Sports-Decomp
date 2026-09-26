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
extern int fn_82511928();
extern int fn_82513D20();
extern int fn_828ACCB0();
extern int fn_828ACCE8();
extern int fn_828AE818();
extern unsigned int lbl_83297810;


void fn_82246748(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = fn_828ACCE8(*(undefined4 *)(param_1 + 8));
  if ((cVar2 != '\0') || (cVar2 = fn_828ACCB0(*(undefined4 *)(param_1 + 8)), cVar2 != '\0')) {
    fn_828AE818(*(undefined4 *)(param_1 + 8),param_2);
    uVar3 = (ulonglong)lbl_83297810;
    uVar1 = *(undefined4 *)(param_1 + 4);
    if (uVar3 == 0) {
      uVar3 = fn_82511928();
    }
    fn_82513D20(uVar3,uVar1,param_2);
  }
  return;
}

