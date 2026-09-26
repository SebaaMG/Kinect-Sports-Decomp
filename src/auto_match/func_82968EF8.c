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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


undefined8 fn_82968EF8(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  pcVar2 = param_2;
  if (param_2 != (char *)0x0) {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)param_2;
    lVar4 = fn_8265C940(iVar3,0x24810000);
    if (lVar4 == 0) {
      return 0xffffffff8007000e;
    }
    fn_82F68CC0(lVar4,param_2,iVar3);
  }
  fn_8265C990(*(undefined4 *)(param_1 + 0xd0),0x24810000);
  *(int *)(param_1 + 0xd0) = (int)lVar4;
  return 0;
}

