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
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_8271FDB0();


void fn_82719EC8(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (((*(int **)(param_1 + 8) == (int *)0x0) ||
      (iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar2 != 0x19)) ||
     (cVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x40))(), cVar3 != '\0')) {
    puVar1 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar1);
    *puVar1 = 1;
  }
  else {
    uVar6 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    lVar5 = uVar6 + 0x10;
    if ((uVar6 & 0xffffffff) == 0) {
      lVar5 = 0;
      lVar4 = 0;
    }
    else {
      lVar4 = uVar6 + 0x10;
    }
    fn_8271FDB0(*(undefined4 *)(param_1 + 0x18),lVar4,lVar5);
    fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar6);
  }
  return;
}

